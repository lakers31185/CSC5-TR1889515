/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Prob8 Total Purchase
 */

//System Library
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv){
    
    //Declare and initialize variables
    float itmOne= 12.95; //Price of Item One
    float itmTwo= 24.95; //Price of Item Two
    float itmThr= 6.95; //Price of Item Three
    float itmFor= 14.95; //Price of Item Four
    float itmFiv= 3.95; //Price of Item Five
    float salTax= .06f; //Percentage of Sales Tax
    float subTot, taxTot,salTot; // Declared Variables
    
    //Calculate Subtotal of Purchase
    subTot=itmOne+itmTwo+itmThr+itmFor+itmFiv;
    //Calculations for  Sales Tax Amount at 6%
    taxTot=salTax*subTot;
    //Calculations for Total Purchase Amount
    salTot=subTot+taxTot;
    
    //Output the Results
    cout<<"Subtotal Amount= " <<subTot<<endl;
    cout<<"Sales Tax Amount= " <<taxTot<<endl;
    cout<<"Total Purchase Amount= " <<salTot<<endl;
    
     //Exit stage right!   
    return 0;
}

    
    
    