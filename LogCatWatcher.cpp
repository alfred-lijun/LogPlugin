#include "LogCatWatcher.h"
#include <QDirIterator>
#include <QEvent>
#define TIMER_TIMEOUT  (2*1000)

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

void LogCatWatcher::checkRollFile(){

    QProcess process(0);
    process.start("cmd");
    process.waitForStarted();
    process.write("adb shell \"cd /sdcard/cache/log && ls\"\n");
    process.closeWriteChannel();
    process.waitForFinished();
    QString outStr = QString::fromStdString(process.readAllStandardOutput().constData());
    outStr = outStr.replace("\r", "");
    int fileCnt = 0;
    QStringList items1 = outStr.split("\n");
    for(QString & item1 : items1){
        QStringList items2 = item1.split("\t");
        for(QString & item2 : items2){
            if(!item2.isEmpty() && item2.contains("roll_file")){
                fileCnt++;
            }
        }
    }

    if(logCnt < 0){
        logCnt = fileCnt;
    }else if(logCnt != fileCnt){
        logCnt = fileCnt;
        emit onDeviceRestart();
    }
}

void LogCatWatcher::timerEvent(QTimerEvent *event)  {
    if(event->timerId() == m_nTimerID){
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

        checkRollFile();
     }
}
