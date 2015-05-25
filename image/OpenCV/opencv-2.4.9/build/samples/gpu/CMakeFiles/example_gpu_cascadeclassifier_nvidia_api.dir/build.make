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
include samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/depend.make

# Include the progress variables for this target.
include samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/progress.make

# Include the compile flags for this target's objects.
include samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/flags.make

samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.o: samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/flags.make
samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.o: ../samples/gpu/cascadeclassifier_nvidia_api.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.o"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/samples/gpu && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.o -c /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/samples/gpu/cascadeclassifier_nvidia_api.cpp

samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.i"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/samples/gpu && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/samples/gpu/cascadeclassifier_nvidia_api.cpp > CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.i

samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.s"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/samples/gpu && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/samples/gpu/cascadeclassifier_nvidia_api.cpp -o CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.s

samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.o.requires:
.PHONY : samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.o.requires

samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.o.provides: samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.o.requires
	$(MAKE) -f samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/build.make samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.o.provides.build
.PHONY : samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.o.provides

samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.o.provides.build: samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.o

# Object files for target example_gpu_cascadeclassifier_nvidia_api
example_gpu_cascadeclassifier_nvidia_api_OBJECTS = \
"CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.o"

# External object files for target example_gpu_cascadeclassifier_nvidia_api
example_gpu_cascadeclassifier_nvidia_api_EXTERNAL_OBJECTS =

bin/gpu-example-cascadeclassifier_nvidia_api: samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.o
bin/gpu-example-cascadeclassifier_nvidia_api: samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/build.make
bin/gpu-example-cascadeclassifier_nvidia_api: /usr/lib/x86_64-linux-gnu/libGLU.so
bin/gpu-example-cascadeclassifier_nvidia_api: /usr/lib/x86_64-linux-gnu/libGL.so
bin/gpu-example-cascadeclassifier_nvidia_api: /usr/lib/x86_64-linux-gnu/libSM.so
bin/gpu-example-cascadeclassifier_nvidia_api: /usr/lib/x86_64-linux-gnu/libICE.so
bin/gpu-example-cascadeclassifier_nvidia_api: /usr/lib/x86_64-linux-gnu/libX11.so
bin/gpu-example-cascadeclassifier_nvidia_api: /usr/lib/x86_64-linux-gnu/libXext.so
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_core.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_flann.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_imgproc.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_highgui.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_ml.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_video.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_objdetect.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_features2d.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_calib3d.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_legacy.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_contrib.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_gpu.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_superres.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_nonfree.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_ocl.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_gpu.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_legacy.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_ml.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_video.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_objdetect.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_calib3d.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_features2d.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_flann.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_highgui.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_photo.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_imgproc.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: lib/libopencv_core.so.2.4.9
bin/gpu-example-cascadeclassifier_nvidia_api: samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/gpu-example-cascadeclassifier_nvidia_api"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/samples/gpu && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/build: bin/gpu-example-cascadeclassifier_nvidia_api
.PHONY : samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/build

samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/requires: samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cascadeclassifier_nvidia_api.cpp.o.requires
.PHONY : samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/requires

samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/clean:
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/samples/gpu && $(CMAKE_COMMAND) -P CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/cmake_clean.cmake
.PHONY : samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/clean

samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/depend:
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9 /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/samples/gpu /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/samples/gpu /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : samples/gpu/CMakeFiles/example_gpu_cascadeclassifier_nvidia_api.dir/depend

