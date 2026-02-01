#include "pankkitili.h"
using namespace std;

Pankkitili::Pankkitili(string omistaja)
{
    cout<<"Pankkitili luotu nimella "<<omistaja<<endl;
}

bool Pankkitili::deposit(double talletus)
{
    if(talletus <= 0)
    {
        cout<<"Talletusta ei voi tehda"<<endl;
        return false;
    }
    saldo=saldo+talletus;
    cout<<saldo<<endl;
    return true;
}

bool Pankkitili::withdraw(double nosto)
{
    if(nosto <= 0)
    {
        cout<<"Nostoa ei voi tehda"<<endl;
        return false;
    }

    if(nosto > saldo)
    {
        cout<<"Nostoa ei voi tehda, saldoa ei ole tarpeeksi"<<endl;
        return false;
    }
    saldo=saldo-nosto;
    cout<<saldo<<endl;
    return true;
}

double Pankkitili::getBalance()
{
    return saldo;

}

