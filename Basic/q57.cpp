//  q8 book.....????

#include<iostream>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{

char ch;
double val;
     cout<<"For Conversions : \n";
     cout<<"C. For Centimeters."<<endl;
     cout<<"L. Fr Liters."<<endl;
     cout<<"k. For kilometers."<<endl;
     cout<<"G.For Kilograms."<<endl;
     cout<<"E. For Exit..."<<endl;
cout<<"\n==============================";
cout<<"Enter the Choice : ";
cin>>ch;

cout<<"\nEnter the value : "<<endl;
cin>>val;
switch(ch)
{
    case 'C':
    {
        cout<<"Value in Centimeters is : "<<val*2.54;
    break;
    }
    case 'L':
    {
        cout<<"Value in the Liters is : "<<val*3.785;
    break;
    }
    case 'K':
    {
        cout<<"Value in the Kilometers is : "<<val*1.609;
    break;
    }
    case 'G':
    {
        cout<<"Calue in kilograms is : "<<val*4536;
        break;
    }

    default:
    {
        cout<<"Invalid choice..!!!"<<endl;
    }
}


getch();
return (0);
}