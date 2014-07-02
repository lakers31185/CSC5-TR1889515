/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap3 Prob5 Box Office
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
    string movie;
    unsigned short adlTik,
                   kidTik;
    float aldPri= 6.00, 
          kidPri= 3.00,
          boxPer= .20f,
          grosTot;
   
    //Outputs
    unsigned short adlTot,
                   kidTot;
    float netPro,
          amtPaid;
    
    //Enter Name of Movie
    cout<<"Enter the Name of Movie Your Going to Watch?"<<endl;
    cin>>movie;
    
    //Enter Total Amount of Adult Ticket Sold 
    cout<<"Enter Total of Adult Tickets Sold"<<endl;
    cin>>adlTik;
    
    //Enter Total Amount of Kids Ticket Sold 
    cout<<"Enter Total of Kids Tickets Sold"<<endl;
    cin>>kidTik;
 
    
    //Calculations   
    
    //Calculate Total Profit for Adults
    adlTot=aldPri*adlTik;
    
    //Calculate Total Profit for Kids
    kidTot=kidPri*kidTik;
    
    //Calculate Gross Profit
    grosTot= adlTot+kidTot;
    
    //Calculate Net Box Office
    netPro= boxPer*grosTot;
    
    //Calculate Amount Paid to Distributor
    amtPaid=grosTot-netPro;
    
    //Display the Outputs
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"Movie Chosen: " <<movie<<endl;
    cout<<"Adult Tickets Sold: " <<adlTik<<endl;
    cout<<"Kids Tickets Sold: " <<kidTik<<endl;
    cout<<"Gross Box Office Profit: " <<grosTot<<endl;
    cout<<"Net Box Office Profit: " <<netPro<<endl;
    cout<<"Amount Paid to Distributor: " <<amtPaid<<endl;
    
    //Exit stage right!   
    return 0;
}

