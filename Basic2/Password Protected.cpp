#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
 int pass=0, att=1;
 while(att<=3)
 {
 	cout<<"Enter Password";
 	cin>>pass;
 	if(pass=12345)
 	{
 		cout<<"This Prog. will be show you the sum of the squares in the range \n";
 		int start,end,sum=0,sum1=0;
 		
	cout<<"Enter a Starting number :- ";
	cin>>start;
	cout<<"Enter a Ending number :- ";
	cin>>end;
	while(start<=end)
	{
		if(start%2==0)
		{
			sum=sum+(start*start);
			cout<<"Square of Number is = "<<start*start<<"\n";
			cout<<"Sum of square is = "<<sum<<"\n";
			
		}
		else
		{
			sum1=sum1+start;
		}
		start++;
	}
	cout<<"Sum of the square of EVEN number is = "<<sum<<"\n";
	cout<<"Sum of the square of Odd number is = "<<sum<<"\n";
	getch();
	break;
	}
	else
	{
	cout<<"Wrong Password";	
	}
	att++;
  }
  
 }

