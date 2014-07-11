/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap5 Prob12 celsius fahrenheit
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
  
    
    for (int fahr=0;fahr<=20;fahr++){
        float cels= 1.8f;
        cels*=fahr;
    cout<<cels+32;
    if(fahr<21){
        cout<<"\t          \t"<<fahr<<endl;
          }
    }
    //Exit Stage Right
    return 0;
}
        