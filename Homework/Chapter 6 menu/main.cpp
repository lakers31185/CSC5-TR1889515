//Tony Reyes
//July 18th, 2014
//Menu for the midterm
//

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();

//Execution begins here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1: problem1();break;
        case 2: problem2();break;
        case 3: problem3();break;
        case 4: problem4();break;
        case 5: problem5();break;
        case 6: problem6();break;
        case 7: problem7();break;
        case 8: problem8();break;
        case 9: problem9();break;
        case 10: problem10();break;
            default:;
        };
    }while(inN<11);
    return 0;
}

//Menu Function
void Menu(){
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 7 for problem 7"<<endl;
    cout<<"Type 8 for problem 8"<<endl;
    cout<<"Type 9 for problem 9"<<endl;
    cout<<"Type 10 for problem 10"<<endl;
    cout<<"Type 11 to exit \n"<<endl;
}

//Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}

//Solution to problem 1
void problem1(){
            //Function Prototypes
    float calReta (float,float);
    //Declare Variables
    //Inputs
    float mrkUp,            //User Enters Wholesale Cost
    percnt,            //User Enters Percent Mark Up
    total;            //Calculated Mark Up Price 

    //Validate Wholesale Cost is Positive Number
    do{
        cout<<"What is WholeSale Cost?: "<<endl;
        cin>>mrkUp;
        if (mrkUp < 1)
        cout<<"Enter Positive Number! "<<endl;
    }while(!(mrkUp>0&&mrkUp<1e9));

    //Validate Percent Mark Up is Positive Number
    do{
        cout<<"What is Percent Mark Up?: "<<endl;
        cin>>percnt;
        if (percnt < 1)
        cout<<"Enter Positive Number! "<<endl;
    }while(!(percnt>0&&percnt<1e9));

    //Set Precision for Dollar Amount 
    cout<<setprecision(2)<<fixed;

    //Calculate Conversion Function to Find Mark Up Amount
    total= calReta(percnt,mrkUp);

    //Display Output Amount of Mark Up
    cout<<"The Mark Up Price Is:($) "<<total<<endl;
   

            }
//Solution to problem 2
void problem2(){
    //Function Prototypes
int getLen(int);
int getWid(int);
void getArea(int,int);

//Declare Variables & Initialize Entries
    //Inputs
    int length,         //Enter a Length
        width ;         //Enter a Width
      
    //User Enter A Rectangle Length to be Doubled
    cout<<"Rectangle Length= ";
    cin>>length;
     //Call Function Twice the Length
    getLen(length);

    //User Enter a Rectangle Width to be Doubled
    cout<<"Rectangle Width= ";
    cin>>width;
    //Call Function Twice the Width
    getWid(width);

    //Call Function and Display Area
    cout<<"Length * Width = ";
    getArea(length,width);

    

}
//Solution to problem 3
void problem3(){
    //Function Prototypes
int finHigh(int,int,int,int);
void disp(int &nort,int &sout,int &east, int &west);

//Declare Variables & Initialize Entries
    //Inputs
      int nort,sout,east,west,      //Four Divisions of Company (N,S,E,W)
                       high=0;      //Highest Grossing Division  
              
      //Enter Sales Totals (Must be Greater than Zero)                  
     disp(nort,sout,east,west);
    //Call Highest Grossing Division Function
    high=finHigh(nort,sout,east,west);
    //Display Output of Highest Grossing Division
    cout<<"The Highest Grossing Division Amount Is: "<<high<<endl;
    
    //Exit Stage Right
   
}
void problem4(){
    //Function Prototypes
int numAcc(string);
void finLow(int,int,int,int,int,int);

//Declare Variables
    //Inputs
    string regName; 
    int north, south, east, west, central,acc; 

 cout<<"There will be 5 regions within"
         <<" the major city that Calculated Accidents "<<endl; 


 regName="north:"; 
 north = numAcc(regName); 


 regName="south:"; 
 south = numAcc(regName); 


 regName="east:"; 
 east = numAcc(regName); 


 regName="west:"; 
 west = numAcc(regName); 


 regName="central:"; 
 central = numAcc(regName); 

 finLow(north, south, east, west, central,acc);

}
void problem5(){
    //Global Constants
const float GRAV= 9.8f;

//Function Prototypes
void fallTim(float &time);
float fallDis(float);

//Declare Variables
    //Inputs
    float time,     //Enter Time in Seconds
       total=0;     //Total Fall Distance
    
    //Call Reference Function For Value of Seconds
    fallTim(time);
    //For Loop 10 times
    for (int arg=1;arg<=10;arg++)
    {
        //Call Function For Falling Distance
        total=fallDis(time);
        //Divide to Display 10 Distances
        total/=arg;
        //Display function Output of Falling Distance (meters)
        cout<<"Your Falling Distance Is: "<<total<<endl;
    }
}
void problem6(){
    //Function Prototypes
void kin(float &mass, float &velo);
float kinEne (float,float);

//Declare Variables & Initialize Entries
    //Inputs
    float mass,         //Mass of Object (kilograms)
          velo,         //Velocity (meters per second)
        objMass;        //Calculated Kinetic Velocity 
    
    //Call Reference Fuction For values Mass & Velocity
    kin(mass,velo);
    
    //Call Kinetic Energy Function 
    objMass=kinEne(mass,velo);
    
    //Display Kinetic Energy 
    cout<<"Kinetic Energy Produced Is: "<<objMass<<endl;

 
}
void problem7(){
    //Function Prototypes
void fahr(float &num);
float celsi(float);

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

}
void problem8(){
    //Function Prototypes
void coinTos();

//Declare Variables
    int flips;          //Number of Flips
    
    //Set the Random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //How many Times Should We Flip The Coin?
    cout<<"How Many Times You Do You Want To Flip Coin? ";
    cin>>flips;
    
    //Loop on function call, flip a coin 10 times
    for(int i=1;i<=flips;i++){
        coinTos();
    }
   
}
void problem9(){
    //Function Prototypes
void disp(float &fut, float &ann, float &num);
float present (float,float,float);

//Declare Variables
    //Input
    float presVal,              //Amount You Need To Deposit
         futVal=0,              //What you want in Account?
        annRate=0,              //Annual Interest Rate
        numYear=0;              //Sit on Money (Years)
    
    //Set Precision For Dollar Amount
    cout<<setprecision(2)<<fixed;
    
    //Call Reference Function For Rate, Future Value, # Years
    disp(futVal,annRate,numYear);
    
    //Call Function Deposit Amount
    presVal=present(futVal,annRate,numYear);
    //Display Function Output of Deposit Amount
    cout<<"Amount You Need To Deposit Is: ($) "<<presVal<<endl;
  
}
void problem10(){
    //Function Prototypes
void val(int &test1, int &test2, int &test3, int &test4, int &test5);
int findLow(int, int, int, int, int);
int calclAve(int, int, int, int, int,int);

 //Declare Variables 
    int test1=0, test2=0, test3=0, test4=0, test5=0;    //Enter 5 Test Scores
    int low=0;                                         //Lowest Score
    int ave=0;                                        //Average Score
    
    //Call as Reference Function for Test Scores
    val(test1, test2, test3, test4, test5);

    //Call Function That Finds Lowest Test Score
    low=findLow(test1, test2, test3, test4, test5);
    //Display Output of Function Lowest Test Score
    cout << "The low test grade is " << low << endl;

    //Call Function That Drops Lowest Test Score & Calculates Average
    ave= calclAve(test1, test2, test3, test4, test5, low); 
    //Display Output of Average Test Score
    cout << "The average of the tests is "<<ave<<endl;
    
}
//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}
//Price Mark Up Function
//Formula Used Equate Amount
//cost= Percent  mrk=Mark  
float calReta(float cost,float mrk)
{
//Return Value
return (cost/100*mrk)+mrk;
}
//Twice The Length Function
//Formula used to Equate Double the Length 
//=Length*2
int getLen(int length)
{
    cout<<"Double That Length Is: "<<length*2<<endl;
}
//Twice The Width Function
//Formula used to Equate Double the Width 
//=Width*2
int getWid(int width)
{
    cout<<"Double That Width Is: "<<width*2<<endl;
}   
//Function to Find Area
//Formula Used To Equate Area of Rectangle
void getArea(int len, int wid)
{    
    cout<<" Area = "<<(len*2*wid*2)<<endl;
}
//Reference Function For 4 Regions
//North, South. East , West
void disp(int &nort,int &sout,int &east, int &west)
{
 do{
        cout<<"Enter Division Sales of the 4 Regions: "<<endl;
        cout<<"Must Not Be Less Than Zero"<<endl;
        cin>>nort
         >>sout
         >>east
         >>west;
    }while(nort<0||nort>1e9||sout<0||sout>1e9||east<0||east>1e9||
            west<0||west>1e9);     
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
int numAcc(string regName){ 
 int num; 

do{ 

    cout << "Enter the number of accidents for " << regName; 
    cin >> num; 

}while (numAcc < 0); 
return num; 
} 
void finLow(int north, int south, int east, int west, int central,int num) 
 { 
    string regName = "north"; 
    
    int val = north; 

    if (val > south) 
    { 
       regName = "south"; 
       val = south; 
    } 
    if (val > east) 
    { 
       regName = "east"; 
       val = east; 
    } 
    if (val > west) 
    { 
       regName = "west"; 
       val = west; 
    } 
    if (val > central) 
    { 
       regName = "central"; 
       val = central; 
    } 

    cout << "The Lowest Region is: " <<regName<<"  The Number Accidents: "<<
            val<< endl; 

}
//Reference Function For Seconds of Fall Time
//&time= falling time in seconds
void fallTim(float &time)
{
    cout<<"Enter A Time (in Seconds) for Falling Distance Calculation";
    cin>>time;
}
//Function For Falling Distance
//Formula Equates Falling Distance (meters)
float fallDis(float time)
{
 //Return Falling Disctance Formula
return .5f*9.8*time*time;
   }
//Reference Function For Mass & Velocity
//&mass = mass  &velo= velocity
void kin(float &mass, float &velo)
{
  //User Enter Mass of Object 
    cout<<"Enter Mass of Object";
    cin>>mass;
    
    //User Enter Velocity of Object 
    cout<<"Enter Velocity of Object";
    cin>>velo;  
}
//Kinetic Energy Function
//Formula Used to Equate Kinetin Energy
//massObj= mass of object    veloss= velocity
float kinEne (float massObj ,float veloss){
    
    return 0.5f*massObj*veloss*veloss;
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
//Dr. Lehr Simple Heads Tail Function
void coinTos(){

//Determine if a flip of a coin is heads or tails
bool heads=rand()%2;//Remainder 0,1

//Output the result
if(heads)cout<<"Heads "<<endl;
else cout<<"Tails "<<endl;
}
//Reference Function For Future Value, Annual Rate, # Years Sitting
//fut= Future Value ann= Annual Rate num= Sitting Years
void disp(float &fut, float &ann, float &num)
{
   cout<<"How Much You Want in Account?";
    cin>>fut;
    cout<<"What is the Annual Interest Rate?";
    cin>>ann;
    cout<<"Number of Years $ Sits in Account?";
    cin>>num;
}
//Function For Deposit Amount 
//Formula Equates Future Value
float present (float fut ,float rate,float years)
{
    //Return Future Value Formula
    return fut/pow(1+rate,years);
}
//Reference Function For 5 Test Scores
//Entries of 5 Test Scores as Reference (0-100) ONLY!
void val(int &test1, int &test2, int &test3, int &test4, int &test5) 
{
//Do-While Loop For Input Validation
do{
    cout << "Please enter 5 test scores\n";
    cout << "Scores must not be less than 0 or greater than 100\n";
    cin >> test1 >> test2 >> test3 >> test4 >> test5;
}while(test1<0||test1>100||test2<0||test2>100||test3<0|test3>100||
       test4<0 || test4 >100 || test5<0 || test5>100);
}
//Function That Finds Lowest Test Score
int findLow(int test1, int test2, int test3, int test4, int test5) {
//Test Value For Lowest Test
int low=0; 
low=test1;

//If Test 1 Is Lower Return
if(test1<low) 
low=test1; 
//If Test 2 Is Lower Return
if(test2<low) 
low=test2;
//If Test 3 Is Lower Return
if(test3<low)
low=test3;
//If Test 4 Is Lower Return
if(test4<low)
low=test4;
//If Test 5 Is Lower Return
if(test5<low)
low=test5;
//Return Test 1,2,3,4 or 5
return low; 
}
//Function To Drop Lowest Test Score & Calculate Average
//5 Test Drop Lowest & Find Average
int calclAve(int test1,int test2,int test3,int test4,int test5,int low) {

//Variables  
int total=0;        //Total of 4 Scores
int average=0;      //Average of 4 Scores

//Calculate Total
total=test1+test2+test3+test4+test5;
//Find Lowest 
total-=low; 
//Calculate Average
average=total/4;
//Return Average Test Score
return average; //return the average to the main function
}




