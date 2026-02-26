#include "lista.h"
#include <iostream>
using namespace std;

Lista::Lista()
{
    alku = nullptr;
}

void Lista::lisaa(Solmu * ptr)
{
    if(alku == nullptr)
    {
        alku = ptr;
        return;
    }

    Solmu * temppi = alku;
    alku = ptr;
    alku->next = temppi;
}

void Lista::poista(Solmu * ptr)
{
    Solmu * edellinen = alku;
    Solmu * seuraava = alku->next;
    if(edellinen == ptr)
    {
        alku = alku->next;
        return;
    }
    while(seuraava)
    {
        if(seuraava == ptr)
        {
            edellinen->next = seuraava->next;
        }
        edellinen = seuraava;
        seuraava = seuraava->next;
    }
}

void Lista::tulosta()
{
    Solmu * ptr = alku;

    while(ptr)
    {
        cout<<ptr->getLuku()<<endl;
        ptr = ptr->next;
    }
}
