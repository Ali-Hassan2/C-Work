#include <iostream>
#include <conio.h>
using namespace std;
int main()




{
	
cout<<"\n";
	cout<<"Enter A For Addition \n";
	cout<<"Enter S For Subtraction \n";
	cout<<"Enter M For Mutiplication \n";
	cout<<"Enter D For Division \n";
	
	int num1,num2;
	char ch;
	cin>>ch;
	switch(ch)
	{
	case'A':
	case'a':
    cout<<"Enter 1st Number";
	cin>>num1;
	cout<<"Enter 2nd Number";
	cin>>num2;
	cout<<"Result is = "<<num1+num2  <<"\n";		
	break;
	
	case'S':
	case's':
    cout<<"Enter 1st Number";
	cin>>num1;
	cout<<"Enter 2nd Number";
	cin>>num2;
	cout<<"Result is = "<<num1-num2  <<"\n";		
	break;
	
	case'M':
	case'm':
    cout<<"Enter 1st Number";
	cin>>num1;
	cout<<"Enter 2nd Number";
	cin>>num2;		
	cout<<"Result is ="<<num1*num2 <<"\n";
	break;
	
	case'D':
	case'd':
    cout<<"Enter 1st Number";
	cin>>num1;
	cout<<"Enter 2nd Number";
	cin>>num2;
	cout<<"Result is ="<<num1/num2 <<"\n";		
	break;
	default:
	cout<<"Enter a Valid Statement \n ";
	getch();
    }
}

