# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /opt/clion-2019.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.2.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/askar/CPP/E3D

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/askar/CPP/E3D/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Engine3D.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Engine3D.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Engine3D.dir/flags.make

CMakeFiles/Engine3D.dir/main.cpp.o: CMakeFiles/Engine3D.dir/flags.make
CMakeFiles/Engine3D.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/askar/CPP/E3D/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Engine3D.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Engine3D.dir/main.cpp.o -c /home/askar/CPP/E3D/main.cpp

CMakeFiles/Engine3D.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Engine3D.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/askar/CPP/E3D/main.cpp > CMakeFiles/Engine3D.dir/main.cpp.i

CMakeFiles/Engine3D.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Engine3D.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/askar/CPP/E3D/main.cpp -o CMakeFiles/Engine3D.dir/main.cpp.s

CMakeFiles/Engine3D.dir/src/Point.cpp.o: CMakeFiles/Engine3D.dir/flags.make
CMakeFiles/Engine3D.dir/src/Point.cpp.o: ../src/Point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/askar/CPP/E3D/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Engine3D.dir/src/Point.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Engine3D.dir/src/Point.cpp.o -c /home/askar/CPP/E3D/src/Point.cpp

CMakeFiles/Engine3D.dir/src/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Engine3D.dir/src/Point.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/askar/CPP/E3D/src/Point.cpp > CMakeFiles/Engine3D.dir/src/Point.cpp.i

CMakeFiles/Engine3D.dir/src/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Engine3D.dir/src/Point.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/askar/CPP/E3D/src/Point.cpp -o CMakeFiles/Engine3D.dir/src/Point.cpp.s

CMakeFiles/Engine3D.dir/src/Drawable.cpp.o: CMakeFiles/Engine3D.dir/flags.make
CMakeFiles/Engine3D.dir/src/Drawable.cpp.o: ../src/Drawable.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/askar/CPP/E3D/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Engine3D.dir/src/Drawable.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Engine3D.dir/src/Drawable.cpp.o -c /home/askar/CPP/E3D/src/Drawable.cpp

CMakeFiles/Engine3D.dir/src/Drawable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Engine3D.dir/src/Drawable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/askar/CPP/E3D/src/Drawable.cpp > CMakeFiles/Engine3D.dir/src/Drawable.cpp.i

CMakeFiles/Engine3D.dir/src/Drawable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Engine3D.dir/src/Drawable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/askar/CPP/E3D/src/Drawable.cpp -o CMakeFiles/Engine3D.dir/src/Drawable.cpp.s

CMakeFiles/Engine3D.dir/src/Model.cpp.o: CMakeFiles/Engine3D.dir/flags.make
CMakeFiles/Engine3D.dir/src/Model.cpp.o: ../src/Model.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/askar/CPP/E3D/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Engine3D.dir/src/Model.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Engine3D.dir/src/Model.cpp.o -c /home/askar/CPP/E3D/src/Model.cpp

CMakeFiles/Engine3D.dir/src/Model.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Engine3D.dir/src/Model.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/askar/CPP/E3D/src/Model.cpp > CMakeFiles/Engine3D.dir/src/Model.cpp.i

CMakeFiles/Engine3D.dir/src/Model.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Engine3D.dir/src/Model.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/askar/CPP/E3D/src/Model.cpp -o CMakeFiles/Engine3D.dir/src/Model.cpp.s

CMakeFiles/Engine3D.dir/src/Session.cpp.o: CMakeFiles/Engine3D.dir/flags.make
CMakeFiles/Engine3D.dir/src/Session.cpp.o: ../src/Session.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/askar/CPP/E3D/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Engine3D.dir/src/Session.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Engine3D.dir/src/Session.cpp.o -c /home/askar/CPP/E3D/src/Session.cpp

CMakeFiles/Engine3D.dir/src/Session.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Engine3D.dir/src/Session.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/askar/CPP/E3D/src/Session.cpp > CMakeFiles/Engine3D.dir/src/Session.cpp.i

CMakeFiles/Engine3D.dir/src/Session.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Engine3D.dir/src/Session.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/askar/CPP/E3D/src/Session.cpp -o CMakeFiles/Engine3D.dir/src/Session.cpp.s

CMakeFiles/Engine3D.dir/src/Line.cpp.o: CMakeFiles/Engine3D.dir/flags.make
CMakeFiles/Engine3D.dir/src/Line.cpp.o: ../src/Line.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/askar/CPP/E3D/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Engine3D.dir/src/Line.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Engine3D.dir/src/Line.cpp.o -c /home/askar/CPP/E3D/src/Line.cpp

CMakeFiles/Engine3D.dir/src/Line.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Engine3D.dir/src/Line.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/askar/CPP/E3D/src/Line.cpp > CMakeFiles/Engine3D.dir/src/Line.cpp.i

CMakeFiles/Engine3D.dir/src/Line.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Engine3D.dir/src/Line.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/askar/CPP/E3D/src/Line.cpp -o CMakeFiles/Engine3D.dir/src/Line.cpp.s

CMakeFiles/Engine3D.dir/src/Component.cpp.o: CMakeFiles/Engine3D.dir/flags.make
CMakeFiles/Engine3D.dir/src/Component.cpp.o: ../src/Component.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/askar/CPP/E3D/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Engine3D.dir/src/Component.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Engine3D.dir/src/Component.cpp.o -c /home/askar/CPP/E3D/src/Component.cpp

CMakeFiles/Engine3D.dir/src/Component.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Engine3D.dir/src/Component.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/askar/CPP/E3D/src/Component.cpp > CMakeFiles/Engine3D.dir/src/Component.cpp.i

CMakeFiles/Engine3D.dir/src/Component.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Engine3D.dir/src/Component.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/askar/CPP/E3D/src/Component.cpp -o CMakeFiles/Engine3D.dir/src/Component.cpp.s

CMakeFiles/Engine3D.dir/src/FileReader.cpp.o: CMakeFiles/Engine3D.dir/flags.make
CMakeFiles/Engine3D.dir/src/FileReader.cpp.o: ../src/FileReader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/askar/CPP/E3D/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Engine3D.dir/src/FileReader.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Engine3D.dir/src/FileReader.cpp.o -c /home/askar/CPP/E3D/src/FileReader.cpp

CMakeFiles/Engine3D.dir/src/FileReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Engine3D.dir/src/FileReader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/askar/CPP/E3D/src/FileReader.cpp > CMakeFiles/Engine3D.dir/src/FileReader.cpp.i

CMakeFiles/Engine3D.dir/src/FileReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Engine3D.dir/src/FileReader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/askar/CPP/E3D/src/FileReader.cpp -o CMakeFiles/Engine3D.dir/src/FileReader.cpp.s

# Object files for target Engine3D
Engine3D_OBJECTS = \
"CMakeFiles/Engine3D.dir/main.cpp.o" \
"CMakeFiles/Engine3D.dir/src/Point.cpp.o" \
"CMakeFiles/Engine3D.dir/src/Drawable.cpp.o" \
"CMakeFiles/Engine3D.dir/src/Model.cpp.o" \
"CMakeFiles/Engine3D.dir/src/Session.cpp.o" \
"CMakeFiles/Engine3D.dir/src/Line.cpp.o" \
"CMakeFiles/Engine3D.dir/src/Component.cpp.o" \
"CMakeFiles/Engine3D.dir/src/FileReader.cpp.o"

# External object files for target Engine3D
Engine3D_EXTERNAL_OBJECTS =

Engine3D: CMakeFiles/Engine3D.dir/main.cpp.o
Engine3D: CMakeFiles/Engine3D.dir/src/Point.cpp.o
Engine3D: CMakeFiles/Engine3D.dir/src/Drawable.cpp.o
Engine3D: CMakeFiles/Engine3D.dir/src/Model.cpp.o
Engine3D: CMakeFiles/Engine3D.dir/src/Session.cpp.o
Engine3D: CMakeFiles/Engine3D.dir/src/Line.cpp.o
Engine3D: CMakeFiles/Engine3D.dir/src/Component.cpp.o
Engine3D: CMakeFiles/Engine3D.dir/src/FileReader.cpp.o
Engine3D: CMakeFiles/Engine3D.dir/build.make
Engine3D: CMakeFiles/Engine3D.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/askar/CPP/E3D/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable Engine3D"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Engine3D.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Engine3D.dir/build: Engine3D

.PHONY : CMakeFiles/Engine3D.dir/build

CMakeFiles/Engine3D.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Engine3D.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Engine3D.dir/clean

CMakeFiles/Engine3D.dir/depend:
	cd /home/askar/CPP/E3D/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/askar/CPP/E3D /home/askar/CPP/E3D /home/askar/CPP/E3D/cmake-build-debug /home/askar/CPP/E3D/cmake-build-debug /home/askar/CPP/E3D/cmake-build-debug/CMakeFiles/Engine3D.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Engine3D.dir/depend

