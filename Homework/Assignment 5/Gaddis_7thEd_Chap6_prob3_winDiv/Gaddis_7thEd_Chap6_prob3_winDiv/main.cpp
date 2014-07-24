/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap6 Prob3 Winning Division
 */


//System Libraries
#include <iostream>
#include<cstdlib>
#include <iomanip>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
int finHigh(int,int,int,int);
void disp(int,int,int,int);
//Execution Starts Here!
    int main(int argc, char** argv){
    //Declare Variables & Initialize Entries
    //Inputs
      int nort,sout,east,west,      //Four Divisions of Company (N,S,E,W)
                       high=0;      //Highest Grossing Division  
    
      //Enter Sales Totals (Must be Greater than Zero)                  
    do{
        cout<<"Enter Division Sales of the 4 Regions: "<<endl;
        cout<<"Must Not Be Less Than Zero"<<endl;
        cin>>nort
         >>sout
         >>east
         >>west;
    }while(nort<0||nort>1e9||sout<0||sout>1e9||east<0||east>1e9||
            west<0||west>1e9);  
    //Call Highest Grossing Division Function
    high=finHigh(nort,sout,east,west);
    //Display Output of Highest Grossing Division
    cout<<"The Highest Grossing Division Amount Is: "<<high<<endl;
    
    //Exit Stage Right
    return 0;
}

//Highest Grossing Division Function
//Formula Equates Which Division is Highest Grossing
//div1= Division 1  div2= Division 2  div3= Division 3  div4= Division 4
int finHigh(int div1, int div2, int div3,int div4)
{
    //Set Division 1 to Highest Grossing 
    int high=div1;
  
    //If Division 2 Is Greater Return
    if(div2>high)
      high=div2;
    //If Division 3 Is Greater Return
    if(div3>high)
      high=div3;
    //If Division 4 Is Greater Return
    if(div4>high)
        high=div4;
    //Return (Division 1,2,3 or 4)
    return high;
}    


