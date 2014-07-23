/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap6 Prob7 Falling Distance
 */


//System Libraries
#include <iostream>
#include<cstdlib>
#include <iomanip>
using namespace std;

//User Libraries


//Global Constants
const float GRAV= 9.8f;

//Function Prototypes
float fallDis(float);

int main(int argc, char** argv){
    //Declare Variables
    //Inputs
    float time,total=0;
    cout<<"Enter A Time (in Seconds) for Falling Distance Calculation";
    cin>>time;
    for (int arg=1;arg<=10;arg++)
    {
        total=fallDis(time);
        total/=arg;
        cout<<"Your Falling Distance Is: "<<total<<endl;
    }
    return 0;
}
float fallDis(float time)
{
 
return .5f*GRAV*time*time;
   
}
