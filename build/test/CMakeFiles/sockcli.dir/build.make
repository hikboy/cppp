# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

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
CMAKE_COMMAND = /snap/cmake/1082/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1082/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/l/l/cppp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/l/l/cppp/build

# Include any dependencies generated for this target.
include test/CMakeFiles/sockcli.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/CMakeFiles/sockcli.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/sockcli.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/sockcli.dir/flags.make

test/CMakeFiles/sockcli.dir/socket_cli_select.cpp.o: test/CMakeFiles/sockcli.dir/flags.make
test/CMakeFiles/sockcli.dir/socket_cli_select.cpp.o: ../test/socket_cli_select.cpp
test/CMakeFiles/sockcli.dir/socket_cli_select.cpp.o: test/CMakeFiles/sockcli.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/l/l/cppp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/sockcli.dir/socket_cli_select.cpp.o"
	cd /home/l/l/cppp/build/test && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/sockcli.dir/socket_cli_select.cpp.o -MF CMakeFiles/sockcli.dir/socket_cli_select.cpp.o.d -o CMakeFiles/sockcli.dir/socket_cli_select.cpp.o -c /home/l/l/cppp/test/socket_cli_select.cpp

test/CMakeFiles/sockcli.dir/socket_cli_select.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sockcli.dir/socket_cli_select.cpp.i"
	cd /home/l/l/cppp/build/test && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/l/l/cppp/test/socket_cli_select.cpp > CMakeFiles/sockcli.dir/socket_cli_select.cpp.i

test/CMakeFiles/sockcli.dir/socket_cli_select.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sockcli.dir/socket_cli_select.cpp.s"
	cd /home/l/l/cppp/build/test && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/l/l/cppp/test/socket_cli_select.cpp -o CMakeFiles/sockcli.dir/socket_cli_select.cpp.s

# Object files for target sockcli
sockcli_OBJECTS = \
"CMakeFiles/sockcli.dir/socket_cli_select.cpp.o"

# External object files for target sockcli
sockcli_EXTERNAL_OBJECTS =

test/sockcli: test/CMakeFiles/sockcli.dir/socket_cli_select.cpp.o
test/sockcli: test/CMakeFiles/sockcli.dir/build.make
test/sockcli: test/CMakeFiles/sockcli.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/l/l/cppp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sockcli"
	cd /home/l/l/cppp/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sockcli.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/sockcli.dir/build: test/sockcli
.PHONY : test/CMakeFiles/sockcli.dir/build

test/CMakeFiles/sockcli.dir/clean:
	cd /home/l/l/cppp/build/test && $(CMAKE_COMMAND) -P CMakeFiles/sockcli.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/sockcli.dir/clean

test/CMakeFiles/sockcli.dir/depend:
	cd /home/l/l/cppp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/l/l/cppp /home/l/l/cppp/test /home/l/l/cppp/build /home/l/l/cppp/build/test /home/l/l/cppp/build/test/CMakeFiles/sockcli.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/sockcli.dir/depend

