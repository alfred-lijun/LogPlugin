#ifndef LOGCATWATCHER_H
#define LOGCATWATCHER_H

#include <QMutex>
#include <QObject>
#include <QProcess>

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
