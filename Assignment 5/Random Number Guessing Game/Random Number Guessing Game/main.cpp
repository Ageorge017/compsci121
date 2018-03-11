//
//  main.cpp
//  Random Number Guessing Game
//  Albert George
//  November 10, 2016
//  The program compiled and ran successfully on MacOSX El Capitan, Xcode.
//  This program generates a random number and prompts the user to guess the number, until they get it right.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    srand(int (time(0)));
   int guess, number = rand() % 100 +1;

    cout<<"Guess the number" << endl;
    while (number >=1 && number <=100)
    {
        cin >> guess;
        if (guess>number)
        {
            cout<<"Too high. Try again."<< endl;
            cout << "Guess the number"<<endl;
        }
        else if (guess<number)
        {
            cout<< "Too low. Try again"<<endl;
            cout << "Guess the number"<<endl;
        }
        else if (guess==number)
        {
            cout<< "Congratulations. You figured out my number."<< endl;
            break;
        }
    }
    return 0;
}
