/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap3 Prob7 How Many Calories?
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
    int            bagCook= 40; //Number of Cookies Per Bag
    unsigned short   servs= 10, //Number of Servings Per Bag
                     cals= 300, //Number of Calories Per Bag
                       ateCook; // Enter Number of Cookies Consumed
    
    //Outputs
      float        numCook, //Amount of Cookies Per Serving
                   serCook, //Amount of Calories Per Serving
                   oneCook; //Amount of Calories Per Serving 

    //Ask How Many Cookies Ate and Display Calories Consumed
    cout<<"How Many Cookies Did You Eat " <<endl;
    cin>>ateCook;
    
    //Calculations
    
    // Calculations for One Serving in One Bag 
    serCook= cals/servs;
    
    //Calculations for Amount of Calories per Serving
    numCook= bagCook/servs;
    
    //Calculations for Calories in One Cookie
    oneCook= (serCook/numCook)*ateCook;
    
//Display the Outputs
    
    cout<<setprecision(1)<<fixed<<endl;
    cout<<"You Consumed: (cal)" <<oneCook<<endl;
    
    //Exit stage right!   
    return 0;
}

    
    