/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Chap8 Prob1 Charge Acoount Vaild
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
    
    //Declare Array of Valid Numbers
    int array[] = {5,6,5,8,8,4,5};
    
    //Declare Variables 
    int pin=-1;             //User Pin (-1 is Error)
    //Counter Through Each Index In Array
    int index=-1;
    bool found = false;
    
    //Enter a Pin Number 
    cout<<"Enter A Pin Number";
    cin>>pin;
   
    //For-Loop to Search Through Each Index of Array
    for (index=0;index <7;index++)
    {
        //Compare Index To User Input 
        if(pin==array[index])
        {
        //If True Number is Valid
        found=true;
        //Display Output of Valid Number
        cout<<"Number Is Valid";
        }
    }
    //If Not Found Display Number Is Invalid
    if (!found)cout<<"Invalid Input!"<<endl;
    return 0;
}
