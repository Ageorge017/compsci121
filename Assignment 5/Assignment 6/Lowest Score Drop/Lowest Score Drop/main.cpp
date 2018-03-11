//
//  main.cpp
//  Lowest Score Drop
//  Albert George
//  November 21, 2016
//  The program compiled and ran successfully on MacOSX El Capitan, Xcode.
//  This program asks the user to input five test scores and averages the highest test scores while displaying the average and the lowest dropped score.
#include <iostream>
using namespace std;

void getScore(int &score);
void calcAverage(double &HighestAverage);
int findLowest(int lowest);

int score1 = 0, score2 = 0, score3 = 0, score4 = 0,score5=0;
double average;

int main()
{
    int count=1;
        for(count=1; count<=5; count++)
    {
    if (count==1)
    {
        getScore(score1);
    }
    if (count==2)
    {
        getScore(score2);
    }
    if (count==3)
    {
        getScore(score3);
    }
    if (count==4)
    {
        getScore(score4);
    }
    if (count==5)
    {
        getScore(score5);
    }
    }
    calcAverage(average);
    cout << "The average of the highest scores is "<<average<< endl;

}


void getScore(int &score)
{
    cout<< "Enter a test score"<<endl;
    cin>> score;
    if (score<1 || score>100)
    {
        cout << "Score is not valid. Enter a valid score" <<endl;
        cin >>score;
    }
    
}

void calcAverage(double &HighestAverage)
{
    if(score1<score2 && score1<score3 && score1<score4 && score1 <score5)
    {
        HighestAverage =(score2+score3+score4+score5)/4;
        findLowest(score1);
    }
    else if(score2<score1 && score2<score3 && score2<score4 && score2 <score5)
    {
        HighestAverage =(score1+score3+score4+score5)/4;
        findLowest(score2);
    }
    else if(score3<score1 && score3<score2 && score3<score4 && score3 <score5)
    {
        HighestAverage =(score2+score1+score4+score5)/4;
        findLowest(score3);
    }
    else if(score4<score2 && score4<score3 && score4<score1 && score4 <score5)
    {
        HighestAverage =(score2+score3+score1+score5)/4;
        findLowest(score4);
    }
    else if(score5<score2 && score5<score3 && score5<score4 && score5<score1)
    {
        HighestAverage =(score2+score3+score4+score1)/4;
        findLowest(score5);
    }
}
int findLowest(int lowest)
{
    cout << "The lowest score to be dropped is " << lowest <<endl;
    return 0;
}

