#include<iostream>
using namespace std;

void counting()
{
	int zeros , evens , odds , number , number2;
	
	zeros = evens = odds = 0;
	
	cout<<"Enter the numbers for which you want to count : "<<endl;
	
	cin>>number;
	
	for (int i = 1 ; i <= number ; i++)
	{
		cout<<"Enter the number : "<<endl;
		
		cin>>number2;
		
		if(number2 % 2 == 0)
		{
			evens++;
		}
		if(number2 % 2 != 0)
		{
			odds++;
		}
		if(number2 == 0)
		{
			zeros++;
		}
		
	}	
	cout<<"The even numbers are : "<<evens<<endl;
	
	cout<<"The odd numbers are : "<<odds<<endl;
	
	cout<<"The zeros are : "<<zeros<<endl;
}

int main()
{
	counting();
}
