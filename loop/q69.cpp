//q1 from arrays

#include<iostream>
using namespace std;
int main()
{
	
	int num[10];
	int p;
	int count = 0;
	for (int i = 0 ; i < 10 ; i++)
	{
		cout<<"Enter the numbers : "<<endl;
		p = 1;
		cin>>num[i];
		
		for (int j = 2 ; j<=num[1]/2 ; j++)
		
			if(num[i]%j==0)
			{
				p = 0 ;
				break;
			}
			if(p==1)
			
				count++;
			
		
		
	}
	cout<<"The total numbers of the prime numbers is = "<<count<<endl;
	
	
	return(0);
}
