/* 
* File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Prob11_disGal
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
    float carGal= 20; //Amount of Fuel Car Holds (gallons)
    float townGal= 21.5; //Town Miles per Gallon
    float highGal= 26.8; //Highway Miles per Gallon
    float townDis,highDis; // Declared Variables
    
    //Calculate Distance for Town Miles per Gallon
    townDis=carGal*townGal;
    //Calculate Distance for Highway Miles per Gallon
    highDis=carGal*highGal;
    
    //Output the Results
    cout<<"Country Miles per Gallon= " <<townDis<<endl;
    cout<<"Highway Miles per Gallon= " <<highDis<<endl;
    
    //Exit stage right!   
    return 0;
}
