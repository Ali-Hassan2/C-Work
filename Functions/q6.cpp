// A person is elligible to vote if his/her age is greater than or equal to 18. 
// Define a function to find out if he/she is elligible to vote.....????
#include<iostream>
using namespace std;
void vote(int n)
{
    if(n>=18)
    {
        cout<<"Bro, you are eligible to vote."<<endl;
    }
    else
    {
        cout<<"Bro, you are not eligible to vote."<<endl;
    }
}
int main()
{
int age;
cout<<"Enter the age : "<<endl;
cin>>age;
vote(age);
return (0);
}