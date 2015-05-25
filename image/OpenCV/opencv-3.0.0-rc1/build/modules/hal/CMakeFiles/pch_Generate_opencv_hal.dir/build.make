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
CMAKE_SOURCE_DIR = /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build

# Utility rule file for pch_Generate_opencv_hal.

# Include the progress variables for this target.
include modules/hal/CMakeFiles/pch_Generate_opencv_hal.dir/progress.make

modules/hal/CMakeFiles/pch_Generate_opencv_hal: modules/hal/precomp.hpp.gch/opencv_hal_RELEASE.gch

modules/hal/precomp.hpp.gch/opencv_hal_RELEASE.gch: ../modules/hal/src/precomp.hpp
modules/hal/precomp.hpp.gch/opencv_hal_RELEASE.gch: modules/hal/precomp.hpp
modules/hal/precomp.hpp.gch/opencv_hal_RELEASE.gch: lib/libopencv_hal_pch_dephelp.a
	$(CMAKE_COMMAND) -E cmake_progress_report /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating precomp.hpp.gch/opencv_hal_RELEASE.gch"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/hal && /usr/bin/cmake -E make_directory /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/hal/precomp.hpp.gch
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/hal && /usr/bin/c++ -O3 -DNDEBUG -DNDEBUG -isystem"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/3rdparty/ippicv/unpack/ippicv_lnx/include" -isystem"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build" -isystem"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/3rdparty/ippicv/unpack/ippicv_lnx/include" -isystem"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/hal/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/hal/src" -isystem"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/hal" -D__OPENCV_BUILD=1 -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wundef -Winit-self -Wpointer-arith -Wshadow -Wsign-promo -Wno-narrowing -Wno-delete-non-virtual-dtor -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -msse -msse2 -msse3 -ffunction-sections -fvisibility=hidden -fvisibility-inlines-hidden -fPIC -x c++-header -o /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/hal/precomp.hpp.gch/opencv_hal_RELEASE.gch /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/hal/precomp.hpp

modules/hal/precomp.hpp: ../modules/hal/src/precomp.hpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating precomp.hpp"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/hal && /usr/bin/cmake -E copy /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/hal/src/precomp.hpp /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/hal/precomp.hpp

pch_Generate_opencv_hal: modules/hal/CMakeFiles/pch_Generate_opencv_hal
pch_Generate_opencv_hal: modules/hal/precomp.hpp.gch/opencv_hal_RELEASE.gch
pch_Generate_opencv_hal: modules/hal/precomp.hpp
pch_Generate_opencv_hal: modules/hal/CMakeFiles/pch_Generate_opencv_hal.dir/build.make
.PHONY : pch_Generate_opencv_hal

# Rule to build all files generated by this target.
modules/hal/CMakeFiles/pch_Generate_opencv_hal.dir/build: pch_Generate_opencv_hal
.PHONY : modules/hal/CMakeFiles/pch_Generate_opencv_hal.dir/build

modules/hal/CMakeFiles/pch_Generate_opencv_hal.dir/clean:
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/hal && $(CMAKE_COMMAND) -P CMakeFiles/pch_Generate_opencv_hal.dir/cmake_clean.cmake
.PHONY : modules/hal/CMakeFiles/pch_Generate_opencv_hal.dir/clean

modules/hal/CMakeFiles/pch_Generate_opencv_hal.dir/depend:
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1 /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/hal /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/hal /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/hal/CMakeFiles/pch_Generate_opencv_hal.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/hal/CMakeFiles/pch_Generate_opencv_hal.dir/depend

