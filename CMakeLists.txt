cmake_minimum_required(VERSION 3.10)
project(multiple_executables)

set(CMAKE_CXX_STANDARD 17)
include_directories(include)

# ROOT を探す
find_package(ROOT REQUIRED COMPONENTS Hist Graf Core RIO)
include(${ROOT_USE_FILE})

# 共通ソース
file(GLOB SRC_FILES src/*.cc)

# 各 main に対してビルドとリンク
file(GLOB MAIN_FILES RELATIVE ${CMAKE_SOURCE_DIR} main/*.cc)

foreach(mainfile ${MAIN_FILES})
    get_filename_component(name ${mainfile} NAME_WE)
    add_executable(${name} ${SRC_FILES} main/${name}.cc)
    set_target_properties(${name} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/exe)

    # ROOT ライブラリのリンクを追加
    target_link_libraries(${name} ${ROOT_LIBRARIES})
endforeach()

