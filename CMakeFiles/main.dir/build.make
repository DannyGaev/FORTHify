# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/oaktree/Documents/GitHub/FORTHify

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/oaktree/Documents/GitHub/FORTHify

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/main.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.c.o: main.c
CMakeFiles/main.dir/main.c.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/oaktree/Documents/GitHub/FORTHify/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/main.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/main.c.o -MF CMakeFiles/main.dir/main.c.o.d -o CMakeFiles/main.dir/main.c.o -c /Users/oaktree/Documents/GitHub/FORTHify/main.c

CMakeFiles/main.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/main.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/oaktree/Documents/GitHub/FORTHify/main.c > CMakeFiles/main.dir/main.c.i

CMakeFiles/main.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/main.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/oaktree/Documents/GitHub/FORTHify/main.c -o CMakeFiles/main.dir/main.c.s

CMakeFiles/main.dir/int_stack.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/int_stack.c.o: int_stack.c
CMakeFiles/main.dir/int_stack.c.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/oaktree/Documents/GitHub/FORTHify/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/main.dir/int_stack.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/int_stack.c.o -MF CMakeFiles/main.dir/int_stack.c.o.d -o CMakeFiles/main.dir/int_stack.c.o -c /Users/oaktree/Documents/GitHub/FORTHify/int_stack.c

CMakeFiles/main.dir/int_stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/main.dir/int_stack.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/oaktree/Documents/GitHub/FORTHify/int_stack.c > CMakeFiles/main.dir/int_stack.c.i

CMakeFiles/main.dir/int_stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/main.dir/int_stack.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/oaktree/Documents/GitHub/FORTHify/int_stack.c -o CMakeFiles/main.dir/int_stack.c.s

CMakeFiles/main.dir/general_stack.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/general_stack.c.o: general_stack.c
CMakeFiles/main.dir/general_stack.c.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/oaktree/Documents/GitHub/FORTHify/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/main.dir/general_stack.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/general_stack.c.o -MF CMakeFiles/main.dir/general_stack.c.o.d -o CMakeFiles/main.dir/general_stack.c.o -c /Users/oaktree/Documents/GitHub/FORTHify/general_stack.c

CMakeFiles/main.dir/general_stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/main.dir/general_stack.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/oaktree/Documents/GitHub/FORTHify/general_stack.c > CMakeFiles/main.dir/general_stack.c.i

CMakeFiles/main.dir/general_stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/main.dir/general_stack.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/oaktree/Documents/GitHub/FORTHify/general_stack.c -o CMakeFiles/main.dir/general_stack.c.s

CMakeFiles/main.dir/token.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/token.c.o: token.c
CMakeFiles/main.dir/token.c.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/oaktree/Documents/GitHub/FORTHify/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/main.dir/token.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/token.c.o -MF CMakeFiles/main.dir/token.c.o.d -o CMakeFiles/main.dir/token.c.o -c /Users/oaktree/Documents/GitHub/FORTHify/token.c

CMakeFiles/main.dir/token.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/main.dir/token.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/oaktree/Documents/GitHub/FORTHify/token.c > CMakeFiles/main.dir/token.c.i

CMakeFiles/main.dir/token.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/main.dir/token.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/oaktree/Documents/GitHub/FORTHify/token.c -o CMakeFiles/main.dir/token.c.s

CMakeFiles/main.dir/resolveActions.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/resolveActions.c.o: resolveActions.c
CMakeFiles/main.dir/resolveActions.c.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/oaktree/Documents/GitHub/FORTHify/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/main.dir/resolveActions.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/resolveActions.c.o -MF CMakeFiles/main.dir/resolveActions.c.o.d -o CMakeFiles/main.dir/resolveActions.c.o -c /Users/oaktree/Documents/GitHub/FORTHify/resolveActions.c

CMakeFiles/main.dir/resolveActions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/main.dir/resolveActions.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/oaktree/Documents/GitHub/FORTHify/resolveActions.c > CMakeFiles/main.dir/resolveActions.c.i

CMakeFiles/main.dir/resolveActions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/main.dir/resolveActions.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/oaktree/Documents/GitHub/FORTHify/resolveActions.c -o CMakeFiles/main.dir/resolveActions.c.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.c.o" \
"CMakeFiles/main.dir/int_stack.c.o" \
"CMakeFiles/main.dir/general_stack.c.o" \
"CMakeFiles/main.dir/token.c.o" \
"CMakeFiles/main.dir/resolveActions.c.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/main.c.o
main: CMakeFiles/main.dir/int_stack.c.o
main: CMakeFiles/main.dir/general_stack.c.o
main: CMakeFiles/main.dir/token.c.o
main: CMakeFiles/main.dir/resolveActions.c.o
main: CMakeFiles/main.dir/build.make
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/oaktree/Documents/GitHub/FORTHify/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /Users/oaktree/Documents/GitHub/FORTHify && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/oaktree/Documents/GitHub/FORTHify /Users/oaktree/Documents/GitHub/FORTHify /Users/oaktree/Documents/GitHub/FORTHify /Users/oaktree/Documents/GitHub/FORTHify /Users/oaktree/Documents/GitHub/FORTHify/CMakeFiles/main.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/main.dir/depend

