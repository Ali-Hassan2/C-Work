#include<iostream>
using namespace std;
int main()
{
	int i , j , k ,l;
	int s = 0;
	for ( i = 7 ; i >= 1 ; i--)
	{
		for ( j = 1 ; j <= i ; j++)
		
		cout<<j;
		for ( k = 0 ; k < s ; k++)
		cout<<" ";
		for ( l = j - 1 ; l >= 1 ; l--)
		if (l!=7)
		cout<<l;
		if(i==7)
		s++;
		else
		s=s+2;
		cout<<endl;
		
		
		
	}
	
	
	return(0);
}
