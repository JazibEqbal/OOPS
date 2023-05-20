#ifndef STUDENT_H
#define STUDENT_H
#include "StudentBranch.h"

class Student
{
private:
    int studentId;
    enum StudentBranch studentCourse;
public:
    Student(int id,enum StudentBranch course);
    ~Student();
    void display();
    int getStudentId() const { return studentId; }
    void setStudentId(int studentId_) { studentId = studentId_; }
};


#endif