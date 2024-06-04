#include<iostream>
using namespace std;

void fib(int num);

int main()
{
	int n;
	cout<<"Enter the number : "<<endl;
	cin>>n;
	fib(n);
	
}

void fib(int num)
{
	int a , b , c , i ;
	a = 1 ;
	b = 1 ;
	c = a + b;
	cout<<a<<" "<<b<<" ";
	while(c <= num)
	{
		cout<<c<<" ";
		a = b ;
		b = c ;
		c = a + b;
	}
}
