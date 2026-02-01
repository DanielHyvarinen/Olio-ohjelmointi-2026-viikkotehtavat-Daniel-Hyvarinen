#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"


using namespace std;

//ohjelma toimii muuten oikein, tulostuksessa Sepon talletus 100 esiintyy kahteen kertaan

int main()
{
    //
    // Pankkitili kayttotili("nimi");
    // kayttotili.getBalance();
    // kayttotili.deposit(30);
    // kayttotili.withdraw(20);

    // Luottotili luottotili("nimi2", 100);
    // luottotili.getBalance();
    // luottotili.withdraw(100);
    // luottotili.withdraw(20);
    // luottotili.deposit(20);


    //luodaan asiakas Seppo, talletetaan tilille 100 ja tarkistetaan saldo
    Asiakas asiakas("Seppo", 1000);
    asiakas.talletus(100);
    asiakas.showSaldo();


    //luodaan asiakas Pentti ja tarkistetaan saldo
    Asiakas asiakas2("Pentti", 100);
    asiakas2.showSaldo();

    //Siirretään Sepon tililtä Pentin tilille 100 ja tarkistetaan
    //molempien saldot

    asiakas.tilisiirto(100, asiakas2);

    asiakas.showSaldo();

    asiakas2.showSaldo();

    return 0;
}
