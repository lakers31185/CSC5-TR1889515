/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis CSC-5 Project 1 World Cup Fever
*/

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv){
    
//Declare Variables
char plyAgn='y';
short left=1 , center=2, right=3;   

//Initialize User Name 
    
do{
   srand(static_cast<unsigned int>(time(0)));
   short shotLoc = rand()%2+1;
   string goalie [3]={"left","center","right"};
   string 
   
   
   cout<<" Would You Like To Play Again [y/n]?  ";
   cin>>plyAgn;
}while(plyAgn!='n');

return 0;
}
        

