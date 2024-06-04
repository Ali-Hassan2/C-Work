// q 16 from book
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{
    int days ;
    char ch;
    
    cout<<"M. For Motorcycle."<<endl;
    cout<<"C. For Car."<<endl;
    cout<<"B. For Bus."<<endl;
    cout<<"Enter your choics : ";
    cin>>ch;
    cout<<"Enter the number of days for which do you want to park : "; //rs.10 for each day:
    cin>>days;
    switch(ch)
    {
        case 'M':
        case 'm':
        {
            cout<<"Your Motorcycle added to the parking Mania."<<endl;
            cout<<"The cahrges for parking are : "<<days*10;
            break;
        }
        case 'C':
        case 'c':
        {
            cout<<"The car is added to the parking Mania."<<endl;
            cout<<"The cahrges for parking are : "<<days*30;
            break;
        }
        case 'B':
        case 'b':
        {
            cout<<"The Bus has been added to the parking Mania."<<endl;
            cout<<"The charges for the parking are : "<<days*50;
            break;
        }
        case 'E':
        case 'e':
        {
            cout<<"Thank You For Visiting Us..!!"<<endl;
            exit(0);
        }
        default:
        {
            cout<<"Please Enter the valid choice."<<endl;
        }
    }


     


getch();
return (0);
}