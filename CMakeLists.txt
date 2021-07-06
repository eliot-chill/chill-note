cmake_minimum_required(VERSION 3.12)
project(ChillNote VERSION 0.0.1)

set(CMAKE_BUILD_TYPE RelWithDebInfo)

find_package(wxWidgets REQUIRED)
include(${wxWidgets_USE_FILE})
include_directories(${PROJECT_SOURCE_DIR}/src)
file(GLOB all_SRCS
    "${PROJECT_SOURCE_DIR}/src/*.cpp",
    "${PROJECT_SOURCE_DIR}/src/*.h",
)
add_executable(chill-note ${all_SRCS})
target_link_libraries(chill-note ${wxWidgets_LIBRARIES})


