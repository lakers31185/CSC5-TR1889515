/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap5 Prob12 Celsius/Fahrenheit
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;


//User Libraries




//Global Constants




//Function Prototypes




//Execution Starts Here!
int main(int argc, char** argv){


     //Format Output for Rate & Year Increments
    cout<<"Celsius (c)            Fahrenheit (f)"<<endl;
    cout<<"___________            ________________"<<endl;
  
    //For-Loop of Fahrenheit (0-20)
    for (int fahr=0;fahr<=20;fahr++){
        //Partial Fahrenheit Formula
        float cels= 1.8f;
        //Calculate Fahrenheit and Celsius Conversion
        cels*=fahr;
        //Add 32 to Calculation and Display Output
        cout<<cels+32;
        //Set Celsius Range 0 - 20   
        if(fahr<21){
            //Display Output of Celsius Conversion
            cout<<"\t          \t"<<fahr<<endl;
            }
    }
    //Exit Stage Right
    return 0;
}
        