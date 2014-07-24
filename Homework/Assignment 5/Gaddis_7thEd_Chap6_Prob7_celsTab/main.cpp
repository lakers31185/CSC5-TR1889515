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
void fahr(float &num);
float celsi(float);

//Execution Starts Here!
int main(int argc, char** argv){

//Declare Variables
//Inputs
float num, temp=31,cel=0;

//Call as Reference Function for Fahrenheit
fahr(num);

//For Loop for Celsius (0-20) degrees/ Fahrenheit (32-52) degrees
for (int tabl=0;tabl<=20;tabl++)
{  
    //Increment Fahrenheit
    temp++;
    //Call Function That Converts Celsius to Fahrenheit
    cel=celsi(num);
    //Equate 20 Temperatures (0-20) degrees
    cel+=tabl;
    //Display Function Output of Conversion
    cout<<"Celsius Temperature Is: "<<cel<<"Fahrenheit Is: "<<temp<<endl;
} 
return 0;
}
//Reference Function That ask for Fahrenheit to be Converted
//&num = Fahrenheit Degree
void fahr(float &num)
{
    cout<<"Enter Fahrenheit to be Converted ";
    cin>>num;
}
//Function That Converts Fahrenheit to Celsius
//fahr= Fahrenheit degree input
float celsi(float fahr)
{
//Return Conversion Calculation
return 1.8*(fahr-32);
}

