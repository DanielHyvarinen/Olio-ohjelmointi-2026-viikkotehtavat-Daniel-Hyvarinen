#include <iostream>

using namespace std;

class Kirja
{
public:

    Kirja(string nimi, string tekija, int sivumaara);
    void tulostaTiedot();

private:
    string nimi;
    string tekija;
    int sivumaara;
};

Kirja::Kirja(string n, string t, int s)
{
    nimi = n;
    tekija = t;
    sivumaara = s;
}

void Kirja::tulostaTiedot()
{
    cout<<"Kirjan nimi on "<<nimi<<endl;
    cout<<"Kirjan tekija on "<<tekija<<endl;
    cout<<"Kirjan sivumaara on "<<sivumaara<<endl;
}


int main()
{
    Kirja olio("Aapinen", "Linna", 313);
    olio.tulostaTiedot();
    return 0;
}
