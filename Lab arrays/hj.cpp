#include<iostream>
using namespace std;
void input(int arr1[] , int arr2[] , int arr3[])
{
	for (int i = 0 ; i < 20 ; i++)
	{
		cout<<"Enetr the first array elements : "<<endl;
		cin>>arr1[i];
	}
	for (int i = 0 ; i < 20 ; i++)
	{
		cout<<"The values of Beta are : "<<arr2[i]<<endl;
	}
	for (int i = 0 ; i < 20 ; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
		cout<<"\nThe sum of arr1 and arr2 is  : "<<i+1;
		cout<<"The sum is : "<<arr3[i]<<endl;
	}
}
int main()
{
	int alpha[20] , beta[20]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,6,7,5,3,5} , gamma[20];
	input(alpha , beta , gamma);
	return 0;
}
