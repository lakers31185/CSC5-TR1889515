/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap3 Prob9 Auto Cost
 */


//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;


//User Libraries


//Global Constants
const float annual=1.0f*12.0f;//Conversion from months to years

//Function Prototypes


//Execution Starts Here!
int main(int argc, char** argv) {


//Declare variables & Initialize Entries

    //Inputs
     float loanPay,
           insure,
            gas,
            oil,
            tires,
            maint;
     
     //Outputs
     float totMon=0,
           totYear=0;
    
     //Enter Monthly Cost of Loan for Your Car ($)
     cout<<"How Much Is Your Monthly Loan Payment ($): ";
     cin>>loanPay;
     
     //Enter Monthly Cost of Insurance for Your Car
     cout<<"How Much Is Your Monthly Insurance Payment ($): ";
     cin>>insure;
     
     //Enter Monthly Cost of Gas for Your Car
     cout<<"How Much do you Spend on Gas Monthly ($): ";
     cin>>gas;
     
     //Enter Monthly Cost of Oil for Your Car
     cout<<"How Much do you Spend on Oil Monthly ($): ";
     cin>>oil;
     
    //Enter Monthly Cost of Tires for Your Car
     cout<<fixed<<showpoint<<setprecision(2);
     cout<<"How Much do you Spend for Tires Monthly ($): ";
     cin>>tires;
     
     //Enter Monthly Cost of Maintenence for Your Car
     cout<<fixed<<showpoint<<setprecision(2);
     cout<<"How Much do you Spend on Maintenence for you Car Monthly ($): ";
     cin>>maint;
     
//Calculations
     
     //Calculate Monthly Cost of Car
     totMon=loanPay+insure+gas+oil+tires+maint;
     
     //Calculate Annual Cost of Car
     totYear=totMon*annual;
     
//Display Outputs
     
     //Display Monthly Cost
     cout<<"Total Monthly Cost For Your Car ($)= "  <<totMon<<endl;
     
     //Display Annual Cost
     cout<<"Total Annual Cot for Your Car ($)= " <<totYear<<endl;
     
     //Exit Stage Right
    return 0;
}
