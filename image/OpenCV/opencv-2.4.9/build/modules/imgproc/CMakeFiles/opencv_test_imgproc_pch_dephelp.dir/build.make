# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build

# Include any dependencies generated for this target.
include modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/depend.make

# Include the progress variables for this target.
include modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/progress.make

# Include the compile flags for this target's objects.
include modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/flags.make

modules/imgproc/opencv_test_imgproc_pch_dephelp.cxx: ../modules/imgproc/test/test_precomp.hpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating opencv_test_imgproc_pch_dephelp.cxx"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc && /usr/bin/cmake -E echo \#include\ \"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/imgproc/test/test_precomp.hpp\" > /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc/opencv_test_imgproc_pch_dephelp.cxx
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc && /usr/bin/cmake -E echo int\ testfunction\(\)\; >> /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc/opencv_test_imgproc_pch_dephelp.cxx
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc && /usr/bin/cmake -E echo int\ testfunction\(\) >> /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc/opencv_test_imgproc_pch_dephelp.cxx
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc && /usr/bin/cmake -E echo { >> /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc/opencv_test_imgproc_pch_dephelp.cxx
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc && /usr/bin/cmake -E echo \ \ \ \ \return\ 0\; >> /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc/opencv_test_imgproc_pch_dephelp.cxx
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc && /usr/bin/cmake -E echo } >> /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc/opencv_test_imgproc_pch_dephelp.cxx

modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.o: modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/flags.make
modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.o: modules/imgproc/opencv_test_imgproc_pch_dephelp.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.o"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.o -c /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc/opencv_test_imgproc_pch_dephelp.cxx

modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.i"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc/opencv_test_imgproc_pch_dephelp.cxx > CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.i

modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.s"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc/opencv_test_imgproc_pch_dephelp.cxx -o CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.s

modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.o.requires:
.PHONY : modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.o.requires

modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.o.provides: modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.o.requires
	$(MAKE) -f modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/build.make modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.o.provides.build
.PHONY : modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.o.provides

modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.o.provides.build: modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.o

# Object files for target opencv_test_imgproc_pch_dephelp
opencv_test_imgproc_pch_dephelp_OBJECTS = \
"CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.o"

# External object files for target opencv_test_imgproc_pch_dephelp
opencv_test_imgproc_pch_dephelp_EXTERNAL_OBJECTS =

lib/libopencv_test_imgproc_pch_dephelp.a: modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.o
lib/libopencv_test_imgproc_pch_dephelp.a: modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/build.make
lib/libopencv_test_imgproc_pch_dephelp.a: modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library ../../lib/libopencv_test_imgproc_pch_dephelp.a"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc && $(CMAKE_COMMAND) -P CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/cmake_clean_target.cmake
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/build: lib/libopencv_test_imgproc_pch_dephelp.a
.PHONY : modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/build

modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/requires: modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/opencv_test_imgproc_pch_dephelp.cxx.o.requires
.PHONY : modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/requires

modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/clean:
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc && $(CMAKE_COMMAND) -P CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/cmake_clean.cmake
.PHONY : modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/clean

modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/depend: modules/imgproc/opencv_test_imgproc_pch_dephelp.cxx
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9 /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/imgproc /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/imgproc/CMakeFiles/opencv_test_imgproc_pch_dephelp.dir/depend

