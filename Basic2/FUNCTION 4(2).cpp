#include<iostream>
#include<cmath>
using namespace std;
int largest()
{
	int num,num1,num2;
	for(int i=1;i<=10;i++){
	
	cout<<"enter a  number";
	cin>>num;
	if(num>num1)
	{
	num1=num;
	}
	if(num>num2)
	{
		num=num2;
		num2=num1;
		num1=num;
      }
		cout<<"the largest number is:"<<num2<<endl;
		cout<<"the 2largest number is:"<<num1<<endl;	
	return (num2);	
}
int main()
{
	cout<<largest();
}
