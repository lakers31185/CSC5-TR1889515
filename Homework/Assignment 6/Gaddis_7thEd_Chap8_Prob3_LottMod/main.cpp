/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Chap8 Prob3 Lotto Modification
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
    //Declare Variables
    //Inputs
    int lotto;          //Enter your Lotto Numbers
    
    //Array of Winning Numbers
    int array[]={13579,26791,26792,33445,55555,62483,77777,79422,85647,93121};
    //First Index 0
    int first=0;
    //Last Index 9
    int last=9;
    //Middle Index 5
    int middle=0;
    //Boolean False if Not Found
    bool found = false;
    
    //User Enter lotto Numbers
    cout<<"Enter Your 5 Lotto Numbers: ";
    cin>>lotto;
    
    //While First <= Last (True)
    while ( first <= last && !found)
    {
       //First + Last Elements / 2
        middle=(first + last) / 2;
       
       if (lotto>array[middle])
       {
           //Element First = Middle +1
           first = middle +1;
       }
       else if (lotto< array[middle])
       {
           //Element Last = Middle - 1
           last = middle -1;
       }
       else 
       {
         //Number Found In While Loop
           cout<<"Valid Numbers - You Win!"<<endl;
         found = true;
       }
    }
    //Not Found (False)
    if (!found)
    {
        //Number Not Found 
        cout <<"Numbers Not Valid"<<endl;
    }
    return 0;
}

