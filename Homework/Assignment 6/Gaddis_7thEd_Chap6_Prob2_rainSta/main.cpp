/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Chap7 Prob2 Rainfall Statistics
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
     int values[ 12 ];    //Declares array and how many elements
      int small,big,total=0,aver;      //Declares Biggest & Smallest Integer
      
      //Counts to 12 and prompts user for value and stores it
    
      for ( int i = 0; i < 12; i++ ) 
    {
        cout << "Enter value " << i << ": ";
        cin >> values[i];
    }
        //Assign Element to be Biggest or Smallest
        big=small=values[0]; 
     //For-Loop for Biggest Number
    for (int i = 0; i < 12; i++) 
    {
        //Compares Biggest Value with Current Element
        if(values[i]>big)
        {
           big=values[i];
        }
    }
    //For-Loop for Smallest Number
    for (int i = 0; i < 12; i++) 
    {
        //Compares Small Value with Current Element
        if(values[i]<small) 
        {
           small=values[i];
        }
    }    
    for (int i=0;i<12;i++ )
    {
        total+=values[i];
    }
    for (int i=0;i<12;i++ )
    {
        total+=values[i];
        aver=total/12;
        
    }
     //Print Output of Biggest & Smallest Value
    cout << "The Biggest Value is " << big << endl;
    cout << "The Smallest Value is " << small << endl; 
    cout << "The Total Value is " << total << endl;
    cout << "The Average Value is " << aver << endl;       
    return 0;
}
