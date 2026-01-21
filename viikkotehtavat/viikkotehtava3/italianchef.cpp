#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(string s) : Chef(s)
{
    chefName = s;
    cout<<"Italian chef "<<chefName<<" constructed"<<endl;
    //konstruktorin debug
}

bool ItalianChef::askSecret(string givenPassword, int a, int b)
{
    if((password.compare(givenPassword)) == 0)
    {
        cout<<"Password was right!"<<endl;
        ItalianChef::makePizza(a, b);
        //verrataan salasanoja .compare
        //jos oikein, tehdään pizzoja
    }
    return 0;
}

ItalianChef::makePizza(int water, int flour)
{
    int minimum = min(water, flour);
    //katsotaan kumpaa on vähemmän, jos ainesta on enemmän kuin 5
    if(minimum >= 5)
    {
        int serving = minimum / 5;
        cout<<"Made "<<serving<<" pizza"<<endl;
        return serving;
        //lasketaan tehtyjen pizzojen määrä
    }
}

ItalianChef::~ItalianChef()
{
    cout<<"Italian chef "<<chefName<<" destoryed"<<endl;
    //destruktorin debug
}
