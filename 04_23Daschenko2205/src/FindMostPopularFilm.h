//
// Created by Maxim Dashenko on 19.06.2023.
//

#ifndef CPP_PRO_HOMEWORK_FINDMOSTPOPULARFILM_H
#define CPP_PRO_HOMEWORK_FINDMOSTPOPULARFILM_H

#include <iostream>

#include "Struct.h"

Video findMostPopularFilm(const std::vector<Video>& videos) {
    Video mostPopularFilm;
    double maxRating = 0.0;
    for (const auto& video : videos) {
        if (video.popularityRating > maxRating) {
            mostPopularFilm = video;
            maxRating = video.popularityRating;
        }
    }
    return mostPopularFilm;
}

#endif //CPP_PRO_HOMEWORK_FINDMOSTPOPULARFILM_H
