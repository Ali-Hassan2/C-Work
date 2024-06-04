#include<iostream>
using namespace std;
int main()
{
	float totalsum = 0;
	float avg = 0;
	int n;
	cout<<"Enter the size of the array : "<<endl;
	cin>>n;
	float arr[n];
	for (int i = 0 ; i < n ; i++)
	{
		cout<<"Enter the number "<<i+1<<" : "<<endl;
		cin>>arr[i];
		
		totalsum = totalsum + arr[i];
	}
	avg = totalsum / n;
	cout<<"The numbers greater then the average of the array are : "<<endl;
	
	for (int i = 0 ; i < n ; i++)
	{
		if(arr[i] > avg )
		{
			cout<<arr[i]<<" ";
		}
	}
	
	
	
	return(0);
}
