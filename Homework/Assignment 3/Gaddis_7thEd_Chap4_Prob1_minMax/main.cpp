/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap4 Prob1 Min/Max
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
    unsigned int num1,
                 num2;
    
    //User must Enter First Number
    cout<<"Enter First Number to Find Min/Max: ";
    cin>>num1;
    
     //User Must Enter Second Number
    cout<<"Enter Second Number to Find Min/Max: ";
    cin>>num2;
    
//Validate Inputs
    
    //Validate Min/Max
    
        if (num1>=num2)
        cout<<" First Number Entered Is Larger, Second is Smaller ";
        else 
            cout<<" Second Number Is Max, First is Smaller";

        //Exit stage right!   
    return 0;
}

    