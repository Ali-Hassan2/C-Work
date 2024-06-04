#include<iostream>
using namespace std;
int main()
{
	int n;
	int num , c;
	cout<<"Enter the size of the array : "<<endl;
	cin>>n;
	int arr[n];
	for (int i =  0 ; i < n ; i++)
	{
		cout<<"Enter the numebr : "<<endl;
		cin>>arr[i];
	}
	for (int i = 0 ; i < n ; i++)
	{
		if(arr[i] == -1)
		
			continue;
			
			num = arr[i];
			
			c = 1;
			for(int j = i+1 ; j < n ; j++)
			{
				if(arr[j] == num)
				{
					c++;
					arr[j] = -1;
				}
			}
		
		cout<<num<<" is stored in the array : "<<c<<" Times...."<<endl;
	}
	
	
	return(0);
}

