// // Define two functions to print the maximum and 
// the minimum number respectively among three numbers entered by user....????
#include<iostream>
using namespace std;
int maximum(int a,int b,int c)
{
    int max;
max = a;
if(b>max)
{
    max=b;
}
if(c>max)
{
    max=c;
}

    return max;

}
int minimum(int a,int b,int c)
{
    int min;
    min=a;
    if(b<min)
    {
        min=b;
    }
    if(c<min)
    {
        min=c;
    }
    else
    {
        return min;
    }
    
}
int main()
{
    int a,b,c;
cout<<"Enter the first number : "<<endl;
cin>>a;
cout<<"Enter the first number : "<<endl;
cin>>b;
cout<<"Enter the first number : "<<endl;
cin>>c;
cout<<"The maximum is : "<<maximum(a,b,c)<<endl;
cout<<"The minimum is : "<<minimum(a,b,c)<<endl;
    

return (0);
}