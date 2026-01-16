#include "mittari.h"
#include <iostream>
using namespace std;


void mittari::mittaus()
{
    float temp = dhtOlio.readTemperature();
    string s = lcdOlio.floatToString(temp);
    lcdOlio.print(s);
}

void mittari::setup()
{
    cout<<"mittari setup-funktio"<<endl;
    dhtOlio.begin();
    lcdOlio.begin();
}
