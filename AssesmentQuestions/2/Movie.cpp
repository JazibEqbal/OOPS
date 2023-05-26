#include "Movie.h"

Movie::Movie(std::string *members) :castMembers{members}{
}

Movie::~Movie()
{
    std::cout<<"des\n";
}

std::ostream &operator<<(std::ostream &os, const Movie &rhs) {
    os << "movieName: " << rhs.movieName
       << " movieId: " << rhs.movieId
       << " movieDirector: " << rhs.movieDirector
       << " movieRating: " << rhs.movieRating
       << " movieRunTime: " << rhs.movieRunTime
       << " castMembers: " << *rhs.castMembers
       << " totalNumberOfSeats: " << rhs.totalNumberOfSeats;
    return os;
}
