#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;


class Student
{
public:
    Student(string, int);
    void setName(string);
    void setAge(int);
    string getName();
    int getAge();
    void printStudentInfo();

private:
    string Name;
    int Age;
};

#endif // STUDENT_H
