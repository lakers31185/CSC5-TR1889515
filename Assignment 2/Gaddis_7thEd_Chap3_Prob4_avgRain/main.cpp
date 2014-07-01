/* 
* File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Chap3 Prob2 staSeat
 */

//System Library
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv){

    //Declare and Initialize Variables
    char mnth1, mnth2, mnth3;
    float avgRn;
    
    //Input a Month
    cout<<"Enter Months to be Calculated ";
    cin>>mnth1;
    cin>>mnth2;
    cin>>mnth3;
    
    //Output the Average
    
    avgRn = (mnth1+mnth2+mnth3)/3.0;
    cout<<"The Average Rainfall for " <<mnth1<<mnth2<<mnth3<<avgRn<<endl;
    
   
       //Exit stage right!   
    return 0;
}


    
    