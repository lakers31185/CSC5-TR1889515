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
   unsigned short  boilCel= 0,
                   frezCel= 100,
                   boilFah= 212,
                   frezFah= 32,
                   celsius;
    //Outputs
    unsigned short fahr=0;
 
//Enter Celsius Temperate to be Converted
    cout<<"Enter Celsius Temp. to be Converted: ";
    cin>>celsius;
    
//Calculations
    
    //COnvert Celsius to Fahrenheit
    fahr= frezFah+(boilFah-frezFah/frezCel-boilCel)*(celsius-frezCel);
    
//Display Outputs
    
    //Display Conversion to Fahrenheit
    cout<<"Fahrenheit= " <<fahr<<endl;
    
    
//Exit Stage Right
    return 0;
}

 
 


