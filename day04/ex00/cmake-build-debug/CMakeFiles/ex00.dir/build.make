# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/egums/CPP_modules/day04/ex00

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/egums/CPP_modules/day04/ex00/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex00.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex00.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex00.dir/flags.make

CMakeFiles/ex00.dir/main.cpp.o: CMakeFiles/ex00.dir/flags.make
CMakeFiles/ex00.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/egums/CPP_modules/day04/ex00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex00.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex00.dir/main.cpp.o -c /Users/egums/CPP_modules/day04/ex00/main.cpp

CMakeFiles/ex00.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex00.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/egums/CPP_modules/day04/ex00/main.cpp > CMakeFiles/ex00.dir/main.cpp.i

CMakeFiles/ex00.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex00.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/egums/CPP_modules/day04/ex00/main.cpp -o CMakeFiles/ex00.dir/main.cpp.s

CMakeFiles/ex00.dir/Sorcerer.cpp.o: CMakeFiles/ex00.dir/flags.make
CMakeFiles/ex00.dir/Sorcerer.cpp.o: ../Sorcerer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/egums/CPP_modules/day04/ex00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex00.dir/Sorcerer.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex00.dir/Sorcerer.cpp.o -c /Users/egums/CPP_modules/day04/ex00/Sorcerer.cpp

CMakeFiles/ex00.dir/Sorcerer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex00.dir/Sorcerer.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/egums/CPP_modules/day04/ex00/Sorcerer.cpp > CMakeFiles/ex00.dir/Sorcerer.cpp.i

CMakeFiles/ex00.dir/Sorcerer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex00.dir/Sorcerer.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/egums/CPP_modules/day04/ex00/Sorcerer.cpp -o CMakeFiles/ex00.dir/Sorcerer.cpp.s

CMakeFiles/ex00.dir/Victim.cpp.o: CMakeFiles/ex00.dir/flags.make
CMakeFiles/ex00.dir/Victim.cpp.o: ../Victim.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/egums/CPP_modules/day04/ex00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ex00.dir/Victim.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex00.dir/Victim.cpp.o -c /Users/egums/CPP_modules/day04/ex00/Victim.cpp

CMakeFiles/ex00.dir/Victim.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex00.dir/Victim.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/egums/CPP_modules/day04/ex00/Victim.cpp > CMakeFiles/ex00.dir/Victim.cpp.i

CMakeFiles/ex00.dir/Victim.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex00.dir/Victim.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/egums/CPP_modules/day04/ex00/Victim.cpp -o CMakeFiles/ex00.dir/Victim.cpp.s

CMakeFiles/ex00.dir/Peon.cpp.o: CMakeFiles/ex00.dir/flags.make
CMakeFiles/ex00.dir/Peon.cpp.o: ../Peon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/egums/CPP_modules/day04/ex00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ex00.dir/Peon.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex00.dir/Peon.cpp.o -c /Users/egums/CPP_modules/day04/ex00/Peon.cpp

CMakeFiles/ex00.dir/Peon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex00.dir/Peon.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/egums/CPP_modules/day04/ex00/Peon.cpp > CMakeFiles/ex00.dir/Peon.cpp.i

CMakeFiles/ex00.dir/Peon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex00.dir/Peon.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/egums/CPP_modules/day04/ex00/Peon.cpp -o CMakeFiles/ex00.dir/Peon.cpp.s

# Object files for target ex00
ex00_OBJECTS = \
"CMakeFiles/ex00.dir/main.cpp.o" \
"CMakeFiles/ex00.dir/Sorcerer.cpp.o" \
"CMakeFiles/ex00.dir/Victim.cpp.o" \
"CMakeFiles/ex00.dir/Peon.cpp.o"

# External object files for target ex00
ex00_EXTERNAL_OBJECTS =

ex00: CMakeFiles/ex00.dir/main.cpp.o
ex00: CMakeFiles/ex00.dir/Sorcerer.cpp.o
ex00: CMakeFiles/ex00.dir/Victim.cpp.o
ex00: CMakeFiles/ex00.dir/Peon.cpp.o
ex00: CMakeFiles/ex00.dir/build.make
ex00: CMakeFiles/ex00.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/egums/CPP_modules/day04/ex00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ex00"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex00.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex00.dir/build: ex00

.PHONY : CMakeFiles/ex00.dir/build

CMakeFiles/ex00.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex00.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex00.dir/clean

CMakeFiles/ex00.dir/depend:
	cd /Users/egums/CPP_modules/day04/ex00/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/egums/CPP_modules/day04/ex00 /Users/egums/CPP_modules/day04/ex00 /Users/egums/CPP_modules/day04/ex00/cmake-build-debug /Users/egums/CPP_modules/day04/ex00/cmake-build-debug /Users/egums/CPP_modules/day04/ex00/cmake-build-debug/CMakeFiles/ex00.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex00.dir/depend
