#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
	int price=0;
	int tax1=2500000*20/100;
	int tax2=200000*15/100;
	cout<<"Enter the price of your car = ";
	cin>>price;
	if(price>=2500000)
	{
		cout<<"Your payable Tax is ="<<tax1;
	}
	else if(price>=2000000)
	{
	cout<<"Your Payable Tax is ="<<tax2;
	}
	else if(price>=1500000)
	{
	cout<<"You have nothing to pay";
	cin>>price;
	}
else
{
cout<<"Please enter a valid statement";
}
getch();
}
