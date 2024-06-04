#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int att;
	cout<<"\n";
	do{
	int num=0, mult=1;
	cout<<"Enter a number To view Its Table :- ";
	cin>>num;
	for(mult=1;mult<=10;mult++)
	{
		cout<<num<<"X"<<mult<<"="<<num*mult<<"\n";
	}
	att++;
	}
	while(att<=5);
	getch();
}
