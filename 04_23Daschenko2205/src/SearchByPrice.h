//
// Created by Maxim Dashenko on 19.06.2023.
//

#ifndef CPP_PRO_HOMEWORK_SEARCHBYPRICE_H
#define CPP_PRO_HOMEWORK_SEARCHBYPRICE_H

#include <iostream>
#include <algorithm>

#include "Struct.h"

std::vector<Video> searchByPrice(const std::vector<Video> &videos, double maxPrice) {
    std::vector<Video> results;
    for (const auto &video: videos) {
        if (video.price <= maxPrice) {
            results.push_back(video);
        }
    }
    std::sort(results.begin(), results.end(), [](const Video &a, const Video &b) {
        return a.price > b.price;
    });
    return results;
}

#endif //CPP_PRO_HOMEWORK_SEARCHBYPRICE_H
