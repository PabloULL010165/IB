# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/usuario/IB/IB-Practica11-files/read_DFA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/IB/IB-Practica11-files/read_DFA/build

# Include any dependencies generated for this target.
include CMakeFiles/read_DFA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/read_DFA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/read_DFA.dir/flags.make

CMakeFiles/read_DFA.dir/read_DFA.cc.o: CMakeFiles/read_DFA.dir/flags.make
CMakeFiles/read_DFA.dir/read_DFA.cc.o: ../read_DFA.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/IB/IB-Practica11-files/read_DFA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/read_DFA.dir/read_DFA.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/read_DFA.dir/read_DFA.cc.o -c /home/usuario/IB/IB-Practica11-files/read_DFA/read_DFA.cc

CMakeFiles/read_DFA.dir/read_DFA.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/read_DFA.dir/read_DFA.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/IB/IB-Practica11-files/read_DFA/read_DFA.cc > CMakeFiles/read_DFA.dir/read_DFA.cc.i

CMakeFiles/read_DFA.dir/read_DFA.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/read_DFA.dir/read_DFA.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/IB/IB-Practica11-files/read_DFA/read_DFA.cc -o CMakeFiles/read_DFA.dir/read_DFA.cc.s

# Object files for target read_DFA
read_DFA_OBJECTS = \
"CMakeFiles/read_DFA.dir/read_DFA.cc.o"

# External object files for target read_DFA
read_DFA_EXTERNAL_OBJECTS =

read_DFA: CMakeFiles/read_DFA.dir/read_DFA.cc.o
read_DFA: CMakeFiles/read_DFA.dir/build.make
read_DFA: CMakeFiles/read_DFA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/usuario/IB/IB-Practica11-files/read_DFA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable read_DFA"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/read_DFA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/read_DFA.dir/build: read_DFA

.PHONY : CMakeFiles/read_DFA.dir/build

CMakeFiles/read_DFA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/read_DFA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/read_DFA.dir/clean

CMakeFiles/read_DFA.dir/depend:
	cd /home/usuario/IB/IB-Practica11-files/read_DFA/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/IB/IB-Practica11-files/read_DFA /home/usuario/IB/IB-Practica11-files/read_DFA /home/usuario/IB/IB-Practica11-files/read_DFA/build /home/usuario/IB/IB-Practica11-files/read_DFA/build /home/usuario/IB/IB-Practica11-files/read_DFA/build/CMakeFiles/read_DFA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/read_DFA.dir/depend

