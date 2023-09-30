#pragma once

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
    ~LogPluginPlugin();

    bool initialize(const QStringList &arguments, QString *errorString);
    void extensionsInitialized();
    ShutdownFlag aboutToShutdown();

private:
    void triggerAction();
};

} // namespace Internal
} // namespace LogPlugin
