#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student(string, int);
    string getName();
    int getNumber();

private:
    string name;
    int studentNum;
};

#endif // STUDENT_H
