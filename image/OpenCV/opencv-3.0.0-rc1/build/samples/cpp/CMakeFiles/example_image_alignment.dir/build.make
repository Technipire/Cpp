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

# Include any dependencies generated for this target.
include samples/cpp/CMakeFiles/example_image_alignment.dir/depend.make

# Include the progress variables for this target.
include samples/cpp/CMakeFiles/example_image_alignment.dir/progress.make

# Include the compile flags for this target's objects.
include samples/cpp/CMakeFiles/example_image_alignment.dir/flags.make

samples/cpp/CMakeFiles/example_image_alignment.dir/image_alignment.cpp.o: samples/cpp/CMakeFiles/example_image_alignment.dir/flags.make
samples/cpp/CMakeFiles/example_image_alignment.dir/image_alignment.cpp.o: ../samples/cpp/image_alignment.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object samples/cpp/CMakeFiles/example_image_alignment.dir/image_alignment.cpp.o"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/samples/cpp && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/example_image_alignment.dir/image_alignment.cpp.o -c /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/image_alignment.cpp

samples/cpp/CMakeFiles/example_image_alignment.dir/image_alignment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example_image_alignment.dir/image_alignment.cpp.i"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/samples/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/image_alignment.cpp > CMakeFiles/example_image_alignment.dir/image_alignment.cpp.i

samples/cpp/CMakeFiles/example_image_alignment.dir/image_alignment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example_image_alignment.dir/image_alignment.cpp.s"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/samples/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/image_alignment.cpp -o CMakeFiles/example_image_alignment.dir/image_alignment.cpp.s

samples/cpp/CMakeFiles/example_image_alignment.dir/image_alignment.cpp.o.requires:
.PHONY : samples/cpp/CMakeFiles/example_image_alignment.dir/image_alignment.cpp.o.requires

samples/cpp/CMakeFiles/example_image_alignment.dir/image_alignment.cpp.o.provides: samples/cpp/CMakeFiles/example_image_alignment.dir/image_alignment.cpp.o.requires
	$(MAKE) -f samples/cpp/CMakeFiles/example_image_alignment.dir/build.make samples/cpp/CMakeFiles/example_image_alignment.dir/image_alignment.cpp.o.provides.build
.PHONY : samples/cpp/CMakeFiles/example_image_alignment.dir/image_alignment.cpp.o.provides

samples/cpp/CMakeFiles/example_image_alignment.dir/image_alignment.cpp.o.provides.build: samples/cpp/CMakeFiles/example_image_alignment.dir/image_alignment.cpp.o

# Object files for target example_image_alignment
example_image_alignment_OBJECTS = \
"CMakeFiles/example_image_alignment.dir/image_alignment.cpp.o"

# External object files for target example_image_alignment
example_image_alignment_EXTERNAL_OBJECTS =

bin/cpp-example-image_alignment: samples/cpp/CMakeFiles/example_image_alignment.dir/image_alignment.cpp.o
bin/cpp-example-image_alignment: samples/cpp/CMakeFiles/example_image_alignment.dir/build.make
bin/cpp-example-image_alignment: /usr/lib/x86_64-linux-gnu/libGLU.so
bin/cpp-example-image_alignment: /usr/lib/x86_64-linux-gnu/libGL.so
bin/cpp-example-image_alignment: /usr/lib/x86_64-linux-gnu/libSM.so
bin/cpp-example-image_alignment: /usr/lib/x86_64-linux-gnu/libICE.so
bin/cpp-example-image_alignment: /usr/lib/x86_64-linux-gnu/libX11.so
bin/cpp-example-image_alignment: /usr/lib/x86_64-linux-gnu/libXext.so
bin/cpp-example-image_alignment: ../3rdparty/ippicv/unpack/ippicv_lnx/lib/intel64/libippicv.a
bin/cpp-example-image_alignment: lib/libopencv_core.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_imgproc.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_flann.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_imgcodecs.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_videoio.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_highgui.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_ml.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_video.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_objdetect.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_photo.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_features2d.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_calib3d.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_stitching.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_videostab.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_shape.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_objdetect.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_photo.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_calib3d.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_features2d.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_flann.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_highgui.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_videoio.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_imgcodecs.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_ml.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_video.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_imgproc.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_core.so.3.0.0
bin/cpp-example-image_alignment: lib/libopencv_hal.a
bin/cpp-example-image_alignment: /usr/lib/x86_64-linux-gnu/libGLU.so
bin/cpp-example-image_alignment: /usr/lib/x86_64-linux-gnu/libGL.so
bin/cpp-example-image_alignment: /usr/lib/x86_64-linux-gnu/libSM.so
bin/cpp-example-image_alignment: /usr/lib/x86_64-linux-gnu/libICE.so
bin/cpp-example-image_alignment: /usr/lib/x86_64-linux-gnu/libX11.so
bin/cpp-example-image_alignment: /usr/lib/x86_64-linux-gnu/libXext.so
bin/cpp-example-image_alignment: ../3rdparty/ippicv/unpack/ippicv_lnx/lib/intel64/libippicv.a
bin/cpp-example-image_alignment: samples/cpp/CMakeFiles/example_image_alignment.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/cpp-example-image_alignment"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/samples/cpp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example_image_alignment.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
samples/cpp/CMakeFiles/example_image_alignment.dir/build: bin/cpp-example-image_alignment
.PHONY : samples/cpp/CMakeFiles/example_image_alignment.dir/build

samples/cpp/CMakeFiles/example_image_alignment.dir/requires: samples/cpp/CMakeFiles/example_image_alignment.dir/image_alignment.cpp.o.requires
.PHONY : samples/cpp/CMakeFiles/example_image_alignment.dir/requires

samples/cpp/CMakeFiles/example_image_alignment.dir/clean:
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/samples/cpp && $(CMAKE_COMMAND) -P CMakeFiles/example_image_alignment.dir/cmake_clean.cmake
.PHONY : samples/cpp/CMakeFiles/example_image_alignment.dir/clean

samples/cpp/CMakeFiles/example_image_alignment.dir/depend:
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1 /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/samples/cpp /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/build/samples/cpp/CMakeFiles/example_image_alignment.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : samples/cpp/CMakeFiles/example_image_alignment.dir/depend

