//
// Created by Maxim Dashenko on 19.06.2023.
//

#ifndef CPP_PRO_HOMEWORK_SEARCHBYDIRECTOR_H
#define CPP_PRO_HOMEWORK_SEARCHBYDIRECTOR_H

#include <iostream>

#include "Struct.h"

std::vector<Video> searchByDirector(const std::vector<Video> &videos, const std::string &director) {
    std::vector<Video> results;
    for (const auto &video: videos) {
        if (video.director == director) {
            results.push_back(video);
        }
    }
    return results;
}

#endif //CPP_PRO_HOMEWORK_SEARCHBYDIRECTOR_H
