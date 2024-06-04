#include<iostream>
using namespace std;
int main()
{
	string name[10];
	int monthly_salary[10];
	int annual;
	
	for (int i= 0 ; i < 10 ; i++)
	{
		cout<<"Enter the name of the Employee "<<i+1<<" : "<<endl;
		cin>>name[i];
		cout<<"Enter the monthly income of the Employee"<<i+1<<" : "<<endl;
		cin>>monthly_salary[i];
		
		annual = monthly_salary[i] * 12;
		
		
		if(annual >= 250000)
		{
			cout<<"Name of the Employee : "<<name[i]<<endl;
			cout<<"The monthly income of the Employee is : "<<monthly_salary[i]<<endl;
			
			cout<<"The Tax has been paid..."<<endl;
		}
		
		else
		{
			cout<<"No Tax has been paid.."<<endl;
		}
	}
	
	return(0);
}
