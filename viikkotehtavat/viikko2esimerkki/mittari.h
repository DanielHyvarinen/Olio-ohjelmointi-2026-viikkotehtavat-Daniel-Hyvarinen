#ifndef MITTARI_H
#define MITTARI_H
#include "lcd.h"
#include "dht.h"
#include <iostream>

class mittari
{
public:
    void mittaus();
    void setup();
private:
    int varoitusvalo;
    LCD lcdOlio;
    DHT dhtOlio;

};

#endif // MITTARI_H
