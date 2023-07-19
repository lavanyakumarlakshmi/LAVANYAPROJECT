/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*******************************************************************************
WEATHER FORECASTING REPORT 
       NAME : K.Lavanya
       COLLEGE: VIVEKANANDHA COLLEGE OF ENGINEERING FOR WOMEN
                   IN THIS WEATHER PROGRAM
                    WE USED,
                           CLASS AND OBJECTS
                           FUNCTIONS
                           SWITCH CASE
                           WHILE LOOP
                           IF CONDITION 
                                TO DISPLAY THE WEATHER FORECASTING REPORT FOR
                                TODAY,YESTERDAY,TOMORROW AND FOR WHOLE WEEK
*******************************************************************************/
#include <iostream>
using namespace std;
class Weather//class for weather
{
    public://access specifier  
    void report()//function
    {
        int day;
        cout<<"1.TODAY"<<endl;
        cout<<"2.YESTERDAY"<<endl;
        cout<<"3.TOMORROW"<<endl;
        cout<<"4.WEEK"<<endl;
        cout<<"Enter the report day wanted to know of the choice(1,2,3,4)- "<<" "<<endl;
        cin>>day;
        
        switch(day)//switch case for the weather report
        {
            case 1:cout<<"The weather report of today"<<endl;
            if(day=1)
            {
                cout<<"\tThe climate is very sunny today...."<<endl;
                cout<<"\t\tTemperature:35 degree celsius"<<endl;
            }
            break;
            case 2:cout<<"The weather report of yesterday  "<<endl;
            if(day=2)
            {
                cout<<"\tThe climate is rainy yesterday..."<<endl;
                cout<<"\t\tTemperature:27 degree celsius"<<endl;
            }
            break;
            case 3:cout<<"The weather report of tomorrow "<<endl;
            if(day=3)
            {
                cout<<"\tThere is a chance of mild rain..."<<endl;
                cout<<"\t\tTemperature:23 degree celsius"<<endl;
            }
            break;
            case 4:cout<<"The weather report of week"<<endl;
            if(day=4)
            {
                cout<<"\tThere is a sequence change in the climate and it is in alternative rainy days...."<<endl;
                cout<<"\t\tTemperature: Between 23 and 35 degree celsius"<<endl;
            }
            break;
            default :cout<<"!!!!So Sad...Invalid Input!!!! "<<endl;
            break;
            exit(day);
        }
    }
};
int main()//main function
{
    string name;
    string loc;
    cout<<"Name:"<<" "<<endl;
    cin>>name;
    cout<<"Name of your location : "<<" "<<endl;
    cin>>loc;
    Weather w;//Object of a class
    while(1)//Looping statement for checking another weather report
    {
        int choice;
        cout<<"***********!!!WELCOME TO WEATHER FORECAST!!!!************"<<endl;
        cout<<"\t1.WEATHER REPORT"<<endl;
        cout<<"\t2.EXIT"<<endl;
        cin>>choice;
        switch(choice)//switch case to enter into our choices
        {
            case 1:
             w.report();
             break;
            case 2:
             cout<<"\t******Thank you******\t"<<endl;
             exit(1);
              break;
            default:
              cout<<"OMG!!! Something Went Wrong....."<<endl;
              break;
        }
    }
    return 0;
}