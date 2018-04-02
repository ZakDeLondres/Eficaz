cmake_minimum_required(VERSION 3.8)
project(eficaz)

set(CMAKE_C_STANDARD 99)

set(SRC_DB db/mysql.c db/mysql.h)
set(SRC_ENV env/context.c env/context.h env/project.c env/project.h env/sequence.c env/sequence.h env/shot.c env/shot.h)
set(SOURCE_FILES ${SRC_SOCK} ${SRC_ENV} ${SRC_DB} db/def.h)

add_library(eficaz ${SOURCE_FILES})
add_executable(eficaz_libTest main.c)

if (APPLE)
    target_link_libraries(eficaz /usr/local/mysql-connector-c-6.1.11-macos10.12-x86_64/lib/libmysqlclient.dylib)
    target_link_libraries(eficaz_libTest /usr/local/mysql/lib/libmysqlclient.dylib)
endif (APPLE)
if(UNIX)
endif(UNIX)

target_link_libraries(eficaz_libTest $ENV{HOME}/projects/eficaz/cmake-build-debug/libeficaz.a)