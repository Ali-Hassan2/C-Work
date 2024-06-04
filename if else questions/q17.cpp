//zz zoo Program in C
//Write a program in C/c++ which prints the numbers from 1 to 100. But, 
//multiples of 3 should be replaced with "Zoo", 
//multiples of 5 should be replaced with "Zz"
// and multiples of both 3 and 5 should be replaced with "ZzZoo".....?????.
#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"Enter the number : "<<endl;
cin>>n;
for(int i = 1 ; i <= 100 ; i++)
{
    if(i % (3*5) ==0)
    {
        cout<<"\nZzZoo";
    }
    else if(i % 5 == 0)
    {
        cout<<"\nZz"<<endl;
    }
    else if (i % 3 == 0)
    {
        cout<<"\nZoo"<<endl;
    }
    else
    {
        cout<<endl<<i;
    }

}
return (0);
}