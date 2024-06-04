//from binary to decimal number 
#include<iostream>
#include<math.h>
using namespace std;

int bintodec(long long binary_number)
{
	int decimal_number = 0 , i = 0 , remainder;
	
	while(binary_number != 0)
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
	
	int decimal_number = bintodec(binary_number);
	
	cout<<"The decimal number = "<<decimal_number<<endl;
	
	
	
	return(0);
}
