/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Chap6 Prob9 Present Value
*/

//System Library
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes
int present (int,int,int);
//Execution Begins Here!
int main(int argc, char** argv){
    
    //Declare Variables & Initialize Entries
    //Input
    float presVal, futVal, annRate, numYear;
     cout<<setprecision(2)<<fixed;
    cout<<"How Much You Want in Account?";
    cin>>futVal;
    cout<<"What is the Annual Interest Rate?";
    cin>>annRate;
    cout<<"Number of Years $ Sits in Account?";
    cin>>numYear;
    
    presVal=present(futVal,annRate,numYear);
    cout<<"Amount You Need To Deposit Is: ($) "<<presVal<<endl;
    return 0;
}
int present (int fut ,int rate,int years)
{
    return fut/pow(1+rate,years);
}

