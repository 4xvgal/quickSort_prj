# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.0/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mac/Documents/codes/quickSort_prj

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mac/Documents/codes/quickSort_prj/build

# Include any dependencies generated for this target.
include src/Measuretime/CMakeFiles/Measuretime.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/Measuretime/CMakeFiles/Measuretime.dir/compiler_depend.make

# Include the progress variables for this target.
include src/Measuretime/CMakeFiles/Measuretime.dir/progress.make

# Include the compile flags for this target's objects.
include src/Measuretime/CMakeFiles/Measuretime.dir/flags.make

src/Measuretime/CMakeFiles/Measuretime.dir/measuretime.cpp.o: src/Measuretime/CMakeFiles/Measuretime.dir/flags.make
src/Measuretime/CMakeFiles/Measuretime.dir/measuretime.cpp.o: /Users/mac/Documents/codes/quickSort_prj/src/Measuretime/measuretime.cpp
src/Measuretime/CMakeFiles/Measuretime.dir/measuretime.cpp.o: src/Measuretime/CMakeFiles/Measuretime.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mac/Documents/codes/quickSort_prj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/Measuretime/CMakeFiles/Measuretime.dir/measuretime.cpp.o"
	cd /Users/mac/Documents/codes/quickSort_prj/build/src/Measuretime && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Measuretime/CMakeFiles/Measuretime.dir/measuretime.cpp.o -MF CMakeFiles/Measuretime.dir/measuretime.cpp.o.d -o CMakeFiles/Measuretime.dir/measuretime.cpp.o -c /Users/mac/Documents/codes/quickSort_prj/src/Measuretime/measuretime.cpp

src/Measuretime/CMakeFiles/Measuretime.dir/measuretime.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Measuretime.dir/measuretime.cpp.i"
	cd /Users/mac/Documents/codes/quickSort_prj/build/src/Measuretime && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/codes/quickSort_prj/src/Measuretime/measuretime.cpp > CMakeFiles/Measuretime.dir/measuretime.cpp.i

src/Measuretime/CMakeFiles/Measuretime.dir/measuretime.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Measuretime.dir/measuretime.cpp.s"
	cd /Users/mac/Documents/codes/quickSort_prj/build/src/Measuretime && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/codes/quickSort_prj/src/Measuretime/measuretime.cpp -o CMakeFiles/Measuretime.dir/measuretime.cpp.s

# Object files for target Measuretime
Measuretime_OBJECTS = \
"CMakeFiles/Measuretime.dir/measuretime.cpp.o"

# External object files for target Measuretime
Measuretime_EXTERNAL_OBJECTS =

lib/libMeasuretime.a: src/Measuretime/CMakeFiles/Measuretime.dir/measuretime.cpp.o
lib/libMeasuretime.a: src/Measuretime/CMakeFiles/Measuretime.dir/build.make
lib/libMeasuretime.a: src/Measuretime/CMakeFiles/Measuretime.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/mac/Documents/codes/quickSort_prj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../lib/libMeasuretime.a"
	cd /Users/mac/Documents/codes/quickSort_prj/build/src/Measuretime && $(CMAKE_COMMAND) -P CMakeFiles/Measuretime.dir/cmake_clean_target.cmake
	cd /Users/mac/Documents/codes/quickSort_prj/build/src/Measuretime && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Measuretime.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/Measuretime/CMakeFiles/Measuretime.dir/build: lib/libMeasuretime.a
.PHONY : src/Measuretime/CMakeFiles/Measuretime.dir/build

src/Measuretime/CMakeFiles/Measuretime.dir/clean:
	cd /Users/mac/Documents/codes/quickSort_prj/build/src/Measuretime && $(CMAKE_COMMAND) -P CMakeFiles/Measuretime.dir/cmake_clean.cmake
.PHONY : src/Measuretime/CMakeFiles/Measuretime.dir/clean

src/Measuretime/CMakeFiles/Measuretime.dir/depend:
	cd /Users/mac/Documents/codes/quickSort_prj/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mac/Documents/codes/quickSort_prj /Users/mac/Documents/codes/quickSort_prj/src/Measuretime /Users/mac/Documents/codes/quickSort_prj/build /Users/mac/Documents/codes/quickSort_prj/build/src/Measuretime /Users/mac/Documents/codes/quickSort_prj/build/src/Measuretime/CMakeFiles/Measuretime.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/Measuretime/CMakeFiles/Measuretime.dir/depend

