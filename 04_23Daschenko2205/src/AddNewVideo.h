//
// Created by Maxim Dashenko on 19.06.2023.
//

#ifndef CPP_PRO_HOMEWORK_ADDNEWVIDEO_H
#define CPP_PRO_HOMEWORK_ADDNEWVIDEO_H

#include <iostream>

#include "Struct.h"

void addNewVideo(std::vector<Video> &videos) {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ігноруємо новий рядок після вводу числа
    std::cout << "Enter title: ";
    std::string title;
    std::getline(std::cin, title);
    std::cout << "Enter director: ";
    std::string director;
    std::getline(std::cin, director);
    std::cout << "Enter genre: ";
    std::string genre;
    std::getline(std::cin, genre);
    std::cout << "Enter popularity rating: ";
    double popularityRating;
    std::cin >> popularityRating;
    std::cout << "Enter price: ";
    double price;
    std::cin >> price;
    Video newVideo = {title, director, genre, popularityRating, price};
    videos.push_back(newVideo);
    std::cout << "New video added successfully!" << std::endl;
}

#endif //CPP_PRO_HOMEWORK_ADDNEWVIDEO_H
