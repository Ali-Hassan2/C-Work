#include<iostream>
using namespace std;

struct info
{
	int code ;
	int salary;
	int grade;
	
	
};

int main()
{
	info record1 , record2;
	
	cout<<"Enter the Code Number , Salary and the grade of the 1st Employee..."<<endl;
	cin>>record1.code>>record1.salary>>record1.grade;
	cout<<"Enter the Code Number , Salary and the grade of the 2nd Employee.."<<endl;
	cin>>record2.code>>record2.salary>>record2.grade;
	if(record1.salary > record2.salary)
	{
		cout<<"The Code number of the Employee is : "<<record1.code<<endl;
		cout<<"The Salary of the Employee is : "<<record1.salary<<endl;
		cout<<"The Grade of the Employee is : "<<record1.grade<<endl; 
	}
	else
	{
		cout<<"The Code Number of the Employee is : "<<record2.code<<endl;
		cout<<"The Salary of the Employee is : "<<record2.salary<<endl;
		cout<<"The grade of the Employee is : "<<record2.grade<<endl;
	}
	return(0);
}
