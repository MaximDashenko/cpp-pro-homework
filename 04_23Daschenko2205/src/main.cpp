
#include <iostream>
#include <vector>
#include <limits>

#include "Struct.h"
#include "SearchByTitle.h"
#include "SearchByGenre.h"
#include "SearchByDirector.h"
#include "FindMostPopularFilm.h"
#include "SearchByPrice.h"
#include "DisplayAllVideos.h"
#include "AddNewVideo.h"

int main() {
    std::vector<Video> videoCollection;

    Video film1 = {"Inception", "Christopher Nolan", "Action", 8.8, 160};
    Video film2 = {"The Shawshank Redemption", "Frank Darabont", "Drama", 9.3, 80};
    Video film3 = {"The Dark Knight", "Christopher Nolan", "Action", 9, 152};
    Video film4 = {"Interstellar", "Christopher Nolan", "Sci-Fi", 8.7, 165};
    Video film5 = {"Pulp Fiction", "Quentin Tarantino", "Crime", 8.9, 60};

    videoCollection.push_back(film1);
    videoCollection.push_back(film2);
    videoCollection.push_back(film3);
    videoCollection.push_back(film4);
    videoCollection.push_back(film5);


    int number;
    std::cout << "Find films:" << std::endl;
    std::cout << "1. Search by genre" << std::endl;
    std::cout << "2. Search by title" << std::endl;
    std::cout << "3. Search by director" << std::endl;
    std::cout << "4. Find the most popular film " << std::endl;
    std::cout << "5. Search by price" << std::endl;
    std::cout << "6. Display all videos" << std::endl;
    std::cout << "7. Add a new video" << std::endl;
    std::cout << "Enter the option number: ";
    std::cin >> number;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore a new line after entering a number

    switch (number) {
        case 1:
            std::cout << "Enter genre to search: ";
            {
                std::string searchGenre;
                std::getline(std::cin, searchGenre);
                std::vector<Video> searchResultsByGenre = searchByGenre(videoCollection, searchGenre);
                std::cout << "Search results for genre '" << searchGenre << "':" << std::endl;
                displayAllVideos(searchResultsByGenre);
            }
            break;
        case 2:
            std::cout << "Enter title to search: ";
            {
                std::string searchTitle;
                std::getline(std::cin, searchTitle);
                std::vector<Video> searchResultsByTitle = searchByTitle(videoCollection, searchTitle);
                std::cout << "Search results for title '" << searchTitle << "':" << std::endl;
                displayAllVideos(searchResultsByTitle);
            }
            break;
        case 3:
            std::cout << "Enter director to search: ";
            {
                std::string searchDirector;
                std::getline(std::cin, searchDirector);
                std::vector<Video> searchResultsByDirector = searchByDirector(videoCollection, searchDirector);
                std::cout << "Search results for director '" << searchDirector << "':" << std::endl;
                displayAllVideos(searchResultsByDirector);
            }
            break;
        case 4: {
            Video mostPopularFilm = findMostPopularFilm(videoCollection);
            std::cout << "Most popular film overall:" << std::endl;
            std::cout << "Title: " << mostPopularFilm.title << std::endl;
            std::cout << "Director: " << mostPopularFilm.director << std::endl;
            std::cout << "Genre: " << mostPopularFilm.genre << std::endl;
            std::cout << "Popularity Rating: " << mostPopularFilm.popularityRating << std::endl;
            std::cout << "Price: " << mostPopularFilm.price << std::endl;
        }
            break;
        case 5:
            std::cout << "Enter maximum price: ";
            {
                double maxPrice;
                std::cin >> maxPrice;
                std::vector<Video> searchResultsByPrice = searchByPrice(videoCollection, maxPrice);
                std::cout << "Search results for maximum price $" << maxPrice << " or less:" << std::endl;
                displayAllVideos(searchResultsByPrice);
            }
            break;
        case 6:
            std::cout << "All videos:" << std::endl;
            displayAllVideos(videoCollection);
            break;
        case 7:
            addNewVideo(videoCollection);
            break;
        default:
            std::cout << "Invalid option number" << std::endl;
            break;
    }

    return 0;
}
