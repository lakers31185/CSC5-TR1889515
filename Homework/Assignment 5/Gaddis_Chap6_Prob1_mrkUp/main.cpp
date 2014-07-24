/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap6 Prob1 Mark Up
 */


//System Libraries
#include <iostream>
#include<cstdlib>
#include <iomanip>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
void mrkPer(float &mrkUp,float &percnt); 
float calReta (float,float);

    //Execution Starts Here!
    int main(int argc, char** argv){
    //Declare Variables
    //Inputs
    float mrkUp,        //User Enters Wholesale Cost
    percnt,            //User Enters Percent Mark Up
    total;            //Calculated Mark Up Price 

    //Call Reference Function for Percent & Mark Up
    mrkPer(percnt,mrkUp);
    
    //Set Precision for Dollar Amount 
    cout<<setprecision(2)<<fixed;

    //Calculate Conversion to Find Mark Up Amount
    total= calReta(percnt,mrkUp);

    //Display Output Amount of Mark Up
    cout<<"The Mark Up Price Is:($) "<<total<<endl;
    return 0;
}
//Reference Function of Values for Wholesale Cost &  Mark Up Percent
//&mrkUP = Whole CSale Cost  &percent = Percent Mark Up
void mrkPer(float &mrkUp,float &percnt)
{
//Validate Wholesale Cost is Positive Number
    do{
    cout<<"What is WholeSale Cost?: "<<endl;
    cin>>mrkUp;
    if (mrkUp < 1)
        cout<<"Enter Positive Number! "<<endl;
}while(!(mrkUp>0&&mrkUp<1e9));

//Validate Percent Mark Up is Positive Number
do{
    cout<<"What is Percent Mark Up?: "<<endl;
    cin>>percnt;
    if (percnt < 1)
    cout<<"Enter Positive Number! "<<endl;
}while(!(percnt>0&&percnt<1e9));
}
//Price Mark Up Function
//Formula Used Equate Amount
//cost= Percent  mrk=Mark  
float calReta(float cost,float mrk)
{
//Return Mark up Value
return (cost/100*mrk)+mrk;

}
