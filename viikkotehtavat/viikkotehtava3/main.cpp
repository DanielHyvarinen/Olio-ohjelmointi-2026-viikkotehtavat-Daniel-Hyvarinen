#include <iostream>
#include "italianchef.h"

using namespace std;

int main()
{
    Chef kokki1("kokki1"); //luodaan oliot kokki1 ja kokki2
    ItalianChef kokki2("kokki2");
    kokki1.makeSalad(20); //annetaan parametrit funktioille
    kokki1.makeSoup(9);
    kokki2.askSecret("pizza",15,10);

    return 0;
}
