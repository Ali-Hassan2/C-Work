#include<iostream>

using namespace std;
int main()
{
    string name;
    int i=0;
    cout<<"Please enter your name :";
    cin>>name;
    while(i<=30)
    {
    i++;
    cout<<name<<" ";
    if(i % 5 == 0)
    cout<<endl;
    }
    return 0;
}