cmake_minimum_required(VERSION 3.8)
project(eficaz)

set(CMAKE_C_STANDARD 99)

set(SRC_DB db/mysql.c db/mysql.h)
set(SRC_ENV env/context.c env/context.h env/project.c env/project.h env/sequence.c env/sequence.h env/shot.c env/shot.h)
set(SOURCE_FILES ${SRC_SOCK} ${SRC_ENV} ${SRC_DB})

add_library(eficaz ${SOURCE_FILES})

if(UNIX)

    target_link_libraries(eficaz PUBLIC /usr/local/Cellar/mariadb/10.2.11/lib)

endif(UNIX)

add_executable(eficaz_libTest main.c)