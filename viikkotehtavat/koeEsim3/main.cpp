#include <iostream>

using namespace std;


class Moottori
{
public:
    void kaynnista();
};


class Auto
{
public:
    Auto();

private:
    Moottori etumoottori;
    Moottori * takamoottori;
};


Auto::Auto()
{
    etumoottori.kaynnista();
    takamoottori = new Moottori;
    takamoottori->kaynnista();
    delete takamoottori;
    takamoottori = nullptr;
}


void Moottori::kaynnista()
{
    cout<<"moottori kaynnissa"<<endl;
}


int main()
{
    Auto kaara;
    return 0;
}
