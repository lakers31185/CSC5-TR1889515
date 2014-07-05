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
    float mass;
        
    //Outputs
   float weigh;
    
    //Enter Mass of Object to be Calculated
    cout<<"Enter Objects Mass: ";
    cin>>mass;
    
//Calculations 

    //Calculate using Newton Formula & Display
    weigh= mass*9.8e-1f;
    cout<<"Calculated Weight= " <<weigh<<endl;
    
//Validate Outputs
    
    //Set Ranges $ Validate Expressions
    if (weigh < 10) 
       cout<<"Object Too Light";
    else if (weigh > 1000)
          cout<<"Object Too Heavy ";
    else if (weigh >= 10 < 1000)
        cout<<"Wait is Normal";            
  
//Exit stage right!   
    return 0;
} 

 
 


 
   
