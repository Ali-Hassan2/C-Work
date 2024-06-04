// swaping by function or without the pointers.....
#include<iostream>
using namespace std;
void myswap(int a , int b);

int main()

{
	int a = 10 , b = 20;
	
	myswap(a,b);
	cout<<a<<"    b = "<<b;
	return(0);
}

void myswap(int x , int y )
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	
	cout<<x<<"    b = "<<y<<endl;
}
