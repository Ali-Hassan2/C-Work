// swaping by function or without the pointers.....
#include<iostream>
using namespace std;
void myswap(int x , int y);

int main()

{
	int a = 10 ;
    int b = 20;
	
	myswap(a,b);
	cout<<a<<b;
	return(0);
}

void myswap(int x , int y )
{
	int temp = x;
	x=y;
	y = temp;
	
	
}