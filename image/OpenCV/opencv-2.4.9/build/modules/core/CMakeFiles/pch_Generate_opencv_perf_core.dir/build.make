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

# Utility rule file for pch_Generate_opencv_perf_core.

# Include the progress variables for this target.
include modules/core/CMakeFiles/pch_Generate_opencv_perf_core.dir/progress.make

modules/core/CMakeFiles/pch_Generate_opencv_perf_core: modules/core/perf_precomp.hpp.gch/opencv_perf_core_RELEASE.gch

modules/core/perf_precomp.hpp.gch/opencv_perf_core_RELEASE.gch: ../modules/core/perf/perf_precomp.hpp
modules/core/perf_precomp.hpp.gch/opencv_perf_core_RELEASE.gch: modules/core/perf_precomp.hpp
modules/core/perf_precomp.hpp.gch/opencv_perf_core_RELEASE.gch: lib/libopencv_perf_core_pch_dephelp.a
	$(CMAKE_COMMAND) -E cmake_progress_report /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating perf_precomp.hpp.gch/opencv_perf_core_RELEASE.gch"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/core && /usr/bin/cmake -E make_directory /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/core/perf_precomp.hpp.gch
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/core && /usr/bin/c++ -O3 -DNDEBUG -DNDEBUG -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/core/perf" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/features2d/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/highgui/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/imgproc/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/flann/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/core/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/highgui/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/ts/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/core/include" -isystem"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/core" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/core/src" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/core/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/core/test" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/features2d/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/highgui/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/imgproc/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/flann/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/core/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/highgui/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/ts/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/core/include" -isystem"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/core" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/core/src" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/core/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/dynamicuda/include" -isystem"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/core" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/core/src" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/core/include" -isystem"/home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build" -isystem"/usr/include" -fsigned-char -W -Wall -Werror=return-type -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wundef -Winit-self -Wpointer-arith -Wshadow -Wsign-promo -Wno-narrowing -Wno-delete-non-virtual-dtor -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -msse -msse2 -msse3 -ffunction-sections -x c++-header -o /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/core/perf_precomp.hpp.gch/opencv_perf_core_RELEASE.gch /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/core/perf_precomp.hpp

modules/core/perf_precomp.hpp: ../modules/core/perf/perf_precomp.hpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating perf_precomp.hpp"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/core && /usr/bin/cmake -E copy /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/core/perf/perf_precomp.hpp /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/core/perf_precomp.hpp

pch_Generate_opencv_perf_core: modules/core/CMakeFiles/pch_Generate_opencv_perf_core
pch_Generate_opencv_perf_core: modules/core/perf_precomp.hpp.gch/opencv_perf_core_RELEASE.gch
pch_Generate_opencv_perf_core: modules/core/perf_precomp.hpp
pch_Generate_opencv_perf_core: modules/core/CMakeFiles/pch_Generate_opencv_perf_core.dir/build.make
.PHONY : pch_Generate_opencv_perf_core

# Rule to build all files generated by this target.
modules/core/CMakeFiles/pch_Generate_opencv_perf_core.dir/build: pch_Generate_opencv_perf_core
.PHONY : modules/core/CMakeFiles/pch_Generate_opencv_perf_core.dir/build

modules/core/CMakeFiles/pch_Generate_opencv_perf_core.dir/clean:
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/core && $(CMAKE_COMMAND) -P CMakeFiles/pch_Generate_opencv_perf_core.dir/cmake_clean.cmake
.PHONY : modules/core/CMakeFiles/pch_Generate_opencv_perf_core.dir/clean

modules/core/CMakeFiles/pch_Generate_opencv_perf_core.dir/depend:
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9 /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/modules/core /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/core /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/modules/core/CMakeFiles/pch_Generate_opencv_perf_core.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/core/CMakeFiles/pch_Generate_opencv_perf_core.dir/depend
