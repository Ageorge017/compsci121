//
//  main.cpp
//  Diamond Display
//  Albert George
//  November 10, 2016
//  The program compiled and ran successfully on MacOSX El Capitan, Xcode.
//  This program creates a diamond pattern using nested while loops.
#include <iostream>
using namespace std;

int main()
{
    char plus=43;
    int count=1;
    while (count <=13)
    {
        while (count == 1||count==13)
        {
            cout <<"   "<< plus <<endl;
            count+=2;
        }
        while (count == 3||count==11)
        {
            cout << "  "<<plus<<plus<<plus<<endl;
            count+=2;
        }
        while (count==5||count==9)
        {
            cout <<" "<<plus<<plus<<plus<<plus<<plus<<endl;
            count+=2;
        }
        while (count==7) {
            cout<<plus<<plus<<plus<<plus<<plus<<plus<<plus<<endl;
            count+=2;
        }
    }
}
