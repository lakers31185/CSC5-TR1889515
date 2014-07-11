/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap3 Prob10 Celsius Fahrenheit
 */


//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;


//User Libraries




//Global Constants




//Function Prototypes




//Execution Starts Here!
int main(int argc, char** argv){


//Declare variables & Initialize Entries


    //Inputs
   unsigned short  boilCel= 0,          //Celsius Boiling Point
                   frezCel= 100,        //Celsius Freezing Point
                   boilFah= 212,        //Boiling Point Fahrenheit
                   frezFah= 32,         //Freezing Point Point
                   celsius;
    //Outputs
    unsigned short fahr=0;
 
//Enter Celsius Temperate to be Converted
    cout<<"Enter Celsius Temp. to be Converted: ";
    cin>>celsius;
    
//Calculations
    
    //COnvert Celsius to Fahrenheit
    fahr= (1.8*celsius)+32;
    
//Display Outputs
    
    //Display Conversion to Fahrenheit
    cout<<"Fahrenheit= " <<fahr<<endl;
    
    
//Exit Stage Right
    return 0;
}


