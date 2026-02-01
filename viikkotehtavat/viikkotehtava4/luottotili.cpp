#include "luottotili.h"

//Luottotili perii Pankkitilin, alustetaan Luottotilin konstruktorille Pankkitilin tarvitsemat arvot
Luottotili::Luottotili(string omistaja, double luottoRaja) : Pankkitili(omistaja), luottoRaja(luottoRaja)
{
    cout<<"Luottotili luotu nimella "<<omistaja<<endl;
    cout<<"Luottoraja on "<<luottoRaja<<endl;
}

bool Luottotili::deposit(double talletus)
{
    if(talletus < 0)
    {
        cout<<"Talletusta ei voi tehda"<<endl;
        return false;
    }

    if((saldo + talletus) > 0)
    {
        cout<<"Talletusta ei voi tehda"<<endl;
        return false;
    }


    saldo = saldo + talletus;
    cout<<saldo<<endl;
    return true;
}

bool Luottotili::withdraw(double nosto)
{
    if(nosto <= 0)
    {
        cout<<"Nostoa ei voi tehda"<<endl;
        return false;
    }

    double uusiSaldo = saldo - nosto;

    if(uusiSaldo >= -luottoRaja)
    {
        saldo = uusiSaldo;
        if(saldo > 0)
        {
            saldo = 0;
        }

        cout<<saldo<<endl;
        return true;
    }

    cout<<"Luottoraja on taynna, nostoa ei voi tehda"<<endl;
    return false;
}
