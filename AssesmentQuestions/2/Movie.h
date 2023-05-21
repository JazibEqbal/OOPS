#ifndef MOVIE_H
#define MOVIE_H
#include "Rating.h"
#include<iostream>

class Movie
{
private:
    std::string movieName;
    std::string movieId;
    std::string movieDirector;
    enum Rating movieRating;
    int movieRunTime;
    std::string castMembers[20];
    int totalNumberOfSeats;
public:
    Movie();
    ~Movie();

    const std::string* getCastMembers(){
        return castMembers;
    }
    void setCastMembers(std::string* members){
        for(int i=0;i<20;i++){
            castMembers[i] = members[i];
        }
    };

};

#endif // MOVIE_H
