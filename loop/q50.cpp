// write a program that prints the prime numbers between 100 and 500 and all the 
//prime numbers must be palindrome....
#include<iostream>
using namespace std;
int main()
{
	int i , j , rev , flag;
	
	cout<<"The palindrome numbers between the 100 and 500 are ..."<<endl;
	for(int i = 100 ; i <= 500 ; i++)
	{
		flag = 0;
		for(int j = 2 ; j<= i-1 ;j++)
		{
			if(i%j==0)
			{
				flag = 1;
				break;
			}
		}
		rev = 0;
		if(flag == 0)
		{
			for (int k = i ; k >= 1 ;k = k/10)
			{
				rev = rev * 10 + k % 10;
				if(rev == i)
				{
					cout<<i<<endl;
				}
			}
		}
	}
	
	return(0);
}
