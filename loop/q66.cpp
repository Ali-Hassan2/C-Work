#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cout<<"Enter the height of the pyramid : "<<endl;
	cin>>n;
	for (int i = 1 , sp = n - 1 ; i <= n ; i++ , sp--)
	{
		for (int j = 0 ; j <= sp ; j++)
		cout<<" ";
		for (int k = 1 ; k < 2 * i ; k++)
		{
			if(k==1||k==2*i-1||i==n)
			cout<<"&";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	return(0);
}
