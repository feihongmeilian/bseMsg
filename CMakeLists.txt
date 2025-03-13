cmake_minimum_required(VERSION 3.20)

project("bseMsg")

include_directories(./include)

file(GLOB_RECURSE SRC "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

set(LIB_SRC ${SRC})

foreach(file ${LIB_SRC})
    if(file MATCHES "main\\.cpp$")
        list(REMOVE_ITEM LIB_SRC ${file})
    endif()
endforeach()

if(BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} SHARED ${LIB_SRC})
else()
    add_library(${PROJECT_NAME} STATIC ${LIB_SRC})
endif()

if(CMAKE_SYSTEM_NAME MATCHES "Linux")
    target_link_libraries(${PROJECT_NAME}
        pthread fmt libdbf.a
    )
endif()
