#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int start=0, end=0;
	int sum=0;
	
	cout<<"Enter A Statrting Number ";
	cin>>start;
	cout<<"Enter A Ending Number ";
	cin>>end;
	while(start<=end)
	{
		sum = sum+(start*start);
		cout<<"Square of Numbers is = "<<start*start<<"\n";
		start++;
		cout<<"Sum of squares is = "<<sum<<"\n";
	}
	
	getch();
}
