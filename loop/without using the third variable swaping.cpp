// without using third variable swaping of two numbers.....
#include<iostream>
using namespace std;
int main()
{
	int a = 10 ;
	int b = 20;
	int temp;
	//by using the third variable for swaping...
	
	cout<<"The values before swaping : "<<endl;
	cout<<"The value of a is : "<<a<<'\n'<<"The value of b is : "<<b<<"..."<<endl;
	
	// by using the third variable temp;
	
	temp = a;
	a=b;
	b=temp;
	
	cout<<"\n==================================="<<endl;
	cout<<"\nThe values after swaping : "<<endl;
	cout<<"The value of a is : "<<a<<'\n'<<"The value of b is : "<<b<<endl;
	
	
cout<<" \nwithout using the third variable....\n"<<endl;
	int c = 20;
	int d = 30;
	cout<<"\n==================================="<<endl;
	cout<<"\nThe values before swaping ..."<<endl;
	cout<<"The value of c is : "<<c<<'\n'<<"The value of d is : "<<d<<endl;
	
	cout<<"\n==================================="<<endl;
	cout<<"The values after swaping...."<<endl;
	c = c + d;
	d = c - d;
	c = c - d;
	cout<<"The value of c is : "<<c<<'\n'<<"The value of d is : "<<d<<endl;
	return(0);
}
