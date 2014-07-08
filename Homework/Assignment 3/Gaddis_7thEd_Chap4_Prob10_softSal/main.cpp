/*
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap4 Prob9 Math Tutor
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;


//User Libraries


//Global Constants


//Function Prototypes


//Execution Starts Here!
int main(int argc, char** argv) {

//Declare variables & Initialize Entries

    //Inputs
    float   numUni;             //Enter Number of Units Sold
      
    //Outputs
    float     totPur=0,         //$99.00 per Unit (Purchase Amount):
             totPur1=0,         //%20 on (10 - 19 Units Sold) 
            totPur2=0,          //%30 on (20- 49 Units Sold) 
            totPur3=0,          //%40 on (50 - 99 Units Sold) 
            totPur4=0;          //%50 on 100+ Units Sold
    
    //Enter Number of Units Sold
    cout<<"Enter Units Sold must be Greater than Zero= ";
    cin>>numUni;

//Calculations
    
    //Calculate Total Purchase
    totPur= (numUni*99);
    
    //Calculate Total Purchase + Discount Formula
   totPur1= (totPur)+(numUni*99*.2); 
   totPur2= (totPur)+(numUni*99*.3);
   totPur3= (totPur)+(numUni*99*.4);
   totPur4= (totPur)+(numUni*99*.5);
   
//Set Ranges & Validate Expressions
  
   //Set Ranges for (%20, %30, %40 and %50) & Display Outputs
   cout<<setprecision(2)<<fixed<<endl;
   //(numUni > 0)
    if (numUni < 10)
       cout<<"No Discount";
   else if (numUni == 10 || numUni < 19)
       cout<<"Total Purchase Amount Including %20 Discount= "<<totPur1;
 
   else if (numUni == 20 || numUni < 49)
       cout<<"Total Purchase Amount Including %30 Discount= "<<totPur2;
   else if (numUni == 50 || numUni < 99)
       cout<<"Total Purchase Amount Including %40 Discount= "<<totPur3;
   else if (numUni >= 100)
       cout<<"Total Purchase Amount Including %50 Discount= "<<totPur4;
   
//Exit stage right
    return 0;
}

  
 
       
                   
        

