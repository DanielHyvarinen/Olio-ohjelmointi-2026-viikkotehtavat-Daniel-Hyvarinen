#include "game.h"
using namespace std;

Game::Game()
{
    srand(time(0));
    numOfGuesses = 0;
    maxNumber = 20;
    randomNumber = rand() % maxNumber;
    cout<<"Peli alkaa constructorissa"<<endl;
}

Game::play()
{
    // cout<<"Anna luku johon asti luku arvotaan: "<<endl;
    // cin>>maxNumber;
    // cout<<"Arvotaan lukuun "<<maxNumber<<endl;
    cout<<"Arvaa luku"<<endl;
    cin>>playerGuess;
    while(playerGuess != randomNumber)
    {
        if(playerGuess < randomNumber)
        {
            cout<<"Liian pieni"<<endl;
            numOfGuesses++;
            cin>>playerGuess;
        }

        if(playerGuess > randomNumber)
        {
            cout<<"Liian suuri"<<endl;
            numOfGuesses++;
            cin>>playerGuess;
        }

        if(playerGuess == randomNumber)
        {
            numOfGuesses++;
            //return numOfGuesses;
            printGameResult();

        }
    }
    return numOfGuesses;
}

void Game::printGameResult()
{
    cout<<"Numero oli "<<randomNumber<<endl;
    cout<<"Arvausten maara oli "<<numOfGuesses<<endl;
}

Game::~Game()
{
    cout<<"Peli tuhottiin destructorissa"<<endl;
}
