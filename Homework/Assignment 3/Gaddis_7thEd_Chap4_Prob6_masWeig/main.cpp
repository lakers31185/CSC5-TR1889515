/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap4 Prob6 Mass & Weight
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
    float mass;         //Input Mass in Kilograms (kg))
        
    //Outputs
   float weigh;         //Calculated Weight in Newton (N)
    
    //Enter Mass of Object to be Calculated
    cout<<"Enter Objects Mass: ";
    cin>>mass;
    
//Calculations 

    //Calculate using Newton Formula & Display
    weigh= mass*9.8f;
    cout<<"Calculated Weight= " <<weigh<<endl;
    
//Validate Outputs
    
    //Set Ranges $ Validate Expressions
    if (weigh < 1e1f) 
       cout<<"Object Too Light";
    else if (weigh > 10e2f)
          cout<<"Object Too Heavy ";
    else if (weigh >=1e1f < 10e2f)

    //Exit stage right!   
    return 0;
} 

 
 


 
   
