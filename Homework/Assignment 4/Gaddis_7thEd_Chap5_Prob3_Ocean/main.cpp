/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose:Gaddis 7thEd Chap5 Prob3 Ocean Levels
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
  
   //Outputs
   int  year=0,                   //Ocean's Level Calculated per Year     
        a= 0,                    //Counter Starts at Zero
   levRis;
   //Ocean Level Entry
   cout<<"Ocean Level Rises 1.5 mm    1 Year Increment"<<endl;
   cout<<"________________________    ________________"<<endl;
  
 //Calculations & Loops
   
    //For Loop Incrementing 1.5 mm Every Year
    for (int year=1; year <= 25; year++) {
     float levRis= 1.5;
    levRis*=year;
    a++;
    cout<<levRis<<endl;
     if(year<26){
     cout<<   "\t                          \year"<<year<<endl;
     }
        }
 return 0;
}