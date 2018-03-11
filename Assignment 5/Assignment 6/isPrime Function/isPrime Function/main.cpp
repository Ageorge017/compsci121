//
//  main.cpp
//  isPrime Function
//  Albert George
//  November 21, 2016
//  The program compiled and ran successfully on MacOSX El Capitan, Xcode.
//  This program asks the user to input an integer and it will determine if the number is prime or not.


#include <iostream>
using namespace std;

bool Prime(int NUM);

int main()
{
    int number;
    
    
    cout << "Enter a positive integer and I will tell you if it is a prime number:" << endl;
    cin >> number;
    
    if (number == 0 || number ==1)
    {
    cout << "This number is neither prime or composite" << endl;
    return 0;
    }
    
    Prime(number);
   
    if (Prime(number))
        cout << "This is a prime number" << endl;
    else
        cout << "This is not a prime number" <<endl;
}

bool Prime (int NUM)
{
    int count;
    bool isPrime = true;
for(count = 2; count <= NUM / 2; ++count)
{
    if(NUM % count == 0)
    {
        isPrime = false;
        break;
    }
}
    return isPrime;
}



/*Write a Boolean function named isPrime, which takes an integer as an argument and returns true if the argument is a prime number, and false otherwise. Demonstrate the function in a complete program*/
