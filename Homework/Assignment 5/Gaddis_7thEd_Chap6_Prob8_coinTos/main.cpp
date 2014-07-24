/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * June 25, 2014, 3:43 PM
 * Purpose: Gaddis 7thEd Chap Prob8 Coin Toss
 */

//System Library
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;


//User Defined Libraries

//Global Constants

//Function Prototypes
void coinTos();


//Execution Starts Here!
int main(int argc, char** argv) {
    int flips;
    //Set the Random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    cout<<"How Many Times You Do You Want To Flip Coin? ";
    cin>>flips;
    
    //Loop on function call, flip a coin 10 times
    for(int i=1;i<=flips;i++){
        coinTos();
    }


    return 0;
}


//Simple heads or tails function
void coinTos(){
    
    //Determine if a flip of a coin is heads or tails
    bool heads=rand()%2;//Remainder 0,1
    
    //Output the result
    if(heads)cout<<"Heads "<<endl;
    else cout<<"Tails "<<endl;
    
}

