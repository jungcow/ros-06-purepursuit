# Install script for directory: /home/jungcow/ws_proj_06_pure_pursuit/src/autonomous_msg

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/jungcow/ws_proj_06_pure_pursuit/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autonomous_msg/msg" TYPE FILE FILES
    "/home/jungcow/ws_proj_06_pure_pursuit/src/autonomous_msg/msg/AccelBrakeSteering.msg"
    "/home/jungcow/ws_proj_06_pure_pursuit/src/autonomous_msg/msg/VehicleOutput.msg"
    "/home/jungcow/ws_proj_06_pure_pursuit/src/autonomous_msg/msg/VehicleInput.msg"
    "/home/jungcow/ws_proj_06_pure_pursuit/src/autonomous_msg/msg/PolyfitLaneData.msg"
    "/home/jungcow/ws_proj_06_pure_pursuit/src/autonomous_msg/msg/LanePointData.msg"
    "/home/jungcow/ws_proj_06_pure_pursuit/src/autonomous_msg/msg/LanePointDataArray.msg"
    "/home/jungcow/ws_proj_06_pure_pursuit/src/autonomous_msg/msg/PolyfitLaneDataArray.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autonomous_msg/cmake" TYPE FILE FILES "/home/jungcow/ws_proj_06_pure_pursuit/build/autonomous_msg/catkin_generated/installspace/autonomous_msg-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/jungcow/ws_proj_06_pure_pursuit/devel/include/autonomous_msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/jungcow/ws_proj_06_pure_pursuit/devel/share/roseus/ros/autonomous_msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/jungcow/ws_proj_06_pure_pursuit/devel/share/common-lisp/ros/autonomous_msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/jungcow/ws_proj_06_pure_pursuit/devel/share/gennodejs/ros/autonomous_msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/jungcow/ws_proj_06_pure_pursuit/devel/lib/python3/dist-packages/autonomous_msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/jungcow/ws_proj_06_pure_pursuit/devel/lib/python3/dist-packages/autonomous_msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/jungcow/ws_proj_06_pure_pursuit/build/autonomous_msg/catkin_generated/installspace/autonomous_msg.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autonomous_msg/cmake" TYPE FILE FILES "/home/jungcow/ws_proj_06_pure_pursuit/build/autonomous_msg/catkin_generated/installspace/autonomous_msg-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autonomous_msg/cmake" TYPE FILE FILES
    "/home/jungcow/ws_proj_06_pure_pursuit/build/autonomous_msg/catkin_generated/installspace/autonomous_msgConfig.cmake"
    "/home/jungcow/ws_proj_06_pure_pursuit/build/autonomous_msg/catkin_generated/installspace/autonomous_msgConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autonomous_msg" TYPE FILE FILES "/home/jungcow/ws_proj_06_pure_pursuit/src/autonomous_msg/package.xml")
endif()

