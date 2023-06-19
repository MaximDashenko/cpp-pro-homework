//
// Created by Maxim Dashenko on 19.06.2023.
//

#ifndef CPP_PRO_HOMEWORK_SEARCHBYGENRE_H
#define CPP_PRO_HOMEWORK_SEARCHBYGENRE_H

#include <iostream>

#include "Struct.h"

std::vector<Video> searchByGenre(const std::vector<Video> &videos, const std::string &genre) {
    std::vector<Video> results;
    for (const auto &video: videos) {
        if (video.genre == genre) {
            results.push_back(video);
        }
    }
    return results;
}


#endif //CPP_PRO_HOMEWORK_SEARCHBYGENRE_H
