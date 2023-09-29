#ifndef LOGCATWATCHER_H
#define LOGCATWATCHER_H

#include <QFile>
#include <QMutex>
#include <QObject>
#include <QProcess>
#include <QTextStream>


class LogCatWatcher : public QObject
{
    Q_OBJECT
private:
    explicit LogCatWatcher(QObject *parent = nullptr);
    int m_nTimerID;   
    virtual void timerEvent( QTimerEvent *event);
    static LogCatWatcher  * _pInstance ;
    void checkRollFile();
    void checkDevice();
public:
    static LogCatWatcher * getInstance();
    ~LogCatWatcher();
    void init();
    void close();
    int static writeTxt(QString txt)     //注意#include<fstream>头文件
    {
        QFile f("./1.txt");
        if(!f.open(QIODevice::ReadWrite | QIODevice::Append))   //以读写且追加的方式写入文本
        {

        }
        QTextStream txtOutput(&f);
        txtOutput << txt << Qt::endl;
        f.close();
        return 0;
    }

signals:
    void onDeviceOffline();
    void onDeviceOnline();
    void onDeviceRestart();
    void onPrint(QString log);

private slots:
    void slot_deviceOffline();
    void slot_deviceOnline();
    void slot_deviceRestart();
};

#endif // LOGCATWATCHER_H
