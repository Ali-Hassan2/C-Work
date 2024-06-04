// take the number of the students and the marks of the students and print the highest and second
//highest numbers....???
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int nos , marks;
     double marks1 = -1;
     double marks2 = -2;
     cout<<"Enter the number of the students : "<<endl;
     cin>>nos;
     for (int i = 1 ; i <= nos ; i++)
     {
        cout<<"Enter the marks of the students : "<<endl;
        cin>>marks;
        if(marks > marks1)
        {
            marks2 = marks1;
            marks1 = marks;
        }
        else if(marks > marks2)
        {
            marks2 = marks;
        }

     }
     cout<<"The highest numbers are : "<<marks1<<endl;
     cout<<"The 2nd highest numbers are : "<<marks2<<endl;

getch();
return (0);
}