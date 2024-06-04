#include<iostream>
using namespace std;
int main()
{
	int totalbill = 0;
	
	int price1 = 1;
	int price2 = 1;
	int price3 = 1;
	int n;
	cout<<"Enter the number of the customers : "<<endl;
	cin>>n;
	int orange[n];
	int mango[n];
	int banana[n];
	for (int i = 0 ; i < n ; i++)
	{
		cout<<"Enter the number of Oranges : "<<endl;
		cin>>orange[i];
		cout<<"Enter the numbers of Mangos : "<<endl;
		cin>>mango[i];
		cout<<"Enter the numbers of bananas : "<<endl;
		cin>>banana[i];
		price1 = orange[i] * 20;
		price2 = mango[i] * 10;
		price3 = banana[i] * 5;
	totalbill = price1 + price2 + price3;	
	cout<<"\n======================================================================"<<endl;
	cout<<"||  Customer No .  ||  Mangos  ||  Oranges  ||  Bananas  ||  Total Bill ||"<<endl;
	cout<<"||        "<<i+1<< "\t   ||  "<<mango[i]<<"       ||"<<orange[i]<<"\t    ||"<<banana[i]<<"\t\t ||"<<totalbill<<endl;
	
	
		
		
	}
	
	
	
	return(0);
}
