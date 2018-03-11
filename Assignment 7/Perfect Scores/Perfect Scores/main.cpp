//
//  main.cpp
//  Perfect Scores
//  Albert George
//  December,8 2016
//  The program compiled and ran successfully on MacOSX El Capitan, Xcode.
//  This program asks the user to input 20 or less scores and it will tell you how many perfect scores of 100 you have.


#include <iostream>
using namespace std;

int countPerfect(int perfectCount)
{
    perfectCount++;
    return perfectCount;
}
int main()
{
    double score[20];
    int count=0;
    
    cout << "Enter a score 0 - 100 (or -1 to quit) "<<endl;
    for (double num : score)
    {
        cin >> num;
        if (num == -1)
        {
            break;
        }
        else if (num == 100)
        {
           count= countPerfect(count);
        }
    }
    cout<< "The scores you have entered include " << count << " perfect scores "<<endl;
    
}
