// Write a program in C++ to find prime number within a range. Go to the editor
// Input number for starting range: 1
// Input number for ending range: 100
// The prime numbers between 1 and 100 are:
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
// The total number of prime numbers between 1 to 100 is: 25
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int start,end , cnt , total = 0 ;
cout<<"Enter the starting number : "<<endl;
cin>>start;
cout<<"Enter the starting number : "<<endl;
cin>>end;
for(int i = start ; i<=end ; i++)
{
for(int j = 2 ; j <= sqrt(i) ; j++)
{
    if(i%j==0)
    cnt++;
}
if(cnt==0&&i!=1)
{
    total++;
    cout<<i<<" ";
}
cnt=0;
}
cout<<"The total  number of prime numbers between "<<start<<" and "<<end<<" is = "<<total<<endl;
return (0);
}