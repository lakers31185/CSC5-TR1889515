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
    int              bagCook= 40;  //Number of Cookies Per Bag
    unsigned short   servs= 10,    //Number of Servings Per Bag
                     cals= 300,    //Number of Calories Per Bag
                     ateCook;      // Enter Number of Cookies Consumed
    
    //Outputs
   unsigned short  serCook=0,      //Amount of Calories Per Serving
                   oneCook=0;      //Amount of Calories Per Serving 

    //Ask How Many Cookies Ate and Display Calories Consumed
    cout<<"How Many Cookies Did You Eat " <<endl;
    cin>>ateCook;
    
//Calculations
    
    //Calculations for Calories in One Cookie
    oneCook= (ateCook*servs*cals)/bagCook;
    
    //Display Calories Consumed
    cout<<"You Consumed: (cal)" <<oneCook<<endl;
    
    //Exit stage right!   
    return 0;
}

    
    