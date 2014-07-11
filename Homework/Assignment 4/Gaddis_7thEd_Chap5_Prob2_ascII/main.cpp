/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose:Gaddis 7thEd Chap5 Prob ASCII
 */

//System Libraries
#include <iostream>

using namespace std;


//User Libraries


//Global Constants


//Function Prototypes


//Execution Starts Here!
int main(int argc, char** argv) {

    //Write Program to Show ASCII Codes 1 - 127
    
    //For-Loop Changing Number to ASCII
    for(unsigned char num=0;num<=127;num++){
        //Display ASCII Code
        cout<<num;
            //Display Output of 16 Characters Per Line
            if (num%16==15)cout<<endl;
    }
    //Exit Stage Right!
    return 0; 
    }
