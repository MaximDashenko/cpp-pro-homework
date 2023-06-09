set(HEADER_FILES
        include/utils.h)

set(SOURCE_FILES
        src/utils.cpp)

add_library(utils STATIC ${SOURCE_FILES})

target_include_directories(utils PRIVATE include/utils)
target_include_directories(utils PUBLIC include)