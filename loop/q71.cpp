#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of the arrays : "<<endl;
	cin>>n;
	int num[n];
	int squ[n];
	int cube[n];
	int sum[n];
	int total;
	for (int i = 0 ; i < n ;i++)
	{
		num[i] = i;
		squ[i] = i * i;
		cube[i] = i * i * i;
		sum[i] = num[i] + squ[i] + cube[i];
		
	}
	total = 0;
	for (int i = 0 ; i < n ; i++)
	{
		cout<<"Sum of "<<i<<" , "<<i<<" squared of "<<i<<" and "<<i<<" cubed is :"<<sum[i]<<endl;
		
		total = total + sum[i];
	}
	cout<<"\nGrand total is = "<<total<<endl;
	
	
	
	return(0);
}

