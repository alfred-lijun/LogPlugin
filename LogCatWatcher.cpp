#include "LogCatWatcher.h"
#include <QDirIterator>
#include <QEvent>
#include <QThread>
#define TIMER_TIMEOUT  (3*1000)

class DeviceThread : public QThread{
    Q_OBJECT
public:
    explicit DeviceThread(QObject *parent = 0): QThread(parent){}
protected:
    virtual void run() Q_DECL_OVERRIDE {
        QProcess process(0);
        process.start("cmd");
        process.waitForStarted();
        process.write("adb devices\n");
        process.closeWriteChannel();
        process.waitForFinished();
        QString outStr = QString::fromStdString(process.readAllStandardOutput().constData());
        outStr = outStr.replace("devices","");

        if(outStr.contains("device")){
            emit onDeviceOnline();
        }else{
            emit onDeviceOffline();
        }
    }
signals:
    void onDeviceOnline();
    void onDeviceOffline();
};

int logCnt = -1;

class RollFileThread : public QThread{
    Q_OBJECT
public:
    explicit RollFileThread(QObject *parent = 0): QThread(parent){}
protected:
    virtual void run() Q_DECL_OVERRIDE {
        QProcess process(0);
        process.start("cmd");
        process.waitForStarted();
        process.write("adb shell \"cd /sdcard/cache/log && ls\"\n");
        process.closeWriteChannel();
        process.waitForFinished();
        QString outStr = QString::fromStdString(process.readAllStandardOutput().constData());
        outStr = outStr.replace("\r", "\t");
        outStr = outStr.replace("\n", "\t");
        int fileCnt = 0;
        QStringList items = outStr.split("\t");
        for(QString & item : items){
            if(!item.isEmpty() && item.contains("roll_file")){
                fileCnt++;
            }
        }

        if(logCnt < 0){
            logCnt = fileCnt;
        }else if(logCnt != fileCnt){
            logCnt = fileCnt;
            emit onDeviceRestart();
        }
    }
signals:
    void onDeviceRestart();
};

LogCatWatcher* LogCatWatcher::_pInstance = nullptr;

LogCatWatcher::LogCatWatcher(QObject *parent) : QObject(parent)
{

}

LogCatWatcher * LogCatWatcher::getInstance(){
    if(!_pInstance){
        if(!_pInstance){
            _pInstance = new LogCatWatcher;
            return _pInstance;

        }
    }
    return _pInstance;
}

void LogCatWatcher::init(){
    m_nTimerID = this->startTimer(TIMER_TIMEOUT);
}

LogCatWatcher::~LogCatWatcher(){
    close();
}

void LogCatWatcher::close(){
    this->killTimer(m_nTimerID);
}

void LogCatWatcher::slot_deviceOffline()
{
    emit onDeviceOffline();
}

void LogCatWatcher::slot_deviceOnline()
{
    emit onDeviceOnline();
}

void LogCatWatcher::slot_deviceRestart()
{
    emit onDeviceRestart();
}

void LogCatWatcher::checkRollFile(){
    RollFileThread *rollFileThread = new RollFileThread(this);
    connect(rollFileThread, &RollFileThread::onDeviceRestart, this, &LogCatWatcher::slot_deviceRestart);
    connect(rollFileThread, &RollFileThread::finished, rollFileThread, &RollFileThread::deleteLater);
    rollFileThread->start();
}

void LogCatWatcher::checkDevice(){
    DeviceThread *deviceThread = new DeviceThread(this);
    connect(deviceThread, &DeviceThread::onDeviceOnline, this, &LogCatWatcher::slot_deviceOnline);
    connect(deviceThread, &DeviceThread::onDeviceOffline, this, &LogCatWatcher::slot_deviceOffline);
    connect(deviceThread, &DeviceThread::finished, deviceThread, &DeviceThread::deleteLater);
    deviceThread->start();
}

void LogCatWatcher::timerEvent(QTimerEvent *event)  {
    if(event->timerId() == m_nTimerID){
        checkDevice();
        checkRollFile();
     }
}

#include "LogCatWatcher.moc"
