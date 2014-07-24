/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap6 Prob7 Celsius Temp. Table
 */


//System Libraries
#include <iostream>
#include<cstdlib>
#include <iomanip>
#include<string>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
float celsi(float);

//Execution Starts Here!
    int main(int argc, char** argv){
    //Declare Variables
    //Inputs
        float num, temp=31,cel=0;
       
        cout<<"Enter Fahrenheit to be Converted ";
       cin>>num;
        
        for (int tabl=0;tabl<=20;tabl++){  
    
            
                
            temp++;
           cel=celsi(num);
           cel+=tabl;
      cout<<"Celsius Temperature Is: "<<cel<<"Fahrenheit Is: "<<temp<<endl;
       } 
       
        
    return 0;
}
float celsi(float fahr)
{

    
    
    
    return 1.8*(fahr-32);
}

