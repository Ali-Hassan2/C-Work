#include<iostream>
using namespace std;
int main()
{
	
	int mid;
	
	for (int i = 1 ; i <= 10 ; i++)
	{
		cout<<"  ";
		
		mid = (2*i) - 1;
		
		for (int j = 1 ; j <= (10 - i ) ; j++)
		
		cout<<" ";
		
		for (int k = i ; k <= mid ; k++)
		cout<<(k%10);
		for (int l = (mid - 1) ; l >= i ; l--)
		cout<<(l%10);
		cout<<endl;
		
			
		
	}

	
	return(0);
}

