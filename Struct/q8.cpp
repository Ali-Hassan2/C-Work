#include<iostream>
using namespace std;

struct tax
{
	double tax_rate ; 
	double income ; 
	double taxes;
	
};



int main()
{
	tax person[5];
	for (int i = 0  ; i < 5 ; i++)
	{
		cout<<"Enter the annual income of the person "<<i+1<<" : "<<endl;
		cin>>person[i].income;
		cout<<"Enter the Tax rate : "<<endl;
		cin>>person[i].tax_rate;
		
		person[i].taxes = (person[i].income * person[i].tax_rate)/100;
	}
	
	cout<<"The information related to the tax payers are : "<<endl;
	
	for (int i = 0 ; i < 5 ; i++)
	{
		cout<<"The Tax Payers are "<<i+1<<" : "<<person[i].taxes<<endl;
	}
	return(0);
}
