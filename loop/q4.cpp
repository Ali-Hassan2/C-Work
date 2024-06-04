// Write a program in C++ to find the perfect numbers between 1 and 500. Go to the editor
// The perfect numbers between 1 to 500 are:
// 6
// 28
// 496
#include<iostream>
using namespace std;

int main()
{
int i =1  , u = 1 , sum = 0;
// remeber this logic
while(i<=500)
{
    while(u<=500)
    {
        if(u<i)
        {
            if(i%u==0)
            sum = sum + u; 
        }
        u++;
    }
    if(sum == i )
    {
        cout<<i<<" ";
    }
    i++;
    u=1;
    sum=0;
}
return (0);
}