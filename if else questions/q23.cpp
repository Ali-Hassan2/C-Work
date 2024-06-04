// Write a C++ program that determines a student’s grade.The program will read three types of scores (quiz, mid-term, and final scores) and determine the grade based on the following rules:
// if the average score =90% =>grade=A
// -if the average score >= 70% and <90% => grade=B
// -if the average score>=50% and <70% =>grade=C
// -if the average score<50% =>grade=F....????
#include<iostream>
using namespace std;

int main()
{
float midm , sem, fim , sum = 0;
cout<<"Enter the mid term marks of subject : "<<endl;
cin>>midm;
cout<<"Enter the sesstional marks of subject : "<<endl;
cin>>sem;
cout<<"Enter the final term marks of subject : "<<endl;
cin>>fim;
sum = midm+sem+fim;
if(sum>=90)
{
    cout<<"Grade is : A ";
}
else if((sum>=70)&&(sum<90))
{
    cout<<"Grade is : B ";
}
else if((sum>=50)&&(sum<70))
{
    cout<<"GRade is : C";
}
else
{
    cout<<"Grade is : F 'Mubarak sir'";
}

return (0);
}