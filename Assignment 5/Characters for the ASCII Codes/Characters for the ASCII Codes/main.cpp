//
//  main.cpp
//  Characters for the ASCII Codes
//
//  Albert George
//  November 10, 2016
//  The program compiled and ran successfully on MacOSX El Capitan, Xcode.
//  This program creates a list of characters from ASCII codes 32 to 127 in rows of 16.

#include <iostream>

using namespace std;
int main()
{
    char Alpha=32;
    int count = 1;
    while(count>=1 && count<=95)
    {
        while (count>=1 && count<=16)
        {
            if (count==16)
            {
                cout<< Alpha++<< " " << endl;
                count++;
            }
            else
            {
            cout<< Alpha++<<" " << flush;
            count++;
            }
        }
        while (count>=17 && count<=32)
        {
            if (count==32)
            {
                cout<< Alpha++<< " " << endl;
                count++;
            }
            else
            {
              cout << Alpha++ << " " << flush;
              count++;
            }
        }
        while (count>=33 && count <=48)
        {
            if (count==48)
            {
                cout<< Alpha++<< " " << endl;
                count++;
            }
            else
            {
            cout << Alpha++ <<" " << flush;
            count++;
            }
        }
        while (count >= 49 && count <=64)
        {
            if (count==64)
            {
                cout<< Alpha++<< " " << endl;
                count++;
            }
            else
            {
            cout << Alpha++ <<" "<< flush;
            count++;
            }
        }
        while (count >= 65 && count <=80)
        {
            if (count==80)
            {
                cout<< Alpha++<< " " << endl;
                count++;
            }
            else
            {
            cout << Alpha++<<" " << flush;
            count++;
            }
        }
        while (count >= 81 && count <96)
        {
            if (count==95)
            {
                cout<< Alpha++<< " " << endl;
                count++;
            }
            else
            {
            cout << Alpha++<<" " << flush;
            count++;
            }
        }
        
    }
    return 0;
}
