# Install script for directory: /home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/OpenCV/samples/cpp" TYPE FILE PERMISSIONS OWNER_READ GROUP_READ WORLD_READ FILES
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/select3dobj.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/connected_components.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/image_sequence.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/bgfg_segm.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/intelperc_capture.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/imagelist_creator.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/kmeans.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/convexhull.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/dbt_face_detection.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/create_mask.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/3calibration.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/image_alignment.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/stereo_calib.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/starter_imagelist.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/logistic_regression.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/drawing.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/cloning_gui.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/laplace.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/distrans.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/inpaint.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/smiledetect.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/houghcircles.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/image.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/phase_corr.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/lkdemo.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/segment_objects.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/npr_demo.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/lsd_lines.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/houghlines.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/ufacedetect.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/fback.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/shape_example.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/train_HOG.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/videostab.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/cloning_demo.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/cout_mat.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/starter_video.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/fitellipse.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/contours2.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/morphology2.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/dft.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/minarea.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/squares.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/stitching.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/tvl1_optical_flow.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/points_classifier.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/em.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/ffilldemo.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/mask_tmpl.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/grabcut.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/facedetect.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/opencv_version.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/pca.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/stitching_detailed.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/camshiftdemo.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/demhist.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/stereo_match.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/kalman.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/edge.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/watershed.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/delaunay2.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/polar_transforms.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/calibration.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/openni_capture.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/tree_engine.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/filestorage.cpp"
    "/home/xian/Desktop/cpp/image/OpenCV/opencv-3.0.0-rc1/samples/cpp/letter_recog.cpp"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples")

