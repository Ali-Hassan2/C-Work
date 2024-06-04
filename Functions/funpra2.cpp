// Write 3 functions named typeBasedCalc. Two of the functions should take 2 float and 1 int argument. 
// Rest one should take 2 int and 1 float argument. You have to distinguish between the three functions based 
// on their parameters type or order, as they have equal number of parameters. Your function definition 
// should calculate and display the sum and average of the passed arguments......??????
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
float typebasedcalc(float a , float b , int c)
{
    float sum;
    sum = a+b+c;
    cout<<"The sum is : "<<sum<<endl;
    cout<<"The average of the numbers is : "<<sum/3<<endl;
}
float typebasedcalc(int a , float b , float c)
{
    float sum ;
    sum = a+b+c;
    cout<<"The sum is : "<<sum<<endl;
cout<<"The average of the numbers is : "<<sum/3<<endl;
}
float typebasedcalc(int a , int b , float c)
{
    float sum;
    sum = a+b+c;
    cout<<"The sum is : "<<sum<<endl;
cout<<"The average of the numbers is : "<<sum/3<<endl;
}


int main()
{
int a = 10 , b = 20 , c = 30;
float x = 10.10 , y = 20.20 , z = 30.30;
cout<<"The sum and average of two float and one integer is : "<<typebasedcalc(x , y , a)<<endl;
cout<<"The sum and average of two float and one integer is : "<<typebasedcalc(a,x,y)<<endl;
cout<<"The sum and average of two integers and one float is : "<<typebasedcalc(a,b,x)<<endl;

     


getch();
return (0);
}