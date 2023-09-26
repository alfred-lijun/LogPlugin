#ifndef LOGCATCLIENT_H
#define LOGCATCLIENT_H

#include <QMutex>
#include <QProcess>


class LogCatClient : public QObject
{
    Q_OBJECT
public:
    static LogCatClient * getInstance();
    ~LogCatClient();
    void init();
    void close();
    void restart();
private slots:
    void on_readyReadStandardOutput();
    void on_readyReadStandardError();
    void sendProcessCompleted(int, QProcess::ExitStatus);
    void sendProcessError(QProcess::ProcessError error);

signals:
    void sendLog(QString);

private:
     LogCatClient();
    QProcess *cmd;
    static QMutex _mutex;
    static LogCatClient  * _pInstance ;
    bool isDeviceOnline = true;    
};

#endif // LOGCATCLIENT_H
