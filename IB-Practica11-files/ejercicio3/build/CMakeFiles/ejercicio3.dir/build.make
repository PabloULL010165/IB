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
CMAKE_SOURCE_DIR = /home/usuario/IB/IB-Practica11-files/ejercicio3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/IB/IB-Practica11-files/ejercicio3/build

# Include any dependencies generated for this target.
include CMakeFiles/ejercicio3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ejercicio3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ejercicio3.dir/flags.make

CMakeFiles/ejercicio3.dir/ejercicio3.cc.o: CMakeFiles/ejercicio3.dir/flags.make
CMakeFiles/ejercicio3.dir/ejercicio3.cc.o: ../ejercicio3.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/IB/IB-Practica11-files/ejercicio3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ejercicio3.dir/ejercicio3.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ejercicio3.dir/ejercicio3.cc.o -c /home/usuario/IB/IB-Practica11-files/ejercicio3/ejercicio3.cc

CMakeFiles/ejercicio3.dir/ejercicio3.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ejercicio3.dir/ejercicio3.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/IB/IB-Practica11-files/ejercicio3/ejercicio3.cc > CMakeFiles/ejercicio3.dir/ejercicio3.cc.i

CMakeFiles/ejercicio3.dir/ejercicio3.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ejercicio3.dir/ejercicio3.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/IB/IB-Practica11-files/ejercicio3/ejercicio3.cc -o CMakeFiles/ejercicio3.dir/ejercicio3.cc.s

# Object files for target ejercicio3
ejercicio3_OBJECTS = \
"CMakeFiles/ejercicio3.dir/ejercicio3.cc.o"

# External object files for target ejercicio3
ejercicio3_EXTERNAL_OBJECTS =

ejercicio3: CMakeFiles/ejercicio3.dir/ejercicio3.cc.o
ejercicio3: CMakeFiles/ejercicio3.dir/build.make
ejercicio3: CMakeFiles/ejercicio3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/usuario/IB/IB-Practica11-files/ejercicio3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ejercicio3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ejercicio3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ejercicio3.dir/build: ejercicio3

.PHONY : CMakeFiles/ejercicio3.dir/build

CMakeFiles/ejercicio3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ejercicio3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ejercicio3.dir/clean

CMakeFiles/ejercicio3.dir/depend:
	cd /home/usuario/IB/IB-Practica11-files/ejercicio3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/IB/IB-Practica11-files/ejercicio3 /home/usuario/IB/IB-Practica11-files/ejercicio3 /home/usuario/IB/IB-Practica11-files/ejercicio3/build /home/usuario/IB/IB-Practica11-files/ejercicio3/build /home/usuario/IB/IB-Practica11-files/ejercicio3/build/CMakeFiles/ejercicio3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ejercicio3.dir/depend

