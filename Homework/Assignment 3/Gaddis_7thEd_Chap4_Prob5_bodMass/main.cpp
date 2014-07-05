/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 3 2014
 * Purpose: Gaddis 7thEd Chap4 Prob5 Body Mass Index
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
    float weigh,     //Enter Weight in Inches (in.)
          heigh;     //Enter Height in Pounds (lbs.)  
           
    //Outputs
    float bMi=0;
    
    //Enter Weight and Height
    cout<<"Enter Your Height: (in.) ";
    cin>>heigh;
    cout << "Enter Your Weight: (lbs.) ";
    cin>>weigh;
    
//Calculations
    
    //Calculate Body Mass Index
    bMi= (weigh*703)/(heigh*heigh);   
//Validate Outputs
     
    //Validate BMI
    if (bMi < 18.5)
        cout<<"You Are Underweight";
    else if (bMi > 25)
        cout<<"You Are Overweight";
    else if (bMi >= 18.5 < 25)
        cout<<"Your Are Optimal Weight";
    
        
    
    //Exit stage right!   
    return 0;
}