/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose:Gaddis 7thEd Chap6 Prob6 Kinetic Energy
 */

//System Libraries
#include <iostream>
#include<cstdlib>
using namespace std;


//User Libraries


//Global Constants


//Function Prototypes
float kinEne (float,float);


//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare Variables & Initialize Entries
    //Inputs
    float mass,         //Mass of Object (kilograms)
          velo,         //Velocity (meters per second)
        objMass;        //Calculated Kinetic Velocity 
    
    //User Enter Mass of Object 
    cout<<"Enter Mass of Object";
    cin>>mass;
    
    //User Enter Velocity of Object 
    cout<<"Enter Velocity of Object";
    cin>>velo;
    
    //Call Kinetic Energy Function 
    objMass=kinEne(mass,velo);
    
    //Display Kinetic Energy 
    cout<<"Kinetic Energy Produced Is: "<<objMass<<endl;

    return 0;
}
//Kinetic Energy Function
//Formula Used to Equate Kinetin Energy
//massObj= mass of object    veloss= velocity
float kinEne (float massObj ,float veloss){
    
    return 0.5f*massObj*veloss*veloss;


}