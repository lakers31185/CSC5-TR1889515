/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap4 Prob2 Roman N
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
    char romNum;
    
    //Enter a Number From 1 to 10
    cout<<"Enter a Number From 1 to 10:";
    cin>>romNum;
    
//Switch Inputs & Display
    switch (romNum)
    {
        case '1': cout<<"You Entered I:";
        break;
        case '2': cout<<"You Entered II";
        break;
        case '3': cout<<"You Entered III";
        break;
        case '4': cout<<"You Entered IV";
        break;
        case '5': cout<<"You Entered V";
        break;
        case '6': cout<<"You Entered VI";
        break;
        case '7': cout<<"You Entered VII";
        break;
        case '8': cout<<"You Entered VIII";
        break;
        case '9': cout<<"You Entered IX";
        break;
        case '10': cout<<"You Entered X";
        break;
        default: cout<<"You Didn't Enter a Number From 1 to 10";
     }        
      //Exit stage right!   
    return 0;
}


    