# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build

# Include any dependencies generated for this target.
include _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/flags.make

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/imgui-SFML.cpp.o: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/flags.make
_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/imgui-SFML.cpp.o: _deps/imgui-sfml-src/imgui-SFML.cpp
_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/imgui-SFML.cpp.o: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/imgui-SFML.cpp.o"
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/imgui-SFML.cpp.o -MF CMakeFiles/ImGui-SFML.dir/imgui-SFML.cpp.o.d -o CMakeFiles/ImGui-SFML.dir/imgui-SFML.cpp.o -c /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-src/imgui-SFML.cpp

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/imgui-SFML.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ImGui-SFML.dir/imgui-SFML.cpp.i"
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-src/imgui-SFML.cpp > CMakeFiles/ImGui-SFML.dir/imgui-SFML.cpp.i

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/imgui-SFML.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ImGui-SFML.dir/imgui-SFML.cpp.s"
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-src/imgui-SFML.cpp -o CMakeFiles/ImGui-SFML.dir/imgui-SFML.cpp.s

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui.cpp.o: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/flags.make
_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui.cpp.o: _deps/imgui-src/imgui.cpp
_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui.cpp.o: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui.cpp.o"
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui.cpp.o -MF CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui.cpp.o.d -o CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui.cpp.o -c /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-src/imgui.cpp

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui.cpp.i"
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-src/imgui.cpp > CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui.cpp.i

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui.cpp.s"
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-src/imgui.cpp -o CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui.cpp.s

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_draw.cpp.o: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/flags.make
_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_draw.cpp.o: _deps/imgui-src/imgui_draw.cpp
_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_draw.cpp.o: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_draw.cpp.o"
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_draw.cpp.o -MF CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_draw.cpp.o.d -o CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_draw.cpp.o -c /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-src/imgui_draw.cpp

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_draw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_draw.cpp.i"
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-src/imgui_draw.cpp > CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_draw.cpp.i

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_draw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_draw.cpp.s"
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-src/imgui_draw.cpp -o CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_draw.cpp.s

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_tables.cpp.o: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/flags.make
_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_tables.cpp.o: _deps/imgui-src/imgui_tables.cpp
_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_tables.cpp.o: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_tables.cpp.o"
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_tables.cpp.o -MF CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_tables.cpp.o.d -o CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_tables.cpp.o -c /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-src/imgui_tables.cpp

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_tables.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_tables.cpp.i"
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-src/imgui_tables.cpp > CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_tables.cpp.i

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_tables.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_tables.cpp.s"
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-src/imgui_tables.cpp -o CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_tables.cpp.s

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_widgets.cpp.o: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/flags.make
_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_widgets.cpp.o: _deps/imgui-src/imgui_widgets.cpp
_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_widgets.cpp.o: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_widgets.cpp.o"
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_widgets.cpp.o -MF CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_widgets.cpp.o.d -o CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_widgets.cpp.o -c /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-src/imgui_widgets.cpp

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_widgets.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_widgets.cpp.i"
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-src/imgui_widgets.cpp > CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_widgets.cpp.i

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_widgets.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_widgets.cpp.s"
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-src/imgui_widgets.cpp -o CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_widgets.cpp.s

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/misc/cpp/imgui_stdlib.cpp.o: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/flags.make
_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/misc/cpp/imgui_stdlib.cpp.o: _deps/imgui-src/misc/cpp/imgui_stdlib.cpp
_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/misc/cpp/imgui_stdlib.cpp.o: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/misc/cpp/imgui_stdlib.cpp.o"
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/misc/cpp/imgui_stdlib.cpp.o -MF CMakeFiles/ImGui-SFML.dir/__/imgui-src/misc/cpp/imgui_stdlib.cpp.o.d -o CMakeFiles/ImGui-SFML.dir/__/imgui-src/misc/cpp/imgui_stdlib.cpp.o -c /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-src/misc/cpp/imgui_stdlib.cpp

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/misc/cpp/imgui_stdlib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ImGui-SFML.dir/__/imgui-src/misc/cpp/imgui_stdlib.cpp.i"
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-src/misc/cpp/imgui_stdlib.cpp > CMakeFiles/ImGui-SFML.dir/__/imgui-src/misc/cpp/imgui_stdlib.cpp.i

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/misc/cpp/imgui_stdlib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ImGui-SFML.dir/__/imgui-src/misc/cpp/imgui_stdlib.cpp.s"
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-src/misc/cpp/imgui_stdlib.cpp -o CMakeFiles/ImGui-SFML.dir/__/imgui-src/misc/cpp/imgui_stdlib.cpp.s

# Object files for target ImGui-SFML
ImGui__SFML_OBJECTS = \
"CMakeFiles/ImGui-SFML.dir/imgui-SFML.cpp.o" \
"CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui.cpp.o" \
"CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_draw.cpp.o" \
"CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_tables.cpp.o" \
"CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_widgets.cpp.o" \
"CMakeFiles/ImGui-SFML.dir/__/imgui-src/misc/cpp/imgui_stdlib.cpp.o"

# External object files for target ImGui-SFML
ImGui__SFML_EXTERNAL_OBJECTS =

_deps/imgui-sfml-build/libImGui-SFML.a: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/imgui-SFML.cpp.o
_deps/imgui-sfml-build/libImGui-SFML.a: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui.cpp.o
_deps/imgui-sfml-build/libImGui-SFML.a: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_draw.cpp.o
_deps/imgui-sfml-build/libImGui-SFML.a: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_tables.cpp.o
_deps/imgui-sfml-build/libImGui-SFML.a: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/imgui_widgets.cpp.o
_deps/imgui-sfml-build/libImGui-SFML.a: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/__/imgui-src/misc/cpp/imgui_stdlib.cpp.o
_deps/imgui-sfml-build/libImGui-SFML.a: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/build.make
_deps/imgui-sfml-build/libImGui-SFML.a: _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library libImGui-SFML.a"
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && $(CMAKE_COMMAND) -P CMakeFiles/ImGui-SFML.dir/cmake_clean_target.cmake
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ImGui-SFML.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/build: _deps/imgui-sfml-build/libImGui-SFML.a
.PHONY : _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/build

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/clean:
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && $(CMAKE_COMMAND) -P CMakeFiles/ImGui-SFML.dir/cmake_clean.cmake
.PHONY : _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/clean

_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/depend:
	cd /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-src /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build /mnt/nfs/homes/ngriveau/Desktop/42/6.Push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : _deps/imgui-sfml-build/CMakeFiles/ImGui-SFML.dir/depend

