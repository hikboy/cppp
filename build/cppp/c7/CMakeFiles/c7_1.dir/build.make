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
include cppp/c7/CMakeFiles/c7_1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include cppp/c7/CMakeFiles/c7_1.dir/compiler_depend.make

# Include the progress variables for this target.
include cppp/c7/CMakeFiles/c7_1.dir/progress.make

# Include the compile flags for this target's objects.
include cppp/c7/CMakeFiles/c7_1.dir/flags.make

cppp/c7/CMakeFiles/c7_1.dir/c7_1.cpp.o: cppp/c7/CMakeFiles/c7_1.dir/flags.make
cppp/c7/CMakeFiles/c7_1.dir/c7_1.cpp.o: ../cppp/c7/c7_1.cpp
cppp/c7/CMakeFiles/c7_1.dir/c7_1.cpp.o: cppp/c7/CMakeFiles/c7_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/l/l/cppp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object cppp/c7/CMakeFiles/c7_1.dir/c7_1.cpp.o"
	cd /home/l/l/cppp/build/cppp/c7 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT cppp/c7/CMakeFiles/c7_1.dir/c7_1.cpp.o -MF CMakeFiles/c7_1.dir/c7_1.cpp.o.d -o CMakeFiles/c7_1.dir/c7_1.cpp.o -c /home/l/l/cppp/cppp/c7/c7_1.cpp

cppp/c7/CMakeFiles/c7_1.dir/c7_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c7_1.dir/c7_1.cpp.i"
	cd /home/l/l/cppp/build/cppp/c7 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/l/l/cppp/cppp/c7/c7_1.cpp > CMakeFiles/c7_1.dir/c7_1.cpp.i

cppp/c7/CMakeFiles/c7_1.dir/c7_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c7_1.dir/c7_1.cpp.s"
	cd /home/l/l/cppp/build/cppp/c7 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/l/l/cppp/cppp/c7/c7_1.cpp -o CMakeFiles/c7_1.dir/c7_1.cpp.s

cppp/c7/CMakeFiles/c7_1.dir/Sales_data.cpp.o: cppp/c7/CMakeFiles/c7_1.dir/flags.make
cppp/c7/CMakeFiles/c7_1.dir/Sales_data.cpp.o: ../cppp/c7/Sales_data.cpp
cppp/c7/CMakeFiles/c7_1.dir/Sales_data.cpp.o: cppp/c7/CMakeFiles/c7_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/l/l/cppp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object cppp/c7/CMakeFiles/c7_1.dir/Sales_data.cpp.o"
	cd /home/l/l/cppp/build/cppp/c7 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT cppp/c7/CMakeFiles/c7_1.dir/Sales_data.cpp.o -MF CMakeFiles/c7_1.dir/Sales_data.cpp.o.d -o CMakeFiles/c7_1.dir/Sales_data.cpp.o -c /home/l/l/cppp/cppp/c7/Sales_data.cpp

cppp/c7/CMakeFiles/c7_1.dir/Sales_data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c7_1.dir/Sales_data.cpp.i"
	cd /home/l/l/cppp/build/cppp/c7 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/l/l/cppp/cppp/c7/Sales_data.cpp > CMakeFiles/c7_1.dir/Sales_data.cpp.i

cppp/c7/CMakeFiles/c7_1.dir/Sales_data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c7_1.dir/Sales_data.cpp.s"
	cd /home/l/l/cppp/build/cppp/c7 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/l/l/cppp/cppp/c7/Sales_data.cpp -o CMakeFiles/c7_1.dir/Sales_data.cpp.s

cppp/c7/CMakeFiles/c7_1.dir/Screen.cpp.o: cppp/c7/CMakeFiles/c7_1.dir/flags.make
cppp/c7/CMakeFiles/c7_1.dir/Screen.cpp.o: ../cppp/c7/Screen.cpp
cppp/c7/CMakeFiles/c7_1.dir/Screen.cpp.o: cppp/c7/CMakeFiles/c7_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/l/l/cppp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object cppp/c7/CMakeFiles/c7_1.dir/Screen.cpp.o"
	cd /home/l/l/cppp/build/cppp/c7 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT cppp/c7/CMakeFiles/c7_1.dir/Screen.cpp.o -MF CMakeFiles/c7_1.dir/Screen.cpp.o.d -o CMakeFiles/c7_1.dir/Screen.cpp.o -c /home/l/l/cppp/cppp/c7/Screen.cpp

cppp/c7/CMakeFiles/c7_1.dir/Screen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c7_1.dir/Screen.cpp.i"
	cd /home/l/l/cppp/build/cppp/c7 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/l/l/cppp/cppp/c7/Screen.cpp > CMakeFiles/c7_1.dir/Screen.cpp.i

cppp/c7/CMakeFiles/c7_1.dir/Screen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c7_1.dir/Screen.cpp.s"
	cd /home/l/l/cppp/build/cppp/c7 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/l/l/cppp/cppp/c7/Screen.cpp -o CMakeFiles/c7_1.dir/Screen.cpp.s

cppp/c7/CMakeFiles/c7_1.dir/Window_mgr.cpp.o: cppp/c7/CMakeFiles/c7_1.dir/flags.make
cppp/c7/CMakeFiles/c7_1.dir/Window_mgr.cpp.o: ../cppp/c7/Window_mgr.cpp
cppp/c7/CMakeFiles/c7_1.dir/Window_mgr.cpp.o: cppp/c7/CMakeFiles/c7_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/l/l/cppp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object cppp/c7/CMakeFiles/c7_1.dir/Window_mgr.cpp.o"
	cd /home/l/l/cppp/build/cppp/c7 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT cppp/c7/CMakeFiles/c7_1.dir/Window_mgr.cpp.o -MF CMakeFiles/c7_1.dir/Window_mgr.cpp.o.d -o CMakeFiles/c7_1.dir/Window_mgr.cpp.o -c /home/l/l/cppp/cppp/c7/Window_mgr.cpp

cppp/c7/CMakeFiles/c7_1.dir/Window_mgr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c7_1.dir/Window_mgr.cpp.i"
	cd /home/l/l/cppp/build/cppp/c7 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/l/l/cppp/cppp/c7/Window_mgr.cpp > CMakeFiles/c7_1.dir/Window_mgr.cpp.i

cppp/c7/CMakeFiles/c7_1.dir/Window_mgr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c7_1.dir/Window_mgr.cpp.s"
	cd /home/l/l/cppp/build/cppp/c7 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/l/l/cppp/cppp/c7/Window_mgr.cpp -o CMakeFiles/c7_1.dir/Window_mgr.cpp.s

cppp/c7/CMakeFiles/c7_1.dir/Debug.cpp.o: cppp/c7/CMakeFiles/c7_1.dir/flags.make
cppp/c7/CMakeFiles/c7_1.dir/Debug.cpp.o: ../cppp/c7/Debug.cpp
cppp/c7/CMakeFiles/c7_1.dir/Debug.cpp.o: cppp/c7/CMakeFiles/c7_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/l/l/cppp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object cppp/c7/CMakeFiles/c7_1.dir/Debug.cpp.o"
	cd /home/l/l/cppp/build/cppp/c7 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT cppp/c7/CMakeFiles/c7_1.dir/Debug.cpp.o -MF CMakeFiles/c7_1.dir/Debug.cpp.o.d -o CMakeFiles/c7_1.dir/Debug.cpp.o -c /home/l/l/cppp/cppp/c7/Debug.cpp

cppp/c7/CMakeFiles/c7_1.dir/Debug.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c7_1.dir/Debug.cpp.i"
	cd /home/l/l/cppp/build/cppp/c7 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/l/l/cppp/cppp/c7/Debug.cpp > CMakeFiles/c7_1.dir/Debug.cpp.i

cppp/c7/CMakeFiles/c7_1.dir/Debug.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c7_1.dir/Debug.cpp.s"
	cd /home/l/l/cppp/build/cppp/c7 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/l/l/cppp/cppp/c7/Debug.cpp -o CMakeFiles/c7_1.dir/Debug.cpp.s

cppp/c7/CMakeFiles/c7_1.dir/Account.cpp.o: cppp/c7/CMakeFiles/c7_1.dir/flags.make
cppp/c7/CMakeFiles/c7_1.dir/Account.cpp.o: ../cppp/c7/Account.cpp
cppp/c7/CMakeFiles/c7_1.dir/Account.cpp.o: cppp/c7/CMakeFiles/c7_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/l/l/cppp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object cppp/c7/CMakeFiles/c7_1.dir/Account.cpp.o"
	cd /home/l/l/cppp/build/cppp/c7 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT cppp/c7/CMakeFiles/c7_1.dir/Account.cpp.o -MF CMakeFiles/c7_1.dir/Account.cpp.o.d -o CMakeFiles/c7_1.dir/Account.cpp.o -c /home/l/l/cppp/cppp/c7/Account.cpp

cppp/c7/CMakeFiles/c7_1.dir/Account.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c7_1.dir/Account.cpp.i"
	cd /home/l/l/cppp/build/cppp/c7 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/l/l/cppp/cppp/c7/Account.cpp > CMakeFiles/c7_1.dir/Account.cpp.i

cppp/c7/CMakeFiles/c7_1.dir/Account.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c7_1.dir/Account.cpp.s"
	cd /home/l/l/cppp/build/cppp/c7 && /usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/l/l/cppp/cppp/c7/Account.cpp -o CMakeFiles/c7_1.dir/Account.cpp.s

# Object files for target c7_1
c7_1_OBJECTS = \
"CMakeFiles/c7_1.dir/c7_1.cpp.o" \
"CMakeFiles/c7_1.dir/Sales_data.cpp.o" \
"CMakeFiles/c7_1.dir/Screen.cpp.o" \
"CMakeFiles/c7_1.dir/Window_mgr.cpp.o" \
"CMakeFiles/c7_1.dir/Debug.cpp.o" \
"CMakeFiles/c7_1.dir/Account.cpp.o"

# External object files for target c7_1
c7_1_EXTERNAL_OBJECTS =

cppp/c7/c7_1: cppp/c7/CMakeFiles/c7_1.dir/c7_1.cpp.o
cppp/c7/c7_1: cppp/c7/CMakeFiles/c7_1.dir/Sales_data.cpp.o
cppp/c7/c7_1: cppp/c7/CMakeFiles/c7_1.dir/Screen.cpp.o
cppp/c7/c7_1: cppp/c7/CMakeFiles/c7_1.dir/Window_mgr.cpp.o
cppp/c7/c7_1: cppp/c7/CMakeFiles/c7_1.dir/Debug.cpp.o
cppp/c7/c7_1: cppp/c7/CMakeFiles/c7_1.dir/Account.cpp.o
cppp/c7/c7_1: cppp/c7/CMakeFiles/c7_1.dir/build.make
cppp/c7/c7_1: cppp/c7/CMakeFiles/c7_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/l/l/cppp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable c7_1"
	cd /home/l/l/cppp/build/cppp/c7 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c7_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
cppp/c7/CMakeFiles/c7_1.dir/build: cppp/c7/c7_1
.PHONY : cppp/c7/CMakeFiles/c7_1.dir/build

cppp/c7/CMakeFiles/c7_1.dir/clean:
	cd /home/l/l/cppp/build/cppp/c7 && $(CMAKE_COMMAND) -P CMakeFiles/c7_1.dir/cmake_clean.cmake
.PHONY : cppp/c7/CMakeFiles/c7_1.dir/clean

cppp/c7/CMakeFiles/c7_1.dir/depend:
	cd /home/l/l/cppp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/l/l/cppp /home/l/l/cppp/cppp/c7 /home/l/l/cppp/build /home/l/l/cppp/build/cppp/c7 /home/l/l/cppp/build/cppp/c7/CMakeFiles/c7_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cppp/c7/CMakeFiles/c7_1.dir/depend
