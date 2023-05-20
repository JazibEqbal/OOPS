#include "Student.h"
#include<iostream>

Student::Student(int id, StudentBranch course)
{
    this->studentId=id;
    this->studentCourse=course;
}

Student::~Student()
{
    std::cout<<"Student with ID: "<<this->studentId<<" is destroyed \n";
}

void Student::display()
{
    std::cout<<"Id is: "<<this->getStudentId()<<"\n";
    if(studentCourse == CIVIL){
        std::cout<<"User selected CIVIL Branch \n";
    }
    else if(studentCourse == IT){
        std::cout<<"User selected IT Branch \n";
    }
    else if(studentCourse == CSE){
        std::cout<<"User selected CSE Branch \n";
    }
    else if(studentCourse == MECHANICAL){
        std::cout<<"User selected MECHANICAL Branch \n";
    }
    else if(studentCourse == EEE){
        std::cout<<"User selected EEE Branch \n";
    }
    else if(studentCourse == ECE){
        std::cout<<"User selected ECE Branch \n";
    }
    else {
        std::cout<<"User selected CSE Branch \n";
    }
}
