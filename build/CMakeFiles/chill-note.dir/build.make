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
CMAKE_SOURCE_DIR = /home/eliot/projects/cpp-chill-note

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eliot/projects/cpp-chill-note/build

# Include any dependencies generated for this target.
include CMakeFiles/chill-note.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/chill-note.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chill-note.dir/flags.make

CMakeFiles/chill-note.dir/src/chillnoteApp.cpp.o: CMakeFiles/chill-note.dir/flags.make
CMakeFiles/chill-note.dir/src/chillnoteApp.cpp.o: ../src/chillnoteApp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eliot/projects/cpp-chill-note/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/chill-note.dir/src/chillnoteApp.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chill-note.dir/src/chillnoteApp.cpp.o -c /home/eliot/projects/cpp-chill-note/src/chillnoteApp.cpp

CMakeFiles/chill-note.dir/src/chillnoteApp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chill-note.dir/src/chillnoteApp.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eliot/projects/cpp-chill-note/src/chillnoteApp.cpp > CMakeFiles/chill-note.dir/src/chillnoteApp.cpp.i

CMakeFiles/chill-note.dir/src/chillnoteApp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chill-note.dir/src/chillnoteApp.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eliot/projects/cpp-chill-note/src/chillnoteApp.cpp -o CMakeFiles/chill-note.dir/src/chillnoteApp.cpp.s

CMakeFiles/chill-note.dir/src/stickynote.cpp.o: CMakeFiles/chill-note.dir/flags.make
CMakeFiles/chill-note.dir/src/stickynote.cpp.o: ../src/stickynote.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eliot/projects/cpp-chill-note/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/chill-note.dir/src/stickynote.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chill-note.dir/src/stickynote.cpp.o -c /home/eliot/projects/cpp-chill-note/src/stickynote.cpp

CMakeFiles/chill-note.dir/src/stickynote.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chill-note.dir/src/stickynote.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eliot/projects/cpp-chill-note/src/stickynote.cpp > CMakeFiles/chill-note.dir/src/stickynote.cpp.i

CMakeFiles/chill-note.dir/src/stickynote.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chill-note.dir/src/stickynote.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eliot/projects/cpp-chill-note/src/stickynote.cpp -o CMakeFiles/chill-note.dir/src/stickynote.cpp.s

# Object files for target chill-note
chill__note_OBJECTS = \
"CMakeFiles/chill-note.dir/src/chillnoteApp.cpp.o" \
"CMakeFiles/chill-note.dir/src/stickynote.cpp.o"

# External object files for target chill-note
chill__note_EXTERNAL_OBJECTS =

chill-note: CMakeFiles/chill-note.dir/src/chillnoteApp.cpp.o
chill-note: CMakeFiles/chill-note.dir/src/stickynote.cpp.o
chill-note: CMakeFiles/chill-note.dir/build.make
chill-note: /usr/local/lib/libwx_gtk3u_xrc-3.1.a
chill-note: /usr/local/lib/libwx_gtk3u_qa-3.1.a
chill-note: /usr/local/lib/libwx_baseu_net-3.1.a
chill-note: /usr/local/lib/libwx_gtk3u_html-3.1.a
chill-note: /usr/local/lib/libwx_gtk3u_core-3.1.a
chill-note: /usr/local/lib/libwx_baseu_xml-3.1.a
chill-note: /usr/local/lib/libwx_baseu-3.1.a
chill-note: CMakeFiles/chill-note.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eliot/projects/cpp-chill-note/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable chill-note"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chill-note.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chill-note.dir/build: chill-note

.PHONY : CMakeFiles/chill-note.dir/build

CMakeFiles/chill-note.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/chill-note.dir/cmake_clean.cmake
.PHONY : CMakeFiles/chill-note.dir/clean

CMakeFiles/chill-note.dir/depend:
	cd /home/eliot/projects/cpp-chill-note/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eliot/projects/cpp-chill-note /home/eliot/projects/cpp-chill-note /home/eliot/projects/cpp-chill-note/build /home/eliot/projects/cpp-chill-note/build /home/eliot/projects/cpp-chill-note/build/CMakeFiles/chill-note.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chill-note.dir/depend
