/* 
* File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Chap3 Prob2 staSeat
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

//Declare and Initialize Variables

    //Inputs
    float classA, classB, classC;    // Price of each Seat ($)
    
    //Outputs
    float totikA=0, totikB=0, totikC=0;   //Price and Seat Totals
    float totInc=0;                   //Total From All Ticket Sales
    
//Calculations    
    
    //Calculations and Outputs of Each Class (A,B,C)
    cout<<showpoint<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"How Many Class A Tickets Total= " <<endl;
    cin>>classA;
    totikA = classA * 15.00;
    cout<<"The Total Income from Class A seats ($)= " <<totikA<<endl;
    cout<<"How Many Class B Tickets Total= " <<endl;
    cin>>classB;
    totikB = classB * 12.00;
    cout<<"The Total Income from Class C seats($)= " <<totikB<<endl;
    cout<<"How Many Class C Tickets Total= " <<endl;
    cin>>classC;
    totikC = classC * 9.00;
    cout<<"The Total Income from Class C seats($)= " <<totikC<<endl;
    
    //Calculations for Total Income of all Classes Combined
    cout<<setprecision(2)<<fixed;
    totInc = totikA + totikB + totikC;
    
//Display Output of Total Income Earned
    cout<<"Total Income Earned From All Ticket Sales= " <<endl;
    cout<<"Total= ($)" <<totInc<<endl;
   
    //Exit stage right!   
    return 0;
}


    