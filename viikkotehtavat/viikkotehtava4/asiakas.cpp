#include "asiakas.h"
using namespace std;

//alustetaan konstruktori jäsenmuuttujien nimillä
Asiakas::Asiakas(string omistaja, double luottoraja) : kayttotili(omistaja), luottotili(omistaja, luottoraja)
{
    cout<<"Asiakas luotu nimella "<<omistaja<<endl;
    cout<<"Asiakkaan luottoraja on "<<luottoraja<<endl;
}

void Asiakas::showSaldo()
{
    cout<<"Pankkitilin saldo on "<<kayttotili.getBalance()<<endl;
    cout<<"Luottotilin saldo on "<<luottotili.getBalance()<<endl;
}

bool Asiakas::talletus(double talletus)
{
    if(talletus <= 0) //talletus ei voi olla suurempi kuin 0
    {
        return false;
    }

    kayttotili.deposit(talletus);
    cout<<"Talletettu summa "<<talletus<<endl;
    return true;
}

bool Asiakas::nosto(double nosto)
{
    if(nosto <= 0)
    {
        return false;
    }

    kayttotili.withdraw(nosto);
    cout<<"Nostettu summa "<<nosto<<endl;
    return true;
}

bool Asiakas::luotonNosto(double nosto)
{
    if(nosto <= 0)
    {
        return false;
    }

    luottotili.withdraw(nosto);
    cout<<"Nostettu summa "<<nosto<<endl;
    return true;
}

bool Asiakas::luotonMaksu(double maksu)
{
    if(maksu <= 0)
    {
        return false;
    }

    luottotili.deposit(maksu);
    cout<<"Maksettu summa "<<maksu<<endl;
    return true;
}

bool Asiakas::tilisiirto(double siirtosumma, Asiakas& vastOt)
{
    if(siirtosumma <= 0)
    {
        cout<<"Siirtoa ei voi tehda"<<endl;
        return false;
    }

    if(kayttotili.withdraw(siirtosumma) == false)
    {
        cout<<"Siirtoa ei voi tehda, saldoa ei ole tarpeeksi"<<endl;
    }

    vastOt.kayttotili.deposit(siirtosumma);
    return true;

}
