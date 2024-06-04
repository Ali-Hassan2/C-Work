#include<iostream>

using namespace std;
int main()
{
    const int a;
    //as if i will do this as first declare a= 45
    //and then i will declare a as a = 56
    //so this process changes the value of a.
    //so if i want that my variable value cannot be changed so then i will use const int a.
    a=45;
    cout<<"The value of a was :"<<a<<endl;
    a = 56;
    cout<<"The value of a is :"<<a<<endl;
    return 0;
}