#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <string>
using namespace std;

class ItalianChef : public Chef //tehdään luokka ItalianChef joka perii luokan Chef
{
public:
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string, int, int);

private:
    int makePizza(int, int);
    int flour;
    int water;
    string password = "pizza"; //alustetaan salasana

};

#endif // ITALIANCHEF_H
