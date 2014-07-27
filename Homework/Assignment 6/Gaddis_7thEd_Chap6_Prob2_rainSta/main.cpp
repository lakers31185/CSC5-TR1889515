/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Chap7 Prob2 Rainfall Statistics
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
   //Declare Array Size
    const int SIZE =12; 
    int value [SIZE];
    int sum=0;
    
   
    //For Loop of Total of Elements in Array
    for (int i=0; i<SIZE; i++)
    {
        cout<<"Enter 12 Months"<<i<<":";
        cin>>value[SIZE];
        sum+=value[SIZE];
    }
    cout <<"The Total Rainfall Is: "<<sum<<endl;
   
    return 0;
}
