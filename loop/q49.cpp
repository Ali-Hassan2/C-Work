// write a program to input numbers such that starting and ending numbers such that it prints the 
// prime numbers ending with the 7...
#include<iostream>
using namespace std;
int main()
{
	int start , end  , flag = 0 , r;
	
	cout<<"Enter the number from which you want to start : "<<endl;
	cin>>start;
	cout<<"Enter the number for ending : "<<endl;
	cin>>end;
	
	if(start > end)
	{
		cout<<"\tInvalid Input..."<<endl;
		exit (1);
	}
	cout<<"The series is : "<<endl;
	for(int i = end ; i >= start ; i--)
	{
		flag = 0;
		for (int j = 2 ; j < i - 1 ; j++)
		{
			r = i%j;
			if(r==0)
			{
				flag = 1;
			}
		}
		if(flag == 0)
		{
			if(i%10==7)
			cout<<i<<endl;
		}
	}
	
	
	return(0);
}
