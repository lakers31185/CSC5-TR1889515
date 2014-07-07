/* 
* File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Chap3 Prob3 tesAvg
 */

//System Library
#include <iostream>
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv){

//Declare and Initialize Variables
    
    //Inputs
    int short test1, test2, test3, test4, test5;
    
    //Outputs
    int short average=0;
   
    //Enter the Test Scores
    cout<<setprecision(1)<<fixed<<endl;
    cout<<fixed<<endl;
    cout<<"Enter Test 1 Score= ";
    cin>>test1;
    cout<<"Enter Test 2 Score= ";
    cin>>test2;
    cout<<"Enter Test 3 Score= ";
    cin>>test3;
    cout<<"Enter Test 4 Score= ";
    cin>>test4;
    cout<<"Enter Test 5 Score= ";
    cin>>test5;

//Calculations   
    
    //Calculate the Average
    average = (test1+test2+test3+test4+test5) / 5.0;
    
//Display Output of the Average
    cout<<setprecision(1)<<fixed<<endl;
    cout<<fixed<<endl;  
    cout<<"The Average Score Is= " <<average<<endl;
    
     //Exit stage right!   
    return 0;
}


    