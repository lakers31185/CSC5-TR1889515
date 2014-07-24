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
void fallTim(float &time);
float fallDis(float);

int main(int argc, char** argv){
    //Declare Variables
    //Inputs
    float time,     //Enter Time in Seconds
       total=0;     //Total Fall Distance
    
    //Call Reference Function For Value of Seconds
    fallTim(time);
    //For Loop 10 times
    for (int arg=1;arg<=10;arg++)
    {
        //Call Function For Falling Distance
        total=fallDis(time);
        //Divide to Display 10 Distances
        total/=arg;
        //Display function Output of Falling Distance (meters)
        cout<<"Your Falling Distance Is: "<<total<<endl;
    }
    return 0;
}
//Reference Function For Seconds of Fall Time
//&time= falling time in seconds
void fallTim(float &time)
{
    cout<<"Enter A Time (in Seconds) for Falling Distance Calculation";
    cin>>time;
}
//Function For Falling Distance
//Formula Equates Falling Distance (meters)
float fallDis(float time)
{
 //Return Falling Disctance Formula
return .5f*GRAV*time*time;
   
}
