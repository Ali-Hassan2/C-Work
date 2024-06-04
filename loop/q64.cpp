#include<iostream>
using namespace std;
int main()
{
	int n;
	char ch = 'A';
	cout<<"Enter the height of the triangle : "<<endl;
	cin>>n;
	for (int i = 1 ; i <= n ;i++)
	{
		ch = 'A';
		
		for (int j = 1 ; j <= i ; j++)
		{
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
	
	
	return(0);
}

