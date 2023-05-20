#include "Student.h"
#include<iostream>

enum StudentBranch makeFun(){
    std::cout<<"Enter 1 for CIVIL \n"
    <<"2 for CSE \n"
    <<"3 for MECHANICAL \n"
    <<"4 for EEE \n"
    <<"5 for ECE \n"
    <<"6 for IT \n";
    int choice;
    std::cin>>choice;

    switch(choice){
        case 1: return StudentBranch::CIVIL;
                break;
        case 2: return StudentBranch::CSE;
                break;
        case 3: return StudentBranch::MECHANICAL;
                break;
        case 4: return StudentBranch::EEE;
                break;
        case 5: return StudentBranch::ECE;
                break;
        case 6: return StudentBranch::IT;
                break;
        default:
                return StudentBranch::CSE;
                break;
    }
};

int main(){
    enum StudentBranch ans = makeFun();
    Student *s = new Student(101,ans);
    s->display();
    delete s;
}