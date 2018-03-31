cmake_minimum_required(VERSION 3.8)
project(eficaz)

set(CMAKE_C_STANDARD 99)

if(UNIX)
    if (NOT APPLE)
        set(SRC_SOCK socket/dbus.c socket/dbus.h)
    endif(NOT APPLE)
endif(UNIX)

set(SRC_ENV env/context.c env/context.h env/project.c env/project.h env/sequence.c env/sequence.h env/shot.c env/shot.h)
set(SOURCE_FILES ${SRC_SOCK} ${SRC_ENV})

add_library(eficaz ${SOURCE_FILES})

if(UNIX)
    target_include_directories(eficaz PUBLIC /usr/include/dbus-1.0/)
    target_include_directories(eficaz PUBLIC /usr/lib/dbus-1.0/include/)

    if(NOT APPLE)
        target_link_libraries(eficaz PUBLIC dbus-1)
    endif(NOT APPLE)
endif(UNIX)