/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Prob7_ocLvls
 */

//System Library
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv){
    
    //Declare and initialize variables
    float risLvl= 1.5; //Rise of Ocean in One Year (ml)
    float  oneYr, fivYrs, sevYrs, tenYrs; //Declared Variables for Years
    
    //Calculate Year One Ocean Level (ml)
    oneYr=risLvl*(1);
    //Calculate Five Level After (ml)
    fivYrs=risLvl*5;
    //Calculate Seven Years After Five (ml)
    sevYrs=(risLvl*7)+fivYrs;
    //Calculate Ten Years After Seven (ml)
    tenYrs=(risLvl*10)+sevYrs;
    
    //Output the Results
    cout<<"Rise Level 1 Year= " <<oneYr<<endl;
    cout<<"Rise Level 5 Years After= " <<fivYrs<<endl;
    cout<<"Rise Level 7 Years After= " <<sevYrs<<endl;
    cout<<"Rise Level 10 Years After= " <<tenYrs<<endl;
    
    //Exit stage right!   
    return 0;
}

    