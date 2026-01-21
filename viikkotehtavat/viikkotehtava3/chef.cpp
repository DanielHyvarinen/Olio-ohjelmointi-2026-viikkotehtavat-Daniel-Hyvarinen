#include "chef.h"
#include <iostream>

Chef::Chef(string s)
{
    chefName = s;
    cout<<"Chef "<<chefName<<" constructed"<<endl;
    //konstruktorin debug
}

string Chef::getName()
{
    string s = chefName;
    return s;
    //tämä funktio ei oikeasti tee mitään
}

Chef::makeSalad(int ing)
{
    int serving = ing / 5;
    cout<<"Made "<<serving<<" salad"<<endl;
    return serving;
    //lasketaan tehtyjen annosten määrä
}

Chef::makeSoup(int ing)
{
    int serving = ing / 3;
    cout<<"Made "<<serving<<" soup"<<endl;
    return serving;
}

Chef::~Chef()
{
    cout<<"Chef "<<chefName<<" destroyed"<<endl;
    //destruktorin debug
}
