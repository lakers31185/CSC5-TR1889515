/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap4 Prob3 Magic Date
 */

//System Libraries
#include <iostream>

using namespace std;


//User Libraries


//Global Constants


//Function Prototypes


//Execution Starts Here!
int main(int argc, char** argv) {


//Declare variables & Initialize Entries

    //Inputs
    unsigned short mnth,       //Month for Magic Date Calculations
                   Day,       //Day for Magic Date Calculations
                   Year;       //Year for Magic Date Calculations
    
    //Outputs
    unsigned short intDate=0,     //Product of Month*Day
                   magDate=0;     //Magic Date Formula: Month*Day = Year
 
//Enter Month, Day & Year for Magic Date Calculations
    cout<<"Enter A Month For Magic Date Calculation: ";
    cin>>mnth;
    cout<<"Enter A Day For Magic Date Calculation: ";
    cin>>Day;
    cout<<"Enter A Year For Magic Date Calculation (YY): ";
    cin>>Year;

//Calculations for Magic Date
    
    intDate= mnth*Day;
    magDate= Year;
    
//Validate  Outputs
    
    //Validate if Entries Match Magic Date Formula
    {
        if (intDate == magDate)
            cout<<"Date Is Magic";
        else 
            cout<<"Date Is Not Magic";
    
    }
    //Exit stage right!   
    return 0;
}