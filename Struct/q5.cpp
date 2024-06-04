#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;


struct alibhai
{
	string name;
	char symbol;
	float kg;
	
	
}ali;

int main()
{
//ali.name = "Ali Hassan";
	ali.symbol = 'B';
	ali.kg = 56.7;
	
	cout<<"Enter the name of the boy : "<<endl;
	
	getline(cin,ali.name);
	
	cout<<"The symbol of the boy is : "<<ali.symbol<<endl;
	
	cout<<"The weight if the boy is : "<<ali.kg<<endl;
	
}
