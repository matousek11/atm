# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/lukasmatousek/Desktop/programovani/ostatni/cpp/atm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lukasmatousek/Desktop/programovani/ostatni/cpp/atm

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/Applications/CMake.app/Contents/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/Applications/CMake.app/Contents/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/lukasmatousek/Desktop/programovani/ostatni/cpp/atm/CMakeFiles /Users/lukasmatousek/Desktop/programovani/ostatni/cpp/atm//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/lukasmatousek/Desktop/programovani/ostatni/cpp/atm/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named MyExecutable

# Build rule for target.
MyExecutable: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 MyExecutable
.PHONY : MyExecutable

# fast build rule for target.
MyExecutable/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/build
.PHONY : MyExecutable/fast

main.o: main.cpp.o
.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i
.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s
.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/main.cpp.s
.PHONY : main.cpp.s

services/AtmConsole.o: services/AtmConsole.cpp.o
.PHONY : services/AtmConsole.o

# target to build an object file
services/AtmConsole.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/services/AtmConsole.cpp.o
.PHONY : services/AtmConsole.cpp.o

services/AtmConsole.i: services/AtmConsole.cpp.i
.PHONY : services/AtmConsole.i

# target to preprocess a source file
services/AtmConsole.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/services/AtmConsole.cpp.i
.PHONY : services/AtmConsole.cpp.i

services/AtmConsole.s: services/AtmConsole.cpp.s
.PHONY : services/AtmConsole.s

# target to generate assembly for a file
services/AtmConsole.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/services/AtmConsole.cpp.s
.PHONY : services/AtmConsole.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... MyExecutable"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... services/AtmConsole.o"
	@echo "... services/AtmConsole.i"
	@echo "... services/AtmConsole.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

