#include "Movie.h"

int main()
{
    Movie *m;
    std::string daysToCompleteCourse[] = {"kk", "bb", "hhhh"};
    m->setCastMembers(daysToCompleteCourse);
    std::cout << m->getCastMembers();
    return 0;
}