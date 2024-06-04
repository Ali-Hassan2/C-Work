// Write a program in C++ to find the sum of digits of a given number. Go to the editor
// Sample Output:
// Input a number: 1234
// The sum of digits of 1234 is: 10
#include<iostream>
using namespace std;

int main()
{
int n1 , n2 , a , sum=0;
cout<<"\n\nEnter the first number : "<<endl;
cout<<"-------------------------"<<endl;
cout<<"-------------------------"<<endl;
cin>>n1;
n2 = n1 ;
while(n1 > 0){
a = n1%10;
n1 = n1 / 10 ;
sum = sum + a;
}
cout<<"The sum of : "<<n2<<" is : "<<sum<<endl;
return (0);
}