// with pointers......
#include <iostream>
using namespace std;
void myswap(int *x , int *y);
int main()
{
	int a = 10 , b = 20;
	myswap(&a,&b);
	cout<<a<<b<<endl;
	return(0);
}
void myswap(int *x , int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	
}
