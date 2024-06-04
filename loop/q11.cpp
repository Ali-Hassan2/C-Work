// Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n). Go to the editor
// Sample Output:
// Input the value for nth term: 5
// 1*1 = 1
// 2*2 = 4
// 3*3 = 9
// 4*4 = 16
// 5*5 = 25
// The sum of the above series is: 55
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
double a , sum = 0;
int n ;
cout<<"Enter the value to find the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)"<<endl;
cout<<"\n\nEnter the number : "<<endl;
cout<<"-----------------------"<<endl;
cout<<"-----------------------"<<endl;
cin>>n;


for(int i  = 1 ; i <= n ; ++i)
{
a = 1 / pow(1, 1);
cout<<" 1/ "<<i<<" ^ "<<i<<" = "<<a<<endl;
sum+=a;
}
cout<<"The sum of values of above is : "<<sum<<endl; 
return (0);
}