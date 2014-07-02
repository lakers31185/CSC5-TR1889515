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

    //Inputs
    const char mSIZE=10;//Includes the null terminator
    char mnth1[mSIZE], mnth2[mSIZE], mnth3[mSIZE];  //Months to be Calculated
    float totRn1, totRn2, totRn3; //Total Rainfall for Each Month
    
    //Outputs
    float avgRn=0;                //Average Total Rainfall
    
    //Input a Month
    cout<<"Enter 1st Month to be Calculated ";
    cin>>mnth1;
    cout<<"Enter 2nd Month to be Calculated ";
    cin>>mnth2;
    cout<<"Enter 3rd Month to be Calculated ";
    cin>>mnth3;
    cout<<""<<mnth1<<mnth2<<mnth3<<endl;
    
    //Input Each Months Average
    cout<<"Enter 1st Months Total Rainfall ";
    cin>>totRn1;
    cout<<"Enter 1st Months Total Rainfall ";
    cin>>totRn2;
    cout<<"Enter 1st Months Rainfall ";
    cin>>totRn3;
    
    //Calculate the Average
    avgRn = (totRn1+totRn2+totRn3)/3.0;
    
    //Display the Average
    cout<<fixed<<setprecision(2);
    cout<<"Month1:    "<<mnth1<<endl;
    cout<<"Month2:    "<<mnth2<<endl;
    cout<<"Month3:    "<<mnth3<<endl;                                                                                                      
    cout<<"The Average Rainfall for All 3 Months= " <<avgRn<<endl;
    
   //Exit stage right!   
    return 0;
}
