// Write a function named addition to add 3 arguments of type integer and float. 
// 2. Write all possible overloaded forms of addition function.
// 3. Hint: 2 arguments can be integer and one float at one time and vice versa.
// 4. And do keep in mind the order can also make a difference.
// 5. Call all the overloaded functions with appropriate type of variables from main...???
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
#include<sstream>
#include<vector>
using namespace std;

int addition(int a , int b , int c)
{
    return a+b+c;
}
float addition(int a , int b , float c)
{
    return a+b+c;
}
float addition(int a , float b , float c)
{
    return a+b+c;
}
float addition(float a , float b , float c) 
{
    return a+b+c;
}
int main()
{
    int a = 5 , b = 7 , c = 9;
    float n1 = 5.6 , n2 = 6.7 , n3 = 9.8;
    cout<<"The sum of three integers is : "<<addition(a,b,c)<<endl;
    cout<<"The sum of two integers and one float is : "<<addition(a,b,n1)<<endl;
    cout<<"The sum of one integer and two float  is : "<<addition(a,n1,n2)<<endl;
    cout<<"The sum of three float is : "<<addition(n1,n2,n3)<<endl;


     


getch();
return (0);
}