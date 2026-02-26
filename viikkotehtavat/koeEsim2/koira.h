#ifndef KOIRA_H
#define KOIRA_H
#include <string>
#include <iostream>
#include "elain.h"
using namespace std;


class Koira : protected Elain
{
public:
    Koira(string nimi, string rotu);
    virtual void aantele() override;

private:
    string rotu;
};

#endif // KOIRA_H
