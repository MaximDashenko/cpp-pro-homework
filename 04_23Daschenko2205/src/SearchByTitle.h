//
// Created by Maxim Dashenko on 19.06.2023.
//


#ifndef CPP_PRO_HOMEWORK_SEARCHBYTITLE_H
#define CPP_PRO_HOMEWORK_SEARCHBYTITLE_H

#include <iostream>

#include "Struct.h">

std::vector<Video> searchByTitle(const std::vector<Video> &videos, const std::string &title) {
    std::vector<Video> results;
    for (const auto &video: videos) {
        if (video.title == title) {
            results.push_back(video);
        }
    }
    return results;
}

#endif //CPP_PRO_HOMEWORK_SEARCHBYTITLE_H
