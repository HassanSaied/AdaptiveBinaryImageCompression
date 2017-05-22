cmake_minimum_required(VERSION 2.6)
project(adaptivebinaryimagecompression)

find_package(OpenCV REQUIRED)

file(GLOB_RECURSE SOURCE_FILES       src/code/*.cpp)
file(GLOB_RECURSE HEADERS_FILES      src/include/*.hpp)

include_directories (
	src/include
)

add_executable(abic ${SOURCE_FILES} ${HEADERS_FILES} src/include/Utils/Statistics.hpp src/code/Utils/Statistics.cpp src/include/Algorithms/BWTRLEencoder.hpp src/code/Algorithms/BWTRLEencoder.cpp src/include/Algorithms/BinaryImageDecompressor.hpp src/include/Algorithms/BTWRLEdecoder.hpp src/code/Algorithms/BWTRLEdecoder.cpp)
target_link_libraries(abic ${OpenCV_LIBS})

