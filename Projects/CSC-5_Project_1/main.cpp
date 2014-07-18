/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: CSC-5 Project 1 World Cup Fever
*/

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
#include<ctime>
#include<cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void intro (void);
int compLocation (void);
int userLocation (void);
int whowins (int,int);
//Execution Starts Here!
int main(int argc, char** argv){
    
//Declare Variables
char plyAgn='y';
int user, wins=0;
srand(time(0)); 
//Display Introduction
intro();
do{
 
 
   
   
   
   cout<<" Would You Like To Play Again [y/n]?  ";
   cin>>plyAgn;
}while(plyAgn!='n');

return 0;
}
 void intro(){
       cout<<"Welcome to World Cup Fever: Penalty Shoot Out!... "
            <<"To Play this game some specific information will be asked about "
            <<"who you  are...You will be asked to select the position "
            <<"of either GoalKeeper or GoalScorer...The Computer will Randomly "
            <<"Generate an  option of the location he thinks the ball will be "
            <<"no matter what Position is selected...Can you out Smart your "
             <<"your        opponent and bring home a win!"<<endl;
           
 }       

