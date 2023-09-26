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
    int logCnt = -1;
    virtual void timerEvent( QTimerEvent *event);
    static LogCatWatcher  * _pInstance ;
    void checkRollFile();
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

public slots:
};

#endif // LOGCATWATCHER_H
