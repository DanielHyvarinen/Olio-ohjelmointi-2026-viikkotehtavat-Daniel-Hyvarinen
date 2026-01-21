#ifndef CHEF_H
#define CHEF_H
#include <string>
using namespace std;

class Chef //tehdään luokka Chef
{
public:
    Chef(string);
    ~Chef();
    string getName();
    int makeSalad(int);
    int makeSoup(int);

protected:
    string chefName;
};

#endif // CHEF_H
