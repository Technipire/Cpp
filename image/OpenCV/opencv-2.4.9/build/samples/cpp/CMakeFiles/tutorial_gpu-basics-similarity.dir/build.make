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
include samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/depend.make

# Include the progress variables for this target.
include samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/progress.make

# Include the compile flags for this target's objects.
include samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/flags.make

samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.o: samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/flags.make
samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.o: ../samples/cpp/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.o"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/samples/cpp && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.o -c /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/samples/cpp/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp

samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.i"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/samples/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/samples/cpp/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp > CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.i

samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.s"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/samples/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/samples/cpp/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp -o CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.s

samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.o.requires:
.PHONY : samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.o.requires

samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.o.provides: samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.o.requires
	$(MAKE) -f samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/build.make samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.o.provides.build
.PHONY : samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.o.provides

samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.o.provides.build: samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.o

# Object files for target tutorial_gpu-basics-similarity
tutorial_gpu__basics__similarity_OBJECTS = \
"CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.o"

# External object files for target tutorial_gpu-basics-similarity
tutorial_gpu__basics__similarity_EXTERNAL_OBJECTS =

bin/cpp-tutorial-gpu-basics-similarity: samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.o
bin/cpp-tutorial-gpu-basics-similarity: samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/build.make
bin/cpp-tutorial-gpu-basics-similarity: /usr/lib/x86_64-linux-gnu/libGLU.so
bin/cpp-tutorial-gpu-basics-similarity: /usr/lib/x86_64-linux-gnu/libGL.so
bin/cpp-tutorial-gpu-basics-similarity: /usr/lib/x86_64-linux-gnu/libSM.so
bin/cpp-tutorial-gpu-basics-similarity: /usr/lib/x86_64-linux-gnu/libICE.so
bin/cpp-tutorial-gpu-basics-similarity: /usr/lib/x86_64-linux-gnu/libX11.so
bin/cpp-tutorial-gpu-basics-similarity: /usr/lib/x86_64-linux-gnu/libXext.so
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_core.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_flann.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_imgproc.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_highgui.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_ml.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_video.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_objdetect.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_photo.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_nonfree.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_features2d.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_calib3d.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_legacy.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_contrib.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_stitching.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_videostab.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_gpu.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_ocl.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_nonfree.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_ocl.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_gpu.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_objdetect.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_photo.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_legacy.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_ml.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_video.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_calib3d.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_features2d.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_flann.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_highgui.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_imgproc.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: lib/libopencv_core.so.2.4.9
bin/cpp-tutorial-gpu-basics-similarity: samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/cpp-tutorial-gpu-basics-similarity"
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/samples/cpp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tutorial_gpu-basics-similarity.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/build: bin/cpp-tutorial-gpu-basics-similarity
.PHONY : samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/build

samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/requires: samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/tutorial_code/gpu/gpu-basics-similarity/gpu-basics-similarity.cpp.o.requires
.PHONY : samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/requires

samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/clean:
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/samples/cpp && $(CMAKE_COMMAND) -P CMakeFiles/tutorial_gpu-basics-similarity.dir/cmake_clean.cmake
.PHONY : samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/clean

samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/depend:
	cd /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9 /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/samples/cpp /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/samples/cpp /home/xian/Desktop/cpp/image/OpenCV/opencv-2.4.9/build/samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : samples/cpp/CMakeFiles/tutorial_gpu-basics-similarity.dir/depend

