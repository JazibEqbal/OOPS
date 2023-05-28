#include "Movie.h"
#include <iostream>
#include "Rating.h"
#include <stdexcept>

Movie *movie[3];
std::string *casts;

void bookTicket(std::string name, int showTimings) noexcept(false)
{
    for (auto it : movie){
        if (it->getMovieName() == name){
            if (it->getTotalNumberOfSeats() > 0){
                std::cout<<"Total Number of seats left: "<<it->getTotalNumberOfSeats()<<"\n";
                std::cout << "Enter number of seats you want to book ";
                int seats;
                std::cin >> seats;
                try{
                    if(seats <= 0){
                        throw std::invalid_argument("Seat selected must be at least 1.");
                    }
                    if(seats > it->getTotalNumberOfSeats()){
                        throw std::invalid_argument("Selected number of seats exceeds the total avaibility of seats.");
                    }
                    if(seats > 0 && seats <= it->getTotalNumberOfSeats()){
                        int remainingSeats = 0;
                        remainingSeats = it->getTotalNumberOfSeats() - seats;
                        it->setTotalNumberOfSeats(remainingSeats);
                        std::cout<<"\n";
                        std::cout<<"Status: Successfully Booked!\n";
                        std::cout<<"Show booked for: "<<it->getMovieName()<<"\n";
                        std::cout<<"Number of tickets booked: "<<seats<<"\n"; 
                        if(showTimings == 1){
                            std::cout<<"Show Timing: "<<"Slot "<<showTimings<<"\n";
                            std::cout<<"Show Time: 3:00 PM - 5:30PM\n";
                        } else if(showTimings == 2){
                            std::cout<<"Show Timing: "<<"Slot "<<showTimings<<"\n";
                            std::cout<<"Show Time: 6:00PM - 9:00PM\n";                           
                        } else{
                            std::cout<<"Show Timing: "<<"Slot "<<showTimings<<"\n";
                            std::cout<<"Show Time: 11:30AM - 2:00PM\n";                            
                        }
                    }
                }
                catch (const std::exception &e){
                    std::cerr << e.what() << '\n';
                }
            }
        } if(name != it->getMovieName()){
            std::cout<<"No movie found with name "<<name<<"\n";
        }
    }
}

void getMovieDetails(std::string id){
    for(auto it: movie){
        if(id == it->getMovieId()){
            std::cout<<*it<<"\n";
        }else{
            std::cout<<"No movie found with name "<<id<<"\n";
        }
    }
    //std::cout<<"No movie found with Id "<<id<<"\n";
}

int main()
{   
    casts = new std::string[3];
    casts[0] = "Star Lord";
    casts[1] = "Nebula";
    casts[2] = "Mentis";

    Movie *m1 = new Movie("Gaurdians Vol.3", "3x", "John", Rating::UA, 130, casts, 10);
    Movie *m2 = new Movie("Breaking Bad", "E5", "Doe", Rating::UA, 180, casts, 30);
    Movie *m3 = new Movie("Prestige", "1x", "Nebula", Rating::A, 150, casts, 14);

    movie[0] = {m1};
    movie[1] = {m2};
    movie[2] = {m3};

    // m1->getDetails(casts,3);
    // std::cout<<m1->getTotalNumberOfSeats();
    std::cout<<"Choose 1 to Book Ticket\n";
    std::cout<<"Choose 2 to Get Movie Details\n";
    int options;
    std::cin>>options;
    switch(options){
        case 1: {
                std::cout << "Select Show Timings:\n";
                std::cout << "Select 1 for Show 1: 3:00PM - 5:30PM\n";
                std::cout << "Select 2 for Show 2: 6:00PM - 9:00PM\n";
                std::cout << "Select 3 for Show 3: 11:30AM - 2:00PM\n";
                int choice;
                std::cin>>choice;
                std::cout<<"Select a movie to ENJOY!\n";
                for(int i=0;i<3;i++){
                    std::cout<<i+1<<"."<<*movie[i]<<"\n";
                }
                std::cout<<"Enter Movie Name: ";
                std::string movies;
                std::cin.ignore();
                std::getline(std::cin,movies);
                bookTicket(movies, choice);
            break;
        }
        case 2: {
                std::cout<<"Enter Movie ID: ";
                std::string id;
                std::cin.ignore();
                std::getline(std::cin,id);
                getMovieDetails(id);
            break;
        }
        default:
            exit(0);
            break;
    }
    //bookTicket("Gaurdians Vol.3", 2);
    //std::cout<<"Seats remaining for "<<m1->getMovieName()<<" is "<<m1->getTotalNumberOfSeats()<<"\n
    delete m1;
    return 0;
}

// bool flag = true;
//     while(flag){
//         std::cout<<"Choose 1 to Book Ticket\n";
//         std::cout<<"Choose 2 to Get Movie Details\n";
//         std::cout<<"Choose 3 to Register a New Movie\n";
//         std::cout<<"Exit\n";
//         int options;
//         std::cin>>options;
//         switch(options){
//             case 1: {
//                 std::cout << "Select Show Timings:\n";
//                 std::cout << "Select 1 for Show 1: 3:00PM - 5:30PM\n";
//                 std::cout << "Select 2 for Show 2: 6:00PM - 9:00PM\n";
//                 std::cout << "Select 3 for Show 3: 11:30AM - 2:00PM\n";
//                 int choice;
//                 std::cin>>choice;
//                 std::cout<<"Select a movie to ENJOY!\n";
//                 for(int i=0;i<3;i++){
//                     std::cout<<i+1<<"."<<*movie[i]<<"\n";
//                 }
//                 std::cout<<"Enter Movie Name: ";
//                 std::string movies;
//                 std::cin.ignore();
//                 std::getline(std::cin,movies);
//                 bookTicket(movies, choice);
//             break;
//         }
//         case 2: {
//                 std::cout<<"Enter Movie ID: ";
//                 std::string id;
//                 std::cin.ignore();
//                 std::getline(std::cin,id);
//                 getMovieDetails(id);
//             break;
//         }
//         case 3: {
//             std::cout<< "Enter No Of New Movie Registeration\n";
//             int noOfRegisteration;
//             std::cin >> noOfRegisteration;
//             for (int i = 0; i < noOfRegisteration; i++)
//             {
//                 std::string mname, mid, mdirector;
//                 int ch, mins, castcnt, mseats;
//                 enum class Rating rate;

//                 // Get user input
//                 std::cout << "\nEnter the movie name ";
//                 std::cin >> mname;
//                 std::cout << "\nEnter the movie id ";
//                 std::cin >> mid;
//                 std::cout << "\nEnter the movie director ";
//                 std::cin >> mdirector;
//                 std::cout << "Enter 1 for U\n2 for U/A\n3 for R\n4 for A \n";
//                 std::cin >> ch;
//                 if (ch == 1)
//                     rate = Rating::U;
//                 else if (ch == 2)
//                     rate = Rating::UA;
//                 else if (ch == 3)
//                     rate = Rating::R;
//                 else if (ch == 4)
//                     rate = Rating::A;
//                 else
//                     rate = Rating::U;
//                 std::cout << "\nEnter the movie duration ";
//                 std::cin >> mins;
//                 std::cout << "\nEnter the movie cast count ";
//                 std::cin >> castcnt;
//                 std::string cast[castcnt];
//                 std::cout << "\nEnter the movie cast\n";
//                 for (int i = 0; i < castcnt; i++)
//                 {
//                     std::cin >> cast[i];
//                 }
//                 std::cout << "\nEnter the movie seats available ";
//                 std::cin >> mseats;

//                 movie[i] = new Movie(mname, mid, mdirector, rate, mins, cast, mseats);
                
//                  std::cout<<*movie[i]<<"\n";
//             }
//                 break;
//         }
//         case 4: 
//             flag = false;
//             exit(0);
//         default:
//             std::cout<<"Invalid option selected!\n";
//             break;
//     }
//    }