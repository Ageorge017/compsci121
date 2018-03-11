//
//  main.cpp
//  Using Files—Total and Average Rainfall
//  Albert George
//  November 10, 2016
//  The program compiled and ran successfully on MacOSX El Capitan, Xcode.
//  This program opens a text file "Rainfal.txt" and reads the file. It then calculates the average rainfall over the months of April-August.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    string startMonth, endMonth;
    double RainAmount,
           totalRain = 0,
           Average;
    
    int numberVal=0;
    
    ifstream dataIn;
    dataIn.open ("Rainfall.txt");  //changed the scheme to locate the file in the specific folder.
    
    dataIn >> startMonth;
    dataIn >> endMonth;
    
    while (dataIn>>RainAmount)
    {
        totalRain+=RainAmount;
        numberVal++;
    }
    Average=totalRain/numberVal;
    cout << "During the months of "<< startMonth<<"-"<< endMonth<<endl;
    cout<< "the total rainfall was " << Average<< " inches" <<endl;
    
    dataIn.close();
    return 0;
}
