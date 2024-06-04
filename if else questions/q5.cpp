// scholl grading system
//input marks
//Above 80--A
//60 to 80--B
//50 to 60--C
//45 to 50--D
//25 to 45--E
//Below 25--F  ..... ???
#include<iostream>
using namespace std;

int main()
{
int marks;
cout<<"Enter the marks : "<<endl;
cin>>marks;
if(marks>80)
{
    cout<<"Mubarak Bhai You are awarded Grade : A.";
}
else if ((marks >= 60)&&(marks <= 80))
{
    cout<<"You are awarded Grade : B.";
}
else if ((marks>=50 )&&(marks<60))
{
    cout<<"You are awarded Grade : C.";
}
else if((marks >= 45)&&(marks < 50)){
cout<<"You are awarded Grade : D.";
}
else if((marks >= 25)&&(marks < 45))
{
    cout<<"You are awarded Grade : E.";
}
else
{
    cout<<"Sorry bhai jaan you are fail.";
}
return (0);
} 