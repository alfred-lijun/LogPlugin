#pragma once

#include <QtGlobal>

#if defined(LOGPLUGIN_LIBRARY)
#  define LOGPLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define LOGPLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif
