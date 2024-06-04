
// to binary number .....????

#include<iostream>
#include<bitset>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the decimal Number : "<<endl;
	cin>>num;
	
	cout<<"Binary = "<<bitset<8>(num)<<endl;
	
	
	return(0);
}
