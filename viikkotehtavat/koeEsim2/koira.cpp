#include "koira.h"
#include <iostream>

Koira::Koira(string n, string r) : Elain(n)
{
    nimi = n;
    rotu = r;
}

void Koira::aantele()
{
    cout<<nimi<<" haukkuu"<<endl;
}
