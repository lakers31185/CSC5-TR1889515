/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Prob3 Sales Tax
 */

//System Library
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv){

    //Declare and initialize variables
    unsigned short totPurc= 52; //Total Amount of Sale
    float stSale= .04f; //Amount of State Sales Tax
    float coSale= .02f; //Amount of Country Sales Tax
    float totTax; //Total Amount of Sales Tax
    
    //Calculate Amount Sales Tax Generated
    totTax=(stSale+coSale)*(totPurc); 
    
    //Output the Results
    cout<< "Total Amount on Purchase= " <<totPurc<<endl;
    cout<< "Amount State Tax= " <<stSale<<endl;
    cout<< "Amount Country Tax= " <<coSale<<endl;
    cout<< "Total Amount Of Sales Tax on Purchase= " <<totTax<<endl;
    
     //Exit stage right!   
    return 0;
}
