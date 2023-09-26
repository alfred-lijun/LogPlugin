# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles JOM" Generator, CMake Version 3.24

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\Qt\Qt6.4.3\Tools\CMake_64\bin\cmake.exe

# The command to remove a file.
RM = D:\Qt\Qt6.4.3\Tools\CMake_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Qt\workplace\LogPlugin

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Qt\workplace\LogPlugin

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	D:\Qt\Qt6.4.3\Tools\CMake_64\bin\cmake-gui.exe -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache\fast: edit_cache
.PHONY : edit_cache\fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	D:\Qt\Qt6.4.3\Tools\CMake_64\bin\cmake.exe --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache\fast: rebuild_cache
.PHONY : rebuild_cache\fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Devel\" \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components\fast: list_install_components
.PHONY : list_install_components\fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	D:\Qt\Qt6.4.3\Tools\CMake_64\bin\cmake.exe -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install\fast: preinstall\fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	D:\Qt\Qt6.4.3\Tools\CMake_64\bin\cmake.exe -P cmake_install.cmake
.PHONY : install\fast

# Special rule for the target install/local
install\local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	D:\Qt\Qt6.4.3\Tools\CMake_64\bin\cmake.exe -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install\local

# Special rule for the target install/local
install\local\fast: preinstall\fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	D:\Qt\Qt6.4.3\Tools\CMake_64\bin\cmake.exe -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install\local\fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start D:\Qt\workplace\LogPlugin\CMakeFiles D:\Qt\workplace\LogPlugin\\CMakeFiles\progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 /nologo -$(MAKEFLAGS) all
	$(CMAKE_COMMAND) -E cmake_progress_start D:\Qt\workplace\LogPlugin\CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 /nologo -$(MAKEFLAGS) clean
.PHONY : clean

# The main clean target
clean\fast: clean
.PHONY : clean\fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 /nologo -$(MAKEFLAGS) preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall\fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 /nologo -$(MAKEFLAGS) preinstall
.PHONY : preinstall\fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named LogPlugin

# Build rule for target.
LogPlugin: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 /nologo -$(MAKEFLAGS) LogPlugin
.PHONY : LogPlugin

# fast build rule for target.
LogPlugin\fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\LogPlugin.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\LogPlugin.dir\build
.PHONY : LogPlugin\fast

#=============================================================================
# Target rules for targets named LogPlugin_autogen

# Build rule for target.
LogPlugin_autogen: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 /nologo -$(MAKEFLAGS) LogPlugin_autogen
.PHONY : LogPlugin_autogen

# fast build rule for target.
LogPlugin_autogen\fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\LogPlugin_autogen.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\LogPlugin_autogen.dir\build
.PHONY : LogPlugin_autogen\fast

LogCatClient.obj: LogCatClient.cpp.obj
.PHONY : LogCatClient.obj

# target to build an object file
LogCatClient.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\LogPlugin.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\LogPlugin.dir\LogCatClient.cpp.obj
.PHONY : LogCatClient.cpp.obj

LogCatClient.i: LogCatClient.cpp.i
.PHONY : LogCatClient.i

# target to preprocess a source file
LogCatClient.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\LogPlugin.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\LogPlugin.dir\LogCatClient.cpp.i
.PHONY : LogCatClient.cpp.i

LogCatClient.s: LogCatClient.cpp.s
.PHONY : LogCatClient.s

# target to generate assembly for a file
LogCatClient.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\LogPlugin.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\LogPlugin.dir\LogCatClient.cpp.s
.PHONY : LogCatClient.cpp.s

LogCatWatcher.obj: LogCatWatcher.cpp.obj
.PHONY : LogCatWatcher.obj

# target to build an object file
LogCatWatcher.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\LogPlugin.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\LogPlugin.dir\LogCatWatcher.cpp.obj
.PHONY : LogCatWatcher.cpp.obj

LogCatWatcher.i: LogCatWatcher.cpp.i
.PHONY : LogCatWatcher.i

# target to preprocess a source file
LogCatWatcher.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\LogPlugin.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\LogPlugin.dir\LogCatWatcher.cpp.i
.PHONY : LogCatWatcher.cpp.i

LogCatWatcher.s: LogCatWatcher.cpp.s
.PHONY : LogCatWatcher.s

# target to generate assembly for a file
LogCatWatcher.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\LogPlugin.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\LogPlugin.dir\LogCatWatcher.cpp.s
.PHONY : LogCatWatcher.cpp.s

LogPlugin_autogen\mocs_compilation.obj: LogPlugin_autogen\mocs_compilation.cpp.obj
.PHONY : LogPlugin_autogen\mocs_compilation.obj

# target to build an object file
LogPlugin_autogen\mocs_compilation.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\LogPlugin.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\LogPlugin.dir\LogPlugin_autogen\mocs_compilation.cpp.obj
.PHONY : LogPlugin_autogen\mocs_compilation.cpp.obj

LogPlugin_autogen\mocs_compilation.i: LogPlugin_autogen\mocs_compilation.cpp.i
.PHONY : LogPlugin_autogen\mocs_compilation.i

# target to preprocess a source file
LogPlugin_autogen\mocs_compilation.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\LogPlugin.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\LogPlugin.dir\LogPlugin_autogen\mocs_compilation.cpp.i
.PHONY : LogPlugin_autogen\mocs_compilation.cpp.i

LogPlugin_autogen\mocs_compilation.s: LogPlugin_autogen\mocs_compilation.cpp.s
.PHONY : LogPlugin_autogen\mocs_compilation.s

# target to generate assembly for a file
LogPlugin_autogen\mocs_compilation.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\LogPlugin.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\LogPlugin.dir\LogPlugin_autogen\mocs_compilation.cpp.s
.PHONY : LogPlugin_autogen\mocs_compilation.cpp.s

logplugin.obj: logplugin.cpp.obj
.PHONY : logplugin.obj

# target to build an object file
logplugin.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\LogPlugin.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\LogPlugin.dir\logplugin.cpp.obj
.PHONY : logplugin.cpp.obj

logplugin.i: logplugin.cpp.i
.PHONY : logplugin.i

# target to preprocess a source file
logplugin.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\LogPlugin.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\LogPlugin.dir\logplugin.cpp.i
.PHONY : logplugin.cpp.i

logplugin.s: logplugin.cpp.s
.PHONY : logplugin.s

# target to generate assembly for a file
logplugin.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\LogPlugin.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\LogPlugin.dir\logplugin.cpp.s
.PHONY : logplugin.cpp.s

# Help Target
help:
	@echo The following are some of the valid targets for this Makefile:
	@echo ... all (the default if no target is provided)
	@echo ... clean
	@echo ... depend
	@echo ... edit_cache
	@echo ... install
	@echo ... install/local
	@echo ... list_install_components
	@echo ... rebuild_cache
	@echo ... LogPlugin_autogen
	@echo ... LogPlugin
	@echo ... LogCatClient.obj
	@echo ... LogCatClient.i
	@echo ... LogCatClient.s
	@echo ... LogCatWatcher.obj
	@echo ... LogCatWatcher.i
	@echo ... LogCatWatcher.s
	@echo ... LogPlugin_autogen/mocs_compilation.obj
	@echo ... LogPlugin_autogen/mocs_compilation.i
	@echo ... LogPlugin_autogen/mocs_compilation.s
	@echo ... logplugin.obj
	@echo ... logplugin.i
	@echo ... logplugin.s
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 0
.PHONY : cmake_check_build_system
