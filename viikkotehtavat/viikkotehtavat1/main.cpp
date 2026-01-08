#include <iostream> //sisällytetään vaaditut kirjastot
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum) //funktiossa parametrina maxnum, jonka mukaan arvotaan numero annetulle välille
{
    srand(time(0));
    int guesses = 0; //arvausten määrä alustetaan nollaksi
    int randomNumber = rand() % maxnum + 1; //arvotaan numero
    int givenNumber;
    cin>>givenNumber; //käyttäjän antama numero

    while(givenNumber != randomNumber) //jos annettu numero on erisuuri kun arvottu numero
    {
        if(givenNumber < randomNumber) //jos pienempi kuin
        {
            cout<<"Liian pieni"<<endl;
            guesses++; //nostetaan arvausten määrää yhdellä
            cin>>givenNumber;
        }

        if(givenNumber > randomNumber)
        {
            cout<<"Liian suuri"<<endl; //jos suurempi kuin
            guesses++;
            cin>>givenNumber;
        }

        if(givenNumber == randomNumber) //jos arvottu on oikein
        {
            cout<<"Oikein"<<endl;
            guesses++;
            return guesses; //palautetaan arvausten määrä mainiin
        }
    }
}

int main()
{
    cout<<game(40); //annetaan luku 40, joten arvottu luku on välillä 0 - 40 ja cout tulostaa arvausten määrän
}
