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

# Utility rule file for pch_Generate_opencv_test_videoio.

# Include the progress variables for this target.
include modules/videoio/CMakeFiles/pch_Generate_opencv_test_videoio.dir/progress.make

modules/videoio/CMakeFiles/pch_Generate_opencv_test_videoio: modules/videoio/test_precomp.hpp.gch/opencv_test_videoio_RELEASE.gch

modules/videoio/test_precomp.hpp.gch/opencv_test_videoio_RELEASE.gch: ../modules/videoio/test/test_precomp.hpp
modules/videoio/test_precomp.hpp.gch/opencv_test_videoio_RELEASE.gch: modules/videoio/test_precomp.hpp
modules/videoio/test_precomp.hpp.gch/opencv_test_videoio_RELEASE.gch: lib/libopencv_test_videoio_pch_dephelp.a
	$(CMAKE_COMMAND) -E cmake_progress_report /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating test_precomp.hpp.gch/opencv_test_videoio_RELEASE.gch"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/videoio && /usr/bin/cmake -E make_directory /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/videoio/test_precomp.hpp.gch
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/videoio && /usr/bin/c++ -O3 -DNDEBUG -DNDEBUG -isystem"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/3rdparty/ippicv/unpack/ippicv_lnx/include" -isystem"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build" -isystem"/usr/include/gstreamer-0.10" -isystem"/usr/include/glib-2.0" -isystem"/usr/lib/x86_64-linux-gnu/glib-2.0/include" -isystem"/usr/include/libxml2" -isystem"/usr/include/gstreamer-0.10" -isystem"/usr/include/glib-2.0" -isystem"/usr/lib/x86_64-linux-gnu/glib-2.0/include" -isystem"/usr/include/libxml2" -isystem"/usr/include/gstreamer-0.10" -isystem"/usr/include/glib-2.0" -isystem"/usr/lib/x86_64-linux-gnu/glib-2.0/include" -isystem"/usr/include/libxml2" -isystem"/usr/include/gstreamer-0.10" -isystem"/usr/include/glib-2.0" -isystem"/usr/lib/x86_64-linux-gnu/glib-2.0/include" -isystem"/usr/include/libxml2" -isystem"/usr/include/gstreamer-0.10" -isystem"/usr/include/glib-2.0" -isystem"/usr/lib/x86_64-linux-gnu/glib-2.0/include" -isystem"/usr/include/libxml2" -isystem"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/3rdparty/ippicv/unpack/ippicv_lnx/include" -isystem"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build" -isystem"/usr/include/gstreamer-0.10" -isystem"/usr/include/glib-2.0" -isystem"/usr/lib/x86_64-linux-gnu/glib-2.0/include" -isystem"/usr/include/libxml2" -isystem"/usr/include/gstreamer-0.10" -isystem"/usr/include/glib-2.0" -isystem"/usr/lib/x86_64-linux-gnu/glib-2.0/include" -isystem"/usr/include/libxml2" -isystem"/usr/include/gstreamer-0.10" -isystem"/usr/include/glib-2.0" -isystem"/usr/lib/x86_64-linux-gnu/glib-2.0/include" -isystem"/usr/include/libxml2" -isystem"/usr/include/gstreamer-0.10" -isystem"/usr/include/glib-2.0" -isystem"/usr/lib/x86_64-linux-gnu/glib-2.0/include" -isystem"/usr/include/libxml2" -isystem"/usr/include/gstreamer-0.10" -isystem"/usr/include/glib-2.0" -isystem"/usr/lib/x86_64-linux-gnu/glib-2.0/include" -isystem"/usr/include/libxml2" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/ts/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/videoio/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/imgcodecs/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/videoio/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/hal/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/core/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/imgproc/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/imgcodecs/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/hal/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/core/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/imgproc/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/imgcodecs/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/videoio/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/highgui/include" -I"/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/videoio/test" -D__OPENCV_BUILD=1 -DVIDEOIO_EXPORTS -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wundef -Winit-self -Wpointer-arith -Wshadow -Wsign-promo -Wno-narrowing -Wno-delete-non-virtual-dtor -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -msse -msse2 -msse3 -ffunction-sections -fvisibility=hidden -fvisibility-inlines-hidden -Wno-deprecated-declarations -x c++-header -o /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/videoio/test_precomp.hpp.gch/opencv_test_videoio_RELEASE.gch /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/videoio/test_precomp.hpp

modules/videoio/test_precomp.hpp: ../modules/videoio/test/test_precomp.hpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating test_precomp.hpp"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/videoio && /usr/bin/cmake -E copy /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/videoio/test/test_precomp.hpp /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/videoio/test_precomp.hpp

pch_Generate_opencv_test_videoio: modules/videoio/CMakeFiles/pch_Generate_opencv_test_videoio
pch_Generate_opencv_test_videoio: modules/videoio/test_precomp.hpp.gch/opencv_test_videoio_RELEASE.gch
pch_Generate_opencv_test_videoio: modules/videoio/test_precomp.hpp
pch_Generate_opencv_test_videoio: modules/videoio/CMakeFiles/pch_Generate_opencv_test_videoio.dir/build.make
.PHONY : pch_Generate_opencv_test_videoio

# Rule to build all files generated by this target.
modules/videoio/CMakeFiles/pch_Generate_opencv_test_videoio.dir/build: pch_Generate_opencv_test_videoio
.PHONY : modules/videoio/CMakeFiles/pch_Generate_opencv_test_videoio.dir/build

modules/videoio/CMakeFiles/pch_Generate_opencv_test_videoio.dir/clean:
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/videoio && $(CMAKE_COMMAND) -P CMakeFiles/pch_Generate_opencv_test_videoio.dir/cmake_clean.cmake
.PHONY : modules/videoio/CMakeFiles/pch_Generate_opencv_test_videoio.dir/clean

modules/videoio/CMakeFiles/pch_Generate_opencv_test_videoio.dir/depend:
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1 /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/modules/videoio /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/videoio /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/modules/videoio/CMakeFiles/pch_Generate_opencv_test_videoio.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/videoio/CMakeFiles/pch_Generate_opencv_test_videoio.dir/depend

