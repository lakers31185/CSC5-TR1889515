/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap4 Prob4 Area of Rectangles
 */

//System Libraries
#include <iostream>

using namespace std;


//User Libraries


//Global Constants


//Function Prototypes


//Execution Starts Here!
int main(int argc, char** argv) {


//Declare variables & Initialize Entries

    //Inputs
    int lenRe1,     //Length of Rectangle 1
        lenRe2,     //Length of Rectangle 2
        widRe1,     //Width of Rectangle 1
        widRe2;     //Width of Rectangle 2
    
    //Outputs
    int area1=0,    //Area of Rectangle 1
        area2=0;    //Area of Rectangle 2
    
    //Enter Length and Width of 2 Rectangles
    
    cout<<"Enter Length of Rectangle 1: ";
    cin>>lenRe1;
    cout<<"Enter Width of Rectangle 1: ";
    cin>>widRe1;
    cout<<"Enter Length of Rectangle 2 : ";
    cin>>lenRe2;
    cout<<"Enter Width of Rectangle 2: ";
    cin>>widRe2;
    
//Calculations
    
    //Calculate Area of Both Rectangles
    area1= lenRe1*widRe1;
    area2= lenRe2*widRe2;
   
    if (area1 == area2)
        cout<<"Area's Are Equal";
    else if (area1 > area2)
        cout<<"Area 1 Is Greater";
    else 
        cout<<"Area 2 Is Greater";
    
    //Exit stage right!   
    return 0;
}