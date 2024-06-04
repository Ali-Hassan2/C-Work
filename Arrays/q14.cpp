#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the students to be added in the grading system : "<<endl;
	cin>>n;
	int a , b , c , f;
	
	a = b = c = f = 0 ;
	
	int marks[n];
	for (int i = 0 ; i <= n ; i++)
	{
		cout<<"Enter the marks of the student "<<i+1<<" : "<<endl;
		cin>>marks[i];
		
		if(marks[i] >= 80)
		{
			a++;
		}
		if(marks[i] >= 60 && marks[i] <= 79)
		{
			b++;
		}
		if(marks[i] >= 40 && marks[i] <= 59)
		{
			c++;
		}
		if(marks[i] < 40)
		{
			f++;
		}
		
	}
	cout<<"The students with A grade are : "<<a<<endl;
	cout<<"The students with B grade are : "<<b<<endl;
	cout<<"The students with C grade are : "<<c<<endl;
	cout<<"The students with F grade are : "<<f<<endl;
	
	return(0);
}
