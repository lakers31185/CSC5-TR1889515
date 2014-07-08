/*
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap4 Prob8 Change For A Dollar
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


//Declare variables & Initialize Entries

    //Inputs
    int               penny,
                      nickel,
                        dime,
                     quarter;
  
    //Outputs
   int              dollr= 0;
    
    //Enter Number of (Pennies, Nickels, Dimes, Quarters)
    cout<<"Enter Number Pennies= ";
    cin>>penny;
    cout<<"Enter Number Nickels= ";
    cin>>nickel;
    cout<<"Enter Number Dimes= ";
    cin>>dime;
    cout<<"Enter Number Quarters= ";
    cin>>quarter;
 
//Calculations
    
    //Calculate Winning Ticket
    dollr= (penny*1)+(nickel*5)+(dime*10)+(quarter*25);
    
//Validate Expressions 
    
    //Validate Winning Amount & Display Outputs
    if (dollr < 100)
     cout<<"You Lose, Under $1.00 ";
    
    else if (dollr > 100)
     cout<<"You Lose Over $1.00 ";
    
    else 
        cout<<"You Win Congratulations";

    //Display if User "Won" or "Lost" the Game
     cout<<setprecision(2)<<fixed<<endl;
     cout<<"Total Amount Entered ($) "<<dollr<<endl;
    //Exit stage right!   
    return 0;
} 

    
   
    
    
    