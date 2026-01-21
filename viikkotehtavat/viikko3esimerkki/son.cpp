#include "son.h"
#include <iostream>


Son::Son(string isa, string poika) : Father(isa)
{
    //isä pitää olla hengissä jo nyt
    SonName = poika;
    cout<<"Son = "<<SonName
         <<" created"<<endl;
    this->FatherNickname = "Isukki";
}

Son::~Son()
{
    cout<<"Son = "<<SonName
         <<" deleted"<<endl;
}

void Son::printEducation()
{
    cout<<"Son education = koodari"<<endl;
}
