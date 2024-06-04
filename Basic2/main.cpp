#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	
	cout<<"This is a Guessing game \n\n ";
	int att=1;
	do
	{
	char guess;	
	cout<<"Enter any alphabet of your choice:- ";
	cin>>guess;
	if (guess=='x' || guess=='X')
	{
		cout<<"Congratulations you won.!";
		break;
	}
	else
	{
		cout<<"Try Again.. \n";
		att++;
		if(att==1)
		{
			cout<<"You losse.....\n ";
		}
	}
}
while(att<=3);
getch();
}