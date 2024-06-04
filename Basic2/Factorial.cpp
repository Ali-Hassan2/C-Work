#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	cout<<"\n";
	int att=1;
	do{
	
	int num=0;
	long long fac=1;
	cout<<"Enter a Number to Find It's Factorial ";
	cin>>num;
	while(num>=1)
	{
		fac=fac*num;
		num--;
	}
	cout<<"Factorial is = "<<fac<<"\n";
	att++;
}
while(att<=5);
	getch();
	
}
