#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int carprice=0;
	int tax1=carprice*20/100;
	int tax2=carprice*15/100;  
	cout<<"Enter the price of your car ";
    cin>>carprice;
	if(carprice>=2500000)
	{
		cout<<"Your Tax is = "<<tax1;
		tax1=carprice*20/100;
	 } 
	else if(carprice>=2000000)
	{
	 	cout<<"Your Tax is = \n"<<tax2;
	 	tax2=carprice*15/100; 
    }
	else
	{
	cout<<"Enter a valid statement ";
	cin>>carprice;		
	}
	getch();
}
