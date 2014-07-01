/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Prob13 Circuit Board Profit
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
    float cirPri= 12.67; //Price of Circuit Board ($))
    float cirPer= .40f; //Percentage of Profit from Each Board
    float cirPro;
    
    //Calculate Amount of Profit ($)
    cirPro=cirPer*cirPri;
    cout<<setprecision(2)<<fixed;
    cout<<"Profit Amount= " <<cirPro<<endl;
    
    //Exit stage right!   
    return 0;
}