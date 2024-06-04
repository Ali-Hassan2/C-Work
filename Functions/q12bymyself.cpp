// from the binary number to the decimal....????

#include<iostream>
#include<math.h>
using namespace std;

int binary_to_decimal(long long binary_number)
{
	int decimal_number = 0 , i = 0 , remainder;
	
	while(binary_number != 0 )
	{
		remainder = binary_number % 10;
		 binary_number /= 10;
		 
		 decimal_number += remainder * pow(2 , i);
		 ++i;
	} 
	return decimal_number;
	
} 
int main()
{
	long long binary_number;
	
	cout<<"Enter the binary number : "<<endl;
	
	cin>>binary_number;
	
	int decimal_number = binary_to_decimal(binary_number);
	
	cout<<"The Decimal number of the binary is = "<<decimal_number<<endl; 
}

