#ifndef LOGPLUGINPLUGIN_H
#define LOGPLUGINPLUGIN_H

#include "logplugin_global.h"

#include <extensionsystem/iplugin.h>

namespace LogPlugin {
namespace Internal {

class LogPluginPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtCreatorPlugin" FILE "LogPlugin.json")

public:
    LogPluginPlugin();
    ~LogPluginPlugin() override;

    bool initialize(const QStringList &arguments, QString *errorString) override;
    void extensionsInitialized() override;
    ShutdownFlag aboutToShutdown() override;

private:
    void triggerAction();
};

} // namespace Internal
} // namespace LogPlugin

#endif // LOGPLUGINPLUGIN_H
