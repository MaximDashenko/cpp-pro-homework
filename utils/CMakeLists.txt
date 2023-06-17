set(HEADER_FILES include/legacy_console.h include/utils.h)

set(SOURCE_FILES src/legacy_console.cpp include/console.h)

add_library(utils STATIC ${SOURCE_FILES})

target_include_directories(utils PRIVATE include/utils)
target_include_directories(utils PUBLIC include)