#ifndef ELAIN_H
#define ELAIN_H
#include <string>
#include <iostream>
using namespace std;

class Elain
{
public:
    Elain(string nimi);
    virtual void aantele();

protected:
    string nimi;
};

#endif // ELAIN_H
