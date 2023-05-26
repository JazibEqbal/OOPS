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
    std::string* castMembers;
    int totalNumberOfSeats;
public:
    Movie(std::string *cast);
    ~Movie();

    std::string* getCastMembers() const { return castMembers; }
    void setCastMembers(std::string* castMembers_) { castMembers = castMembers_; }

    friend std::ostream &operator<<(std::ostream &os, const Movie &rhs);
};

#endif // MOVIE_H
