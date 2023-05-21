#include "Movie.h"


int main(){
    Movie m;
    std::string daysToCompleteCourse[3] = { "kk","bb","hhhh" };
    m.setCastMembers(daysToCompleteCourse);
    std::cout<<m.getCastMembers();
    return 0;
}