cmake_minimum_required(VERSION 3.27)
project(LearnCppAndPracticeAlgorithms)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True) # ensures the specified C++ standard is mandatory
# Ensure the build targets Apple Silicon (arm64)
if(APPLE)
    set(CMAKE_OSX_ARCHITECTURES "arm64" CACHE STRING "Build architecture" FORCE)
endif()

include_directories(include)

add_library(my_heap 
    src/data_structures/heap/heap.cpp
)
add_library(heapify
    src/data_structures/heap/heapify.cpp
)

add_library(my_queue
    src/data_structures/queue/circular_queue.cpp
)
# # Find all *.cpp files except for "abstract_heap", "max_heap", "min_heap" (any that's a library)
# file(GLOB_RECURSE SOURCES "src/*.cpp")
# list(REMOVE_ITEM
#     SOURCES
#     "src/data_structures/heap/abstract_heap.cpp"
#     "src/data_structures/heap/max_heap.cpp"
#     "src/data_structures/heap/min_heap.cpp")
# add_executable(LearnCppAndPracticeAlgorithms ${SOURCES})
add_executable(LearnCppAndPracticeAlgorithms main.cpp)

target_link_libraries(LearnCppAndPracticeAlgorithms 
    my_heap
    heapify
    my_queue
)
target_include_directories(LearnCppAndPracticeAlgorithms
    PUBLIC
    "include/data_structures/heap/"
)