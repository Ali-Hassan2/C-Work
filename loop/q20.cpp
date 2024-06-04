#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int n;
     int sum = 0 ;
     int max = INT_MIN; 
      int min = INT_MAX ;
      double avg = 0;
//    max = min;
     cout<<"Enter the number : "<<endl;
     cin>>n;
     for (int i = 1 ; i  <= n ; i++)
     {
        cout<<i<<" "<<endl;;
        sum = sum + i;
        avg = sum/n;
        if(i > max)
        {
            max = i; 
        } 
        if(i<min)
        {
            min = i;
        }

     }
             cout<<"The average is : "<<double(avg)<<endl;
        cout<<"The maximum is : "<<max<<endl;
        cout<<"The minimum is : "<<min<<endl;


getch();
return (0);
}