// Write a program in C++ to find the last prime number occur before the entered number. Go to the editor
// Sample Output:
// Input a number to find the last prime number occurs before the number: 50
// 47 is the last prime number before 50
#include<iostream>
using namespace std;

int main()
{
int num , pri = 0;
cout<<"Enter a number : "<<endl;
cout<<"-----------------"<<endl;
cout<<"-----------------"<<endl;
cin>>num;
for(int n = num-1 ; num >= 1 ; n--)
{
    // rember this logic
    for(int j = 2 ; j < n ; j++)
    {
      if(n%j==0)
      {
        pri++;
      }
    }
      if(pri == 0)
      {
        if(n == 1)
        {
            cout<<"No prime number less then 2."<<endl;
            break;
        }
        cout<< n << "is the least prime number before the "<<num<<endl;
      break;}
      
    
    pri = 0;
}
return (0);
}