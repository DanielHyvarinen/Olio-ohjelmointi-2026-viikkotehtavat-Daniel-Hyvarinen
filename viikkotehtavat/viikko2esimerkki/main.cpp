#include <iostream>
#include "mittari.h"

using namespace std;

int main()
{
    mittari mittari;
    mittari.setup();

    for(int i=0; i<10; i++)
    {
        mittari.mittaus();
    }
    return 0;
}
