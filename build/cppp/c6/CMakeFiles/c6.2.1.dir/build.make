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
include cppp/c6/CMakeFiles/c6.2.1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include cppp/c6/CMakeFiles/c6.2.1.dir/compiler_depend.make

# Include the progress variables for this target.
include cppp/c6/CMakeFiles/c6.2.1.dir/progress.make

# Include the compile flags for this target's objects.
include cppp/c6/CMakeFiles/c6.2.1.dir/flags.make

cppp/c6/CMakeFiles/c6.2.1.dir/c6.2.1.cpp.o: cppp/c6/CMakeFiles/c6.2.1.dir/flags.make
cppp/c6/CMakeFiles/c6.2.1.dir/c6.2.1.cpp.o: ../cppp/c6/c6.2.1.cpp
cppp/c6/CMakeFiles/c6.2.1.dir/c6.2.1.cpp.o: cppp/c6/CMakeFiles/c6.2.1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/l/l/cppp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object cppp/c6/CMakeFiles/c6.2.1.dir/c6.2.1.cpp.o"
	cd /home/l/l/cppp/build/cppp/c6 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT cppp/c6/CMakeFiles/c6.2.1.dir/c6.2.1.cpp.o -MF CMakeFiles/c6.2.1.dir/c6.2.1.cpp.o.d -o CMakeFiles/c6.2.1.dir/c6.2.1.cpp.o -c /home/l/l/cppp/cppp/c6/c6.2.1.cpp

cppp/c6/CMakeFiles/c6.2.1.dir/c6.2.1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c6.2.1.dir/c6.2.1.cpp.i"
	cd /home/l/l/cppp/build/cppp/c6 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/l/l/cppp/cppp/c6/c6.2.1.cpp > CMakeFiles/c6.2.1.dir/c6.2.1.cpp.i

cppp/c6/CMakeFiles/c6.2.1.dir/c6.2.1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c6.2.1.dir/c6.2.1.cpp.s"
	cd /home/l/l/cppp/build/cppp/c6 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/l/l/cppp/cppp/c6/c6.2.1.cpp -o CMakeFiles/c6.2.1.dir/c6.2.1.cpp.s

# Object files for target c6.2.1
c6_2_1_OBJECTS = \
"CMakeFiles/c6.2.1.dir/c6.2.1.cpp.o"

# External object files for target c6.2.1
c6_2_1_EXTERNAL_OBJECTS =

cppp/c6/c6.2.1: cppp/c6/CMakeFiles/c6.2.1.dir/c6.2.1.cpp.o
cppp/c6/c6.2.1: cppp/c6/CMakeFiles/c6.2.1.dir/build.make
cppp/c6/c6.2.1: cppp/c6/CMakeFiles/c6.2.1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/l/l/cppp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable c6.2.1"
	cd /home/l/l/cppp/build/cppp/c6 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c6.2.1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
cppp/c6/CMakeFiles/c6.2.1.dir/build: cppp/c6/c6.2.1
.PHONY : cppp/c6/CMakeFiles/c6.2.1.dir/build

cppp/c6/CMakeFiles/c6.2.1.dir/clean:
	cd /home/l/l/cppp/build/cppp/c6 && $(CMAKE_COMMAND) -P CMakeFiles/c6.2.1.dir/cmake_clean.cmake
.PHONY : cppp/c6/CMakeFiles/c6.2.1.dir/clean

cppp/c6/CMakeFiles/c6.2.1.dir/depend:
	cd /home/l/l/cppp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/l/l/cppp /home/l/l/cppp/cppp/c6 /home/l/l/cppp/build /home/l/l/cppp/build/cppp/c6 /home/l/l/cppp/build/cppp/c6/CMakeFiles/c6.2.1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cppp/c6/CMakeFiles/c6.2.1.dir/depend

