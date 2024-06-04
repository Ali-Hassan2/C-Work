#include<iostream>
using namespace std;
struct alibhai
{
	int rollno;
	string name;
	int age;
	
}ali;

int main()
{
	alibhai ali;
	cout<<"Enter the name of the student : "<<endl;
	getline(cin , ali.name);
	cout<<"Enter the roll no of the student : "<<endl;
	cin>>ali.rollno;
	cout<<"Enter the age of the student : "<<endl;
	cin>>ali.age;
	
	cout<<"The name of the student is : "<<ali.name<<endl;
	cout<<"The roll no of the student is : "<<ali.rollno<<endl;
	cout<<"The age of the student is : "<<ali.age<<endl;
	
	
	return(0);
}
