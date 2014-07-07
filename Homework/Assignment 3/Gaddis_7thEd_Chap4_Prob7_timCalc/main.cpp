/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap4 Prob6 Mass & Weight
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;


//User Libraries


//Global Constants
const float minCalc= 60/1,
            houCalc= 3600/1,
            dayCalc= 86400/1;

//Function Prototypes


//Execution Starts Here!
int main(int argc, char** argv) {

//Declare variables & Initialize Entries

    //Inputs
    float numSec;
    
    //Outputs
    float min,
          hour, 
          day; 
    
    //Enter a Number of Seconds to be  Calculated
    cout<<"Enter A Number of Seconds: ";
    cin>>numSec;
   
//Calculations
    
    //Calculate Seconds in a Minute
    min= numSec/60;
    hour= numSec/3600;
    day= numSec/86400;
    
//Set Ranges & Validate Expressions
   
    //Set Ranges for Minutes, Hours, Days
    cout<<fixed<<setprecision(2);
    if (numSec >= 60 && numSec < 3600) 
    {   
         cout<<"Number of Minutes= " <<min<<endl;;
    }    
    else
    {
         if (numSec >= 3600 && numSec < 86400)
         {    
             cout<<"Number of Hours= "<<hour;
         }
         else
         {
             if (numSec >= 86400)
            {
                cout<<"Numder of Days= "<<day;
             }
         }
    }   
    //Exit stage right!   
    return 0;
}   

