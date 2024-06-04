#include<iostream>
using namespace std;
int main()
{
	
	int max = 0;
	int rollno[5];
	int marks[5];
	for (int i = 0 ; i < 5 ; i++)
	{
		cout<<"Enter the roll no of the student "<<i+1<<" : "<<endl;
		cin>>rollno[i];
		cout<<"Enter the marks of the student"<<i+1<<" : "<<endl;
		cin>>marks[i];
		if(marks[i] > max)
		{
			max = marks[i];
		}
		
	}
	cout<<"The heighest marks are the : "<<max<<endl;
	
	
	return(0);
}
