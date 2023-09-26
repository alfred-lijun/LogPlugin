#include "LogCatClient.h"
#include "LogCatWatcher.h"
#include <QDebug>
#include <QMessageBox>
#include <coreplugin/icore.h>
#include <coreplugin/icontext.h>
#include <coreplugin/actionmanager/actionmanager.h>
#include <coreplugin/actionmanager/command.h>
#include <coreplugin/actionmanager/actioncontainer.h>
#include <coreplugin/coreconstants.h>
#include <coreplugin/messagemanager.h>

LogCatClient* LogCatClient::_pInstance = nullptr;
QMutex LogCatClient::_mutex;

LogCatClient::LogCatClient(){

}

void LogCatClient::init(){
    //Core::ICore::instance()->actionManager();
    Core::ICore::instance();

    cmd = new QProcess;
    connect(cmd, &QProcess::readyReadStandardOutput,this,&LogCatClient::on_readyReadStandardOutput);
    connect(cmd, &QProcess::readyReadStandardError,this,&LogCatClient::on_readyReadStandardError);
    connect(cmd, SIGNAL(finished(int,QProcess::ExitStatus)), this, SLOT(sendProcessCompleted(int,QProcess::ExitStatus)));
    connect(cmd, SIGNAL(error(QProcess::ProcessError)), this, SLOT(sendProcessError(QProcess::ProcessError)));
    cmd->setProgram("cmd");
    cmd->start();

    cmd->waitForStarted();
    cmd->write("adb shell tail -f /mnt/sdcard/cache/log/roll_file.log\n");

    connect(LogCatWatcher::getInstance(), &LogCatWatcher::onDeviceOnline, this,[&](){
        if(!isDeviceOnline){
            restart();
            isDeviceOnline = true;
        }
    });

    connect(LogCatWatcher::getInstance(), &LogCatWatcher::onDeviceOffline, this,[&](){
        isDeviceOnline = false;
        Core::MessageManager::writeSilently(tr("usb device offline"));
//        Core::MessageManager::write("usb device offline", Core::MessageManager::Silent);
    });

    connect(LogCatWatcher::getInstance(), &LogCatWatcher::onPrint, this,[&](QString log){
        Core::MessageManager::writeSilently(log);
//        Core::MessageManager::write("usb device offline", Core::MessageManager::Silent);
    });

    connect(LogCatWatcher::getInstance(), &LogCatWatcher::onDeviceRestart, this,[&](){
        restart();
    });
}

void LogCatClient::restart(){
    cmd->waitForStarted();
    cmd->write("adb shell tail -f /mnt/sdcard/cache/log/roll_file.log\n");
}

void LogCatClient::sendProcessCompleted(int exitError, QProcess::ExitStatus exitStatus){
    Core::MessageManager::writeSilently("ExitStatus exitError: " + QString::number(exitError) + "  exitStatus: " + QString::number(exitStatus));
}

void LogCatClient::sendProcessError(QProcess::ProcessError error){
    Core::MessageManager::writeSilently("ProcessError: " + QString::number(error));
}

LogCatClient *LogCatClient::getInstance(){
    if(!_pInstance){
        QMutexLocker lock(&LogCatClient::_mutex);
        if(!_pInstance){
            _pInstance = new LogCatClient;
            return _pInstance;
        }
    }
    return _pInstance;
}

LogCatClient::~LogCatClient(){
    if (cmd->state() == QProcess::Running){
        cmd->terminate();
        cmd->waitForFinished();
    }
}

void LogCatClient::close(){
    disconnect(cmd, &QProcess::readyReadStandardOutput,this,&LogCatClient::on_readyReadStandardOutput);
    disconnect(cmd, &QProcess::readyReadStandardError,this,&LogCatClient::on_readyReadStandardError);
    disconnect(cmd, SIGNAL(finished(int,QProcess::ExitStatus)), this, SLOT(sendProcessCompleted(int,QProcess::ExitStatus)));
    disconnect(cmd, SIGNAL(error(QProcess::ProcessError)), this, SLOT(sendProcessError(QProcess::ProcessError)));
    cmd->terminate();
    cmd->waitForFinished();
    cmd->kill();
    cmd->close();
    delete cmd;
}

void LogCatClient::on_readyReadStandardOutput(){
    Core::MessageManager::writeSilently(QString::fromStdString(cmd->readAllStandardOutput().constData()));
//    Core::MessageManager::write(outStr, Core::MessageManager::Silent);
}

void LogCatClient::on_readyReadStandardError(){
    Core::MessageManager::writeSilently(QString::fromStdString(cmd->readAllStandardError().constData()));
//    Core::MessageManager::write(outStr, Core::MessageManager::Silent);
}
