# Install script for directory: /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "RELEASE")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/OpenCV/samples/gpu" TYPE FILE PERMISSIONS OWNER_READ GROUP_READ WORLD_READ FILES
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/bgfg_segm.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/surf_keypoint_matcher.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/video_reader.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/farneback_optical_flow.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/opengl.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/houghlines.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/super_resolution.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/multi.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/video_writer.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/opticalflow_nvidia_api.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/alpha_comp.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/hog.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/generalized_hough.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/stereo_match.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/driver_api_stereo_multi.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/pyrlk_optical_flow.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/morphology.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/cascadeclassifier_nvidia_api.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/stereo_multi.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/driver_api_multi.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/cascadeclassifier.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/gpu/optical_flow.cpp"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples")

