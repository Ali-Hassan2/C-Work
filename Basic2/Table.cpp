#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	
	int num=0;
	int mult=1;
	cout<<"Enter a number to show the table:-- ";
	cin>>num;
	while(mult<=10)
	{
		cout<<num<<"X"<<mult<<"="<<num*mult<<"\n";
		mult++;
	}
	
	getch();
}
