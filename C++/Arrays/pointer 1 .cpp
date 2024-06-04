#include<iostream>
using namespace std;

int main()
{
int marks[4] = { 10 , 20 , 30 , 40};
// now i will create a pointer variable *p
int * p = marks;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;
//here the pointer *p = marks 
//*p shows adress

// pointer airthmetic basic formula

// adressnew = adresscurrent + i * size of data type

cout<<"The value of marks[0] is : "<<*p<<endl;
cout<<"The value of marks[1] is : "<<*(p+1)<<endl;
cout<<"The value of marks[2] is : "<<*(p+2)<<endl;
cout<<"The value of marks[3] is : "<<*(p+3)<<endl;
// now i will write *(p++);



return (0);
}