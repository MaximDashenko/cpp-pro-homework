set(SOURCE_FILES src/main.cpp src/SearchByTitle.h src/Struct.h src/SearchByGenre.h src/SearchByDirector.h src/FindMostPopularFilm.h src/SearchByPrice.h src/DisplayAllVideos.h src/AddNewVideo.h)
add_executable(04_23Daschenko2205 ${SOURCE_FILES})
target_link_libraries(04_23Daschenko2205 LINK_PRIVATE utils)