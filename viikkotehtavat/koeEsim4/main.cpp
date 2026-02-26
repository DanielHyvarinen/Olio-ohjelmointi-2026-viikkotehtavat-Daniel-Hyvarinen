#include <iostream>
#include "lista.h"
#include "solmu.h"

using namespace std;

int main()
{
    Solmu s1(10);
    Solmu s2(20);
    Solmu s3(30);

    Lista lista;
    lista.lisaa(&s1);
    lista.lisaa(&s2);
    lista.lisaa(&s3);

    lista.tulosta();
    lista.poista(&s1);
    lista.tulosta();

    return 0;
}
