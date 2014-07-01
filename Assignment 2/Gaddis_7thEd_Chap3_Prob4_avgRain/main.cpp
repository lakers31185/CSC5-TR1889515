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
    string mnth1;
    string mnth2;
    string mnth3;
    float avgRn;
    
    //Input a Month
    cout<<"Enter 1st Month to be Calculated ";
    cin>>mnth1;
    cout<<"Enter 2nd Month to be Calculated ";
    cin>>mnth2;
    cout<<"Enter 3rd Month to be Calculated ";
    cin>>mnth3;
    cout<<""<<mnth1<<mnth2<<mnth3<<endl;
    
    //Input Each Months Average
    //Output the Average
    
    avgRn = (mnth1+mnth2+mnth3)/3.0;
    cout<<"The Average Rainfall for= " <<avgRn<<endl;
    
   
       //Exit stage right!   
    return 0;
}


    
    