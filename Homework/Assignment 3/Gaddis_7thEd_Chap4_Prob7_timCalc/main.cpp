/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap4 Prob7 Time Calc.
  */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;


//User Libraries


//Global Constants
const float minCalc= 60/1,          //Seconds in a Minute
            houCalc= 3600/1,        //Seconds in a Hour       
            dayCalc= 86400/1;       //Seconds in a Day

//Function Prototypes


//Execution Starts Here!
int main(int argc, char** argv) {

//Declare variables & Initialize Entries

    //Inputs
    float numSec;       //Enter A Number of Seconds for Calc. 
    
    //Outputs
    float min,          //Calculation of Minutes in Sec.
          hour,         //Calculation of Hours in Sec.
          day;          //Calculation of Days in Sec. 
    
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
    if (numSec >= minCalc && numSec < houCalc) 
    {   
         cout<<"Number of Minutes= " <<min<<endl;;
    }    
    else
    {
         if (numSec >= houCalc && numSec < dayCalc)
         {    
             cout<<"Number of Hours= "<<hour;
         }
         else
         {
             if (numSec >= dayCalc)
            {
                cout<<"Number of Days= "<<day;
             }
         }
    }   
    //Exit stage right!   
    return 0;
}   

