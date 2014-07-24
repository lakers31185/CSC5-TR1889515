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
void disp(float &fut, float &ann, float &num);
float present (float,float,float);
//Execution Begins Here!
int main(int argc, char** argv){
    
    //Declare Variables
    //Input
    float presVal,              //Amount You Need To Deposit
         futVal=0,              //What you want in Account?
        annRate=0,              //Annual Interest Rate
        numYear=0;              //Sit on Money (Years)
    
    //Set Precision For Dollar Amount
    cout<<setprecision(2)<<fixed;
    
    //Call Reference Function For Rate, Future Value, # Years
    disp(futVal,annRate,numYear);
    
    //Call Function Deposit Amount
    presVal=present(futVal,annRate,numYear);
    //Display Function Output of Deposit Amount
    cout<<"Amount You Need To Deposit Is: ($) "<<presVal<<endl;
    return 0;
}
//Reference Function For Future Value, Annual Rate, # Years Sitting
//fut= Future Value ann= Annual Rate num= Sitting Years
void disp(float &fut, float &ann, float &num)
{
   cout<<"How Much You Want in Account?";
    cin>>fut;
    cout<<"What is the Annual Interest Rate?";
    cin>>ann;
    cout<<"Number of Years $ Sits in Account?";
    cin>>num;
}
//Function For Deposit Amount 
//Formula Equates Future Value
float present (float fut ,float rate,float years)
{
    //Return Future Value Formula
    return fut/pow(1+rate,years);
}

