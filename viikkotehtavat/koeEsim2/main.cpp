#include <iostream>
#include "elain.h"
#include "koira.h"

using namespace std;

int main()
{
    Elain elain("possu");
    Koira koira("Tassu", "pystykorva");

    elain.aantele();
    koira.aantele();
    return 0;
}
