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
int getSale(int ,int,int,int);
int finHigh(int,int,int,int);
//Execution Starts Here!
    int main(int argc, char** argv){
    //Declare Variables
    //Inputs
      int nort,sout,east,west,high=0,sale=0;
        
  do{
       cout<<"Enter Division Sales:"<<endl;
       cout<<"Must Not Be Less Than Zero"<<endl;
        cin>>nort>>sout>>east>>west;
 }while(nort<0||nort>1e9||sout<0||sout>1e9||east<0||east>1e9||
        west<0||west>1e9);
  high=finHigh(nort,sout,east,west);
  cout<<"The Highest Grossing Division Is: "<<high<<endl;
        
  return 0;
}

int finHigh(int div1, int div2, int div3,int div4)
{
  int high=div1;
  
 
  if(div2>high)
      high=div2;
  if(div3>high)
      high=div3;
  if(div4>high)
      high=div4;
  return high;
}    


