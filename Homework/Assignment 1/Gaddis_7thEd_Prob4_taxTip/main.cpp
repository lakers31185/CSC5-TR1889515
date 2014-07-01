/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Prob4_taxTip
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
    
    //Declare and initialize variables
    float amtPurc= 44.50; //Total Amount of Meal 
    float amtTax= 0.0675f; //Percentage Amount of Tax Charged
    float amtTot= 0.15f; //Percentage of Tip for Total Amount
    float mlTot,taxTot,tipTot,billTot;
    
    
    //Calculate Meal Total 
    mlTot=(amtTax*amtPurc)+amtPurc;
    //Calculate Tax Amount
    taxTot=mlTot-amtPurc;
    //Calculate Tip Amount
    tipTot= mlTot*amtTot;
    //Calculate Total Bill
    billTot=mlTot+tipTot;
    
    //Output the Results
    cout<<setprecision(2)<<fixed;
    cout<<"Cost of Meal= " <<mlTot<<endl;
    cout<<"Tax Amount= " <<taxTot<<endl;
    cout<<"Tip Amount= " <<tipTot<<endl;
    cout<<"Bill Total= " <<billTot<<endl;
    
     //Exit stage right!   
    return 0;
}

    