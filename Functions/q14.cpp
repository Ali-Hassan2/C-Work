#include<iostream>
using namespace std;

void mult(int a , int b)
{
	if(a%b==0)
	{
		cout<<"The first number is the multiple of the second...."<<endl;
	}
	else
	{
		cout<<"The first number is not the multiple of the second...."<<endl;
	}
}


int main()
{
	int a ;
	int b ;
	cout<<"Enter the number : "<<endl;
	cin>>a;
	cout<<"Enter the second number : "<<endl;
	cin>>b;
	mult(a,b);
	
	
	
	
	return(0);
}
