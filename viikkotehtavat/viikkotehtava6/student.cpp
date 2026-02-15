#include "student.h"

Student::Student(string s, int a)
{
    cout<<"konstruktori debug"<<endl;
    Name = s;
    Age = a;
}

void Student::setName(string Name)
{

}

void Student::setAge(int Age)
{

}

string Student::getName()
{
    //cin>>Name;
    return Name;
}

int Student::getAge()
{
    //cin>>Age;
    return Age;
}

void Student::printStudentInfo()
{
    cout<<Name<<endl;
}
