set(SOURCE_FILES src/main.cpp)
add_executable(template ${SOURCE_FILES})
target_link_libraries(template LINK_PRIVATE utils)