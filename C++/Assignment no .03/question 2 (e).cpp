#include<iostream>
using namespace std;
int main()
{
    //2,5,8,11,14,17,20 as there is a sequence of adding 3 in the next one 
    int i = 2;
    cout<<"The required output of the sequence is given as follow :"<<endl;
    while(i<=20)
    {
        cout<<i<<endl;
        i+=3;
    }
    return 0;
}