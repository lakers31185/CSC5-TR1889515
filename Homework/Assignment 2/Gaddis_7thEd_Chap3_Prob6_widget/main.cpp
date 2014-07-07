/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap3 Prob6 Widgets
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


//Declare variables


    //Inputs
   const float widget=9.2;   //Weight of Each Widget (lbs.)
   unsigned short pallet,    //Weight of Pallet ONLY
                  intWei;    //Demand of User for Calculations of widgets (lbs.) 
   //Outputs
   float totWei=0;            //Total Number of Widgets on Pallet
   
   //Enter Weight of Pallet ONLY
   cout<<"Enter Weight of Pallet ONLY (lbs.) " ;
   cin>>pallet;
   
   //Enter Weight of Entire Pallet
   cout<<"Enter Weight of Entire Pallet (lbs.) " ;
   cin>>intWei;
   
//Calculations
   
   //Calculation for Entire Pallet
   totWei=(intWei-pallet)/widget;
   
//Display Outputs of the Total Amount of Widgets
   cout<<fixed<<setprecision(0);
   cout<<"Total Amount of Widgets= " <<totWei<<endl;
   
//Exit stage right!   
    return 0;
}

   
   