/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap3 Prob8 How Much Insurance
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
   
    float insPer= 80.0e-2f;      //Percentage of Reconstruction Cost
    int repCost;                //Reconstruction Amount ($)
    
    //Outputs
    float totIns=0;             //Minimum Amount of Insurance Needed ($))
    
    //Enter Cost for Reconstruction ($)
    cout<<"How Much Will You Pay for Reconstruction Cost ($) ";
    cin>>repCost;
    
//Calculations
    
    //Calculate Amount of Reconstruction
    totIns=insPer*repCost;
    
    //Display Minimum Amount of Coverage Needed
    cout<<fixed<<setprecision(2);
    cout<<"Minimum Amount of Insurance That Should be Bought ($) " <<totIns<<endl;
    
   //Exit stage right!   
    return 0;
}
