/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose:Gaddis 7thEd Chap5 Prob1 Sum of Numbers
 */

//System Libraries
#include <iostream>

using namespace std;


//User Libraries


//Global Constants


//Function Prototypes


//Execution Starts Here!
int main(int argc, char** argv) {


//Declare variables & Initialize Entries

     //Inputs
    int posNum;             //Positive Integer Entered
    
    //Outputs
    int sumInt=0;           //Sum of All Integers
    int a=0;                //Loop Counter Started at Zero
    
    //Enter A Positive Integer Value & Display Input
    do{
        cout<<"Enter Positive Integer= "<<endl;
        cout<<"Positive Number Not Entered! "<<endl;
        cin>>posNum;
    }while(!(posNum>0&&posNum<1e9));

//Calculations & Loop
    
    //For Loop to Increment and Sum
    for (int b=1; b <= posNum; b++) {
    sumInt+=b;
    a++;
    cout<<sumInt<<endl;
    }
//Display Outputs
    
    //Display Sum of All Incremented Integers
    cout << "The sum is: " << sumInt << endl;

    return 0;
}
