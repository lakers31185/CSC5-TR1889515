/*
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap4 Prob9 Math Tutor
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;


//User Libraries


//Global Constants


//Function Prototypes


//Execution Starts Here!
int main(int argc, char** argv) {

//Declare variables & Initialize Entries

    //Inputs
    int sum1,
        sum2,
       numSum;
    
    //Outputs
    int totSum=0;
    
    //Enter First Number to be Added
    cout<<"Enter the First Number to be Added ";
    cin>>sum1;
    
    //Enter Second Number to be Added
    cout<<"Enter the First Number to be Added ";
    cin>>sum2;
    
    //Enter Your Answer for Total 
    cout<<"What is the Sum of the 2 numbers? ";
    cin>>numSum;
    
//Calculations
    
    //Calculate the Sum of Both Numbers Entered
    totSum= sum1+sum2;
    
//Validate Expressions & Display Outputs
    
    //Validate if Total of Numbers is Correct or Wrong
    cout<<"Answer: "<<totSum<<endl;
    if (totSum == numSum)
        cout<<"Correct Human!";
    else if (totSum > numSum) 
        cout<<"Sorry You Are Not Correct ";
    else if (totSum < numSum) 
        cout<<"Sorry You Are Not Correct ";
      
    //Exit stage right
    return 0;
}

   