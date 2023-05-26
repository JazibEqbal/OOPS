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
    enum class Rating movieRating;
    int movieRunTime;
    std::string* castMembers;
    int totalNumberOfSeats;
public:
    Movie() = delete;
    Movie(const Movie &obj) = default;
    Movie(std::string name,std::string id,std::string director,enum class Rating rating,int runtime, std::string *cast, int seats);
    ~Movie();

    //void getDetails(std::string *casts, int n);

    std::string getMovieName() const { return movieName; }
    void setMovieName(const std::string &movieName_) { movieName = movieName_; }

    std::string getMovieId() const { return movieId; }
    void setMovieId(const std::string &movieId_) { movieId = movieId_; }

    std::string getMovieDirector() const { return movieDirector; }
    void setMovieDirector(const std::string &movieDirector_) { movieDirector = movieDirector_; }

    int getMovieRunTime() const { return movieRunTime; }
    void setMovieRunTime(int movieRunTime_) { movieRunTime = movieRunTime_; }

    int getTotalNumberOfSeats() const { return totalNumberOfSeats; }
    void setTotalNumberOfSeats(int totalNumberOfSeats_) { totalNumberOfSeats = totalNumberOfSeats_; }

    friend std::ostream &operator<<(std::ostream &os, const Movie &rhs);

    enum class Rating getRating() const { return movieRating; };
    
};
std::string displayEnum( enum class Rating movieRating);

#endif // MOVIE_H
