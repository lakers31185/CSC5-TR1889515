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
    int weigh,
        heigh,
            bmiMin= 18.5,
            bmiMax= 25;
    
    //Outputs
    float bMi=0;
    
    //Enter Weight and Height
    cout<<"Enter Your Height "
    cin>>heigh;
    cout << "Enter Your Weight "
    cin>>weigh;
    
//Calculations
    
    //Calculate Body Mass Index
    bMi= (weigh*703)/(heigh*heigh);   
//Validate Outputs
     
    //Validate BMI
    if (bMi > bmiMin < bmiMax)
        cout<<"Weight is OPtimal";
    else if (bmiMin > bMi)
        cout<<"You Are Underweight";
    else if (bMi > bmiMax)
        cout<<"Your Are Over Weight";
    
        
    
    //Exit stage right!   
    return 0;
}