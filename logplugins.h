#ifndef LOGPLUGINSPLUGIN_H
#define LOGPLUGINSPLUGIN_H

#include "logplugins_global.h"

#include <extensionsystem/iplugin.h>

namespace LogPlugins {
namespace Internal {

class LogPluginsPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtCreatorPlugin" FILE "LogPlugins.json")

public:
    LogPluginsPlugin();
    ~LogPluginsPlugin() override;

    bool initialize(const QStringList &arguments, QString *errorString) override;
    void extensionsInitialized() override;
    ShutdownFlag aboutToShutdown() override;

private:
    void triggerAction();
};

} // namespace Internal
} // namespace LogPlugins

#endif // LOGPLUGINSPLUGIN_H
