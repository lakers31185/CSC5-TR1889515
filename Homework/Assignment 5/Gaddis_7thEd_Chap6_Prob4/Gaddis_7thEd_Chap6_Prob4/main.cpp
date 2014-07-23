/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap6 Prob4 Winning Division
 */


//System Libraries
#include <iostream>
#include<cstdlib>
#include <iomanip>
#include<string>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
int numAcc(string);
void finLow(int,int,int,int,int);
//Execution Starts Here!
    int main(int argc, char** argv){
    //Declare Variables
    //Inputs
    string regName; 
 int north, south, east, west, central; 

 cout<<"There will be 5 regions within"
         <<" the major city that Calculated Accidents "<<endl; 


 regName="north:"; 
 north = numAcc(regName); 


 regName="south:"; 
 south = numAcc(regName); 


 regName="east:"; 
 east = numAcc(regName); 


 regName="west:"; 
 west = numAcc(regName); 


 regName="central:"; 
 central = numAcc(regName); 

    
 finLow(north, south, east, west, central);
 return 0;
}
int numAcc(string regName){ 
 int num; 

do{ 

    cout << "Enter the number of accidents for " << regName; 
    cin >> num; 

}while (numAcc < 0); 
return num; 
} 
void finLow(int north, int south, int east, int west, int central) 
 { 
    string regName = "north"; 
    
    int val = north; 

    if (val > south) 
    { 
       regName = "south"; 
       val = south; 
    } 
    if (val > east) 
    { 
       regName = "east"; 
       val = east; 
    } 
    if (val > west) 
    { 
       regName = "west"; 
       val = west; 
    } 
    if (val > central) 
    { 
       regName = "central"; 
       val = central; 
    } 

    cout << "The Lowest Region is " << regName << endl; 
}