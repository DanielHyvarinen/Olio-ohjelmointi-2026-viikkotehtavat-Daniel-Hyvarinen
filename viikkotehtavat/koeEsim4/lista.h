#ifndef LISTA_H
#define LISTA_H
#include "solmu.h"

class Lista
{
public:
    Lista();
    void lisaa(Solmu *);
    void poista(Solmu *);
    void tulosta();

private:
    Solmu * alku;
};

#endif // LISTA_H
