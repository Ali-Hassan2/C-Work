// fibonnacci series .....???
#include<iostream>
using namespace std;

void fib(int n);

int main()
{
	int num;
	cout<<"Enter the number : "<<endl;
	cin>>num;
	fib(num);
	
	
	
	return(0);
}
void fib(int n)
{
	int a , b , i , c ;
	a = 1;
	b = 1;
	cout<<a<<" "<<b<<" ";
	c = a + b;
	while(c<=n)
	{
		cout<<c<<" ";
		a = b ; 
		b = c ;
		c = a + b;
	}
}
