/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Chap7 Prob2 Rainfall Statistics
 */

//System Library
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    
    
   //Declare Variables
     int values[ 5 ];    //Declares array and how many elements
     int small,big,total=0;      //Declares Biggest & Smallest Integer
    
       string salsa[5];
      salsa[0]="mild";
      salsa[1]="sweet";
      salsa[2]="zesty";
      salsa[3]="medium";
      salsa[4]="hot";
      
      for(int count=0;count<1;count++)
      for ( int i = 0; i < 1; i++ ) 
      { 
  
        cout << "Enter value " << i << ": "<<salsa[0]<<endl;;
        cin >> values[i];
        cout << "Enter value " << i << ": "<<salsa[1]<<endl;;
        cin >> values[i];
        cout << "Enter value " << i << ": "<<salsa[2]<<endl;;
        cin >> values[i];
        cout << "Enter value " << i << ": "<<salsa[3]<<endl;;
        cin >> values[i];
        cout << "Enter value " << i << ": "<<salsa[4]<<endl;;
        cin >> values[i];
        
        }
      
        //Assign Element to be Biggest or Smallest
        big=small=values[0]; 
     //For-Loop for Biggest Number
    for (int i = 0; i < 1; i++) 
    {
        //Compares Biggest Value with Current Element
        if(values[i]>big)
        {
           big=values[i];
        }
    }
    //For-Loop for Smallest Number
    for (int i = 0; i < 1; i++) 
    {
        //Compares Small Value with Current Element
        if(values[i]<small) 
        {
           small=values[i];
        }
    }    
    for (int i=0;i<1;i++ )
    {
        total+=values[i];
    }
    
     //Print Output of Biggest & Smallest Value
    cout << "The Biggest Value is " << big << endl;
    cout << "The Smallest Value is " << small << endl; 
    cout << "The Total Value is " << total << endl;
      
    return 0;
}
