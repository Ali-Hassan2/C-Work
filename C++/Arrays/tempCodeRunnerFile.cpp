#include<iostream>
using namespace std;

int main()
{
// what is a pointer : -----> is a variable to store adress of different data types 
int a = 3;
// & --------> (Adress operator)
int *b = &a;
//so here a can print adress by two different ways
cout<<"The value of adress a is "<<&a<<endl; // i can do this thing so there is not a problem
cout<<"The value of adress a is "<< b<<endl;

// (*) --------> is the deferncing operater
// this is used to show that at the adress which value is stored
cout<<"-------------------------------------------------"<<endl;
cout<<"-------------------------------------------------"<<endl;
cout<<"-------------------------------------------------"<<endl;
cout<<"The value at adress a is :: "<<*b<<endl;


return (0);
}