# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /app/extra/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /app/extra/clion/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/luis/CLionProjects/ed-tp2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/luis/CLionProjects/ed-tp2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ed_tp2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ed_tp2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ed_tp2.dir/flags.make

CMakeFiles/ed_tp2.dir/main.cc.o: CMakeFiles/ed_tp2.dir/flags.make
CMakeFiles/ed_tp2.dir/main.cc.o: ../main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luis/CLionProjects/ed-tp2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ed_tp2.dir/main.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ed_tp2.dir/main.cc.o -c /home/luis/CLionProjects/ed-tp2/main.cc

CMakeFiles/ed_tp2.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ed_tp2.dir/main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/luis/CLionProjects/ed-tp2/main.cc > CMakeFiles/ed_tp2.dir/main.cc.i

CMakeFiles/ed_tp2.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ed_tp2.dir/main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/luis/CLionProjects/ed-tp2/main.cc -o CMakeFiles/ed_tp2.dir/main.cc.s

CMakeFiles/ed_tp2.dir/models/civilization/Civilization.cpp.o: CMakeFiles/ed_tp2.dir/flags.make
CMakeFiles/ed_tp2.dir/models/civilization/Civilization.cpp.o: ../models/civilization/Civilization.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luis/CLionProjects/ed-tp2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ed_tp2.dir/models/civilization/Civilization.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ed_tp2.dir/models/civilization/Civilization.cpp.o -c /home/luis/CLionProjects/ed-tp2/models/civilization/Civilization.cpp

CMakeFiles/ed_tp2.dir/models/civilization/Civilization.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ed_tp2.dir/models/civilization/Civilization.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/luis/CLionProjects/ed-tp2/models/civilization/Civilization.cpp > CMakeFiles/ed_tp2.dir/models/civilization/Civilization.cpp.i

CMakeFiles/ed_tp2.dir/models/civilization/Civilization.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ed_tp2.dir/models/civilization/Civilization.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/luis/CLionProjects/ed-tp2/models/civilization/Civilization.cpp -o CMakeFiles/ed_tp2.dir/models/civilization/Civilization.cpp.s

# Object files for target ed_tp2
ed_tp2_OBJECTS = \
"CMakeFiles/ed_tp2.dir/main.cc.o" \
"CMakeFiles/ed_tp2.dir/models/civilization/Civilization.cpp.o"

# External object files for target ed_tp2
ed_tp2_EXTERNAL_OBJECTS =

ed_tp2: CMakeFiles/ed_tp2.dir/main.cc.o
ed_tp2: CMakeFiles/ed_tp2.dir/models/civilization/Civilization.cpp.o
ed_tp2: CMakeFiles/ed_tp2.dir/build.make
ed_tp2: CMakeFiles/ed_tp2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/luis/CLionProjects/ed-tp2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ed_tp2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ed_tp2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ed_tp2.dir/build: ed_tp2

.PHONY : CMakeFiles/ed_tp2.dir/build

CMakeFiles/ed_tp2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ed_tp2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ed_tp2.dir/clean

CMakeFiles/ed_tp2.dir/depend:
	cd /home/luis/CLionProjects/ed-tp2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/luis/CLionProjects/ed-tp2 /home/luis/CLionProjects/ed-tp2 /home/luis/CLionProjects/ed-tp2/cmake-build-debug /home/luis/CLionProjects/ed-tp2/cmake-build-debug /home/luis/CLionProjects/ed-tp2/cmake-build-debug/CMakeFiles/ed_tp2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ed_tp2.dir/depend

