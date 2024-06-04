#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int num=0;
	int mult=1;
	long long fac=1;
	cout<<"Enter a number :- ";
	cin>>num;
	if(num %=2)
	{
		while(mult<=10)
		{
		cout<<num<<"X"<<mult<<"="<<num*mult<<"\n";
		mult++;
	    } 
	}
	else
	{
		while(num>=1)
		{
		cout<<"Factorial is = ";
		fac=fac*num;
		num--;
	    }
	}
	getch();
}

