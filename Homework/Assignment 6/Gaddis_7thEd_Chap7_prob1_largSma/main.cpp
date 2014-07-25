/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Chap7 Prob1 Large/Small
 */

//System Library
#include <iostream>
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    int values[ 10 ];    //Declares array and how many elements
    int small,big;      //Declares Biggest & Smallest Integer
  

    //Counts to 10 and prompts user for value and stores it
    for ( int i = 0; i < 10; i++ ) 
    {
        cout << "Enter value " << i << ": ";
        cin >> values[i];
    }
        //Assign Element to be Biggest or Smallest
        big=small=values[0]; 
    
    //For-Loop for Biggest Number
    for (int i = 0; i < 10; i++) 
    {
        //Compares Biggest Value with Current Element
        if(values[i]>big)
        {
           big=values[i];
        }
    }
    //For-Loop for Smallest Number
    for (int i = 0; i < 10; i++) 
    {
        //Compares Small Value with Current Element
        if(values[i]<small) 
        {
           small=values[i];
        }
    }
    //Print Output of Biggest & Smallest Value
    cout << "The Biggest Value is " << big << endl;
    cout << "The Smallest Value is " << small << endl; 
return 0;
}


