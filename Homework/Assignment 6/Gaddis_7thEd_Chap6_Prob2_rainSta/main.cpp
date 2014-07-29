/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Chap7 Prob2 Rainfall Statistics
 */

//System Library
#include <iostream>
#include <iomanip>
#include <cstring>
#include<string>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv){
  
    //Declare Array Size (12 Months)
    const int SIZE =12; 
   string months[SIZE]={"JAN","FEB","MAR","APR","MAY","June","July","AUg","Sep"
   "oct","nov","dec"};
       //Declare Variables
    int min,max;        //Find Min / Max 
    int value [SIZE];   //Enter Months Total Rainfall
    int sum=0;          //Initialize Sum to Zero

    //Initialize Min / Max
    max=value[SIZE];
    min=value[SIZE];
    
    //For Loop of Total of Elements in Array
    for (int i=1; i<SIZE; i++)
    {
        //Enter Months total Rainfall
        cout<<"Enter Months Total Rainfall (1-12): "<<":";
        cin>>value[SIZE];
        //Calculate Sum of Total Rainfall
        sum+=value[SIZE];
        
        //Set Parameters For Min / Max
        if (value[SIZE]>max)
        {
            max=value[SIZE];
        }
        else
        {
            min=value[SIZE];
        }
    }
    //Display Outputs 
    cout <<"The Total Rainfall For The Year Is: "<<sum<<endl;
    cout<<"The Average For the Year Is: "<<sum/12<<endl;
    cout <<"The Month  with Minimum Total Rainfall Is: "<<min<<endl;
    cout<<"The Month  with Maximum Total Rainfall Is: "<<max<<endl;
    return 0;
}
