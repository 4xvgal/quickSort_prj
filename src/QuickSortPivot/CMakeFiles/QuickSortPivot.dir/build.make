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
CMAKE_BINARY_DIR = /Users/mac/Documents/codes/quickSort_prj

# Include any dependencies generated for this target.
include src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/compiler_depend.make

# Include the progress variables for this target.
include src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/progress.make

# Include the compile flags for this target's objects.
include src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/flags.make

src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/QuickSortPivot.cpp.o: src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/flags.make
src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/QuickSortPivot.cpp.o: src/QuickSortPivot/QuickSortPivot.cpp
src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/QuickSortPivot.cpp.o: src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mac/Documents/codes/quickSort_prj/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/QuickSortPivot.cpp.o"
	cd /Users/mac/Documents/codes/quickSort_prj/src/QuickSortPivot && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/QuickSortPivot.cpp.o -MF CMakeFiles/QuickSortPivot.dir/QuickSortPivot.cpp.o.d -o CMakeFiles/QuickSortPivot.dir/QuickSortPivot.cpp.o -c /Users/mac/Documents/codes/quickSort_prj/src/QuickSortPivot/QuickSortPivot.cpp

src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/QuickSortPivot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QuickSortPivot.dir/QuickSortPivot.cpp.i"
	cd /Users/mac/Documents/codes/quickSort_prj/src/QuickSortPivot && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/codes/quickSort_prj/src/QuickSortPivot/QuickSortPivot.cpp > CMakeFiles/QuickSortPivot.dir/QuickSortPivot.cpp.i

src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/QuickSortPivot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QuickSortPivot.dir/QuickSortPivot.cpp.s"
	cd /Users/mac/Documents/codes/quickSort_prj/src/QuickSortPivot && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/codes/quickSort_prj/src/QuickSortPivot/QuickSortPivot.cpp -o CMakeFiles/QuickSortPivot.dir/QuickSortPivot.cpp.s

# Object files for target QuickSortPivot
QuickSortPivot_OBJECTS = \
"CMakeFiles/QuickSortPivot.dir/QuickSortPivot.cpp.o"

# External object files for target QuickSortPivot
QuickSortPivot_EXTERNAL_OBJECTS =

lib/libQuickSortPivot.a: src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/QuickSortPivot.cpp.o
lib/libQuickSortPivot.a: src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/build.make
lib/libQuickSortPivot.a: src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/mac/Documents/codes/quickSort_prj/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../lib/libQuickSortPivot.a"
	cd /Users/mac/Documents/codes/quickSort_prj/src/QuickSortPivot && $(CMAKE_COMMAND) -P CMakeFiles/QuickSortPivot.dir/cmake_clean_target.cmake
	cd /Users/mac/Documents/codes/quickSort_prj/src/QuickSortPivot && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/QuickSortPivot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/build: lib/libQuickSortPivot.a
.PHONY : src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/build

src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/clean:
	cd /Users/mac/Documents/codes/quickSort_prj/src/QuickSortPivot && $(CMAKE_COMMAND) -P CMakeFiles/QuickSortPivot.dir/cmake_clean.cmake
.PHONY : src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/clean

src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/depend:
	cd /Users/mac/Documents/codes/quickSort_prj && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mac/Documents/codes/quickSort_prj /Users/mac/Documents/codes/quickSort_prj/src/QuickSortPivot /Users/mac/Documents/codes/quickSort_prj /Users/mac/Documents/codes/quickSort_prj/src/QuickSortPivot /Users/mac/Documents/codes/quickSort_prj/src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/QuickSortPivot/CMakeFiles/QuickSortPivot.dir/depend

