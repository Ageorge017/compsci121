//
//  main.cpp
//  Random Number Guessing Game Enhancement
//
//  Albert George
//  November 10, 2016
//  The program compiled and ran successfully on MacOSX El Capitan, Xcode.
//  This program generates a random number and prompts the user to guess the number, until they get it right and will display how many guesses the user took.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    
        
    srand(int (time(0)));
    int guess, count=1, number = rand() % 100 +1;
    
    cout<<"Guess the number between 1 and 100." << endl;
    while (number >=1 && number <=100)
    {
        cin >> guess;
        if (guess>number)
        {
            cout<<"Too high. Try again."<< endl;
            cout << "Guess the number"<<endl;
            count++;
        }
        else if (guess<number)
        {
            cout<< "Too low. Try again"<<endl;
            cout << "Guess the number"<<endl;
            count++;
        }
        else if (guess==number)
        {
            cout<<"Congratulations. You figured out my number."<< endl;
            cout<< "You took " << count << " guesses."<<endl;
            break;
        }
    }
}
