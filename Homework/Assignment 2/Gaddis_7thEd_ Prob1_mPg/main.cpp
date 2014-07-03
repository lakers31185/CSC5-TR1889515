/* 
* File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Chap3 Prob 1 mpg
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

//Declare and initialize variables
    
    //Inputs
    float miles,    // Maximum Mileage on a Full Tank (miles)
          gallons;  // Maximum Capacity of Fuel  (gallons)
         
    //Outputs        
    int mPg=0; // Calculated Miles per Gallon  (MPG)
    
    //Enter Maximum Mileage on a Full Tank
    cout<<setprecision(1)<<fixed;
    cout<<"Enter Mileage on a Full Tank (mi): " <<endl;
    cin>>miles;
    
    //Enter Cars Maximum Capacity of Fuel
    cout<<"Enter Car's Maximum Capacity of Fuel (gal)" <<endl;
    cin>>gallons;
    
//Calculations 
    
    //Calculations For Miles Per Gallon 
    mPg=miles/gallons;
    
    //Display Calculation for Car's Miles Per Gallon
    cout<<"Car's Miles per Gallon "<<mPg<<endl;
    
    //Exit stage right!   
    return 0;
}

