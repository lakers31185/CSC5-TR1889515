/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap5 Prob1 Mark Up
 */


//System Libraries
#include <iostream>
#include <string>
#include<ctime>
#include<cstdlib>
#include <iomanip>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
 float calReta (float,float);

//Execution Starts Here!
int main(int argc, char** argv){
    //Declare Variables
    //Inputs
    float mrkUp,
         percnt,
            total,
            price;
    
   do{
        cout<<"What is WholeSale Cost?: "<<endl;
        cin>>mrkUp;
            if (mrkUp < 1)
            cout<<"Enter Positive Number! "<<endl;
    }while(!(mrkUp>0&&mrkUp<1e9));
    
    do{
         cout<<"What is Percent Mark Up?: "<<endl;
        cin>>percnt;
            if (percnt < 1)
            cout<<"Enter Positive Number! "<<endl;
    }while(!(percnt>0&&percnt<1e9));
    
   

    
    cout<<setprecision(2)<<fixed;
    total= calReta(percnt,mrkUp);

   
   
    cout<<"The Mark Up Price Is:($) "<<total<<endl;
return 0;
}
float calReta(float cost,float mrk)
{
    
    return (cost/100*mrk)+mrk;
    
}
