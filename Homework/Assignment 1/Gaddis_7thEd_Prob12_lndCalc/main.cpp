/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Prob12 Land Calculations
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
    float oneAcr= 43560; //One Acre converted to Square Feet (ft^2)
    float trcLnd= 389767 //Tract of Land Owned (ft^2)
    float trcAcr=0; //Declared Variables
    
    //Calculations for Acres of Tract Owned
    trcAcr=trcLnd/oneAcr;
    
    //Output the Results
    cout<<"Amount of Acres in Tract Owned= " <<trcAcr<<endl;

//Exit stage right!   
     return 0;
}
    
    