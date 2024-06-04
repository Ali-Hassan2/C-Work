#include <iostream>
#include <conio.h>
using namespace std; 
int main()
{
	int att=1;
	do
	{
	cout<<"\n";
	int num;
	cout<<"Enter 4 Digits = ";
	cin>>num;
	cout<<num%10;
	num=num/10;
	cout<<num%10;
	num=num/10;
	cout<<num%10;
	num=num/10;
	cout<<num%10;
	num=num/10;
	att++;
}

while(att<=5);
	getch();
}
