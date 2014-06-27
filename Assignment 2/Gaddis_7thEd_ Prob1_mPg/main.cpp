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
    float miles, // Maximum Mileage on a Full Tank (miles)
          gallons, // Maximum Capacity of Fuel  (gallons)
          mPg; // Calculated Miles per Gallon  (MPG)
    
    //Output the Results
    cout<<setprecision(2)<<fixed;
    cout<<"Enter Mileage on a Full Tank (mi): " <<endl;
    cin>>miles;
    cout<<"Enter Car's Maximum Capacity of Fuel (gal)" <<endl;
    cin>>gallons;
    mPg=miles/gallons;
    cout<<"Car's Miles per Gallon "<<mPg<<endl;
    
    //Exit stage right!   
    return 0;
}

