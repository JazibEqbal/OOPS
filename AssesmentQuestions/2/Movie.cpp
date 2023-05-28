#include "Movie.h"

Movie::Movie(std::string name, std::string id, std::string director,enum class Rating rating, int time, std::string *cast, int seats)
  : movieName{name}, movieId{id}, movieDirector{director}, movieRunTime{time}, totalNumberOfSeats{seats} {
    this->castMembers = cast;
    this->movieRating = rating;
  }

Movie::~Movie()
{
    std::cout<<"Movie destroyed\n";
}

// void Movie::getDetails(std::string *casts, int n){
//     std::cout<<"Movie Id: "<<getMovieId()<<"\n";
//     std::cout<<"Movie Name: "<<getMovieName()<<"\n";
//     std::cout<<"Movie Director: "<<getMovieDirector()<<"\n";
//     std::cout<<"Movie Rating: "<<getMovieName()<<"\n";
//     std::cout<<"Movie Run Time: "<<getMovieRunTime()<<"\n";
//     std::cout<<"Total no of seats: "<<getTotalNumberOfSeats()<<"\n";
//     std::cout<<"Movie Casts: \n";
//     for(int i=0;i<n;i++){
//         std::cout<<i+1<<". "<<casts[i]<<"\n";
//     }
// }

std::string displayEnum( enum class Rating movieRating){
    if(movieRating == Rating::A){
        return "A";
    } else if(movieRating == Rating::R){
        return "R";
    } else if(movieRating == Rating::U){
        return "U";
    }else{
        return "UA";
    }
}

std::ostream &operator<<(std::ostream &os, const Movie &rhs) {
    os << "Movie Name: " << rhs.movieName<<"\n"
       << "Movie Id: " << rhs.movieId<<"\n"
       << "Movie Director: " << rhs.movieDirector<<"\n"
       << "Movie Rating: " <<displayEnum(rhs.movieRating)<<"\n"
       << "Movie RunTime: " << rhs.movieRunTime<<"\n"
       << "Total Number Of Seats: " << rhs.totalNumberOfSeats<<"\n"
       << "Cast Members: \n";
       for(int i=0;i<3;i++){
        os << rhs.castMembers[i]<<"\n";
    };
    return os;
}
