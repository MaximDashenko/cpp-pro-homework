//
// Created by Maxim Dashenko on 19.06.2023.
//

#ifndef CPP_PRO_HOMEWORK_DISPLAYALLVIDEOS_H
#define CPP_PRO_HOMEWORK_DISPLAYALLVIDEOS_H

#include <iostream>

#include "Struct.h"

void displayAllVideos(const std::vector<Video> &videos) {
    for (const auto &video: videos) {
        std::cout << "Title: " << video.title << std::endl;
        std::cout << "Director: " << video.director << std::endl;
        std::cout << "Genre: " << video.genre << std::endl;
        std::cout << "Popularity Rating: " << video.popularityRating << std::endl;
        std::cout << "Price: " << video.price << std::endl;
        std::cout << std::endl;
    }
}

#endif //CPP_PRO_HOMEWORK_DISPLAYALLVIDEOS_H
