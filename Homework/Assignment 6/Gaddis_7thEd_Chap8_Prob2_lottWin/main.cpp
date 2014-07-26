/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Chap8 Prob2 Lottery Winners
 */

//System Library
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes
int searcV(vector<int> vect, int value );
//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    //Inputs
    int num;                //User Lottery Numbers
    //Outputs 
    int found=0;            //Call Function Variable
  
    //Vector Size 
    vector<int> lotto(3);
    
    //Index & Elements of Vector
    lotto[0]=13579;
    lotto[1]=62483;
    lotto[2]=26791;
    
    //Prompt User For His Lottery Numbers
    cout<<"Enter Lotto Numbers: ";
    cin>>num;
    
   //Call Function Lottery Search
    found = searcV(lotto,num);
    
    //Set Parameter For Win or Loss & Display Output
    if (found>-1)
        cout<<"You win"<<endl;
    else
        cout<<"Sorry Try Again"<<endl;
    return 0;
}
//Function for Lottery Search 
//Match User Lottery Numbers With Winners
//vector = lottery winners   value = User Numbers
int searcV(vector<int> vect, int value )
{
    //Match User Numbers with ALL Index and its Elements
    for (int index = 0; index < vect.size();++index )
        if (vect[index]==value)
            return index;
    //Return -1 if Winner
    return -1;
}