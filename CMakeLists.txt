cmake_minimum_required(VERSION 3.10)
project(collatz_problem)

set(CMAKE_CXX_STANDARD 17)

# ROOT パッケージを探す
find_package(ROOT REQUIRED COMPONENTS Hist Graf Core RIO)
include(${ROOT_USE_FILE})

# ヘッダーのインクルードパス
include_directories(include)

# ソースファイル（関数とmain）
file(GLOB SRC_FILES src/*.cc)
file(GLOB MAIN_FILE main/*.cc)

# 実行ファイル作成
add_executable(collatz_problem ${SRC_FILES} ${MAIN_FILE})

# ROOT のライブラリとリンク
target_link_libraries(collatz_problem ${ROOT_LIBRARIES})

# 出力先を指定
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/exe)

