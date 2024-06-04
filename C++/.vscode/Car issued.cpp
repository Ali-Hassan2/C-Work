#include<iostream>
using namespace std;
int main()
{
    int a,b,c,m,um;
    cout<<"press a if you a are married:"<<endl<< "b if you unmarried and age above 30 years:"<<endl;" c for if you unmarried female
    and age above 25:"<<endl;
    cin>>a,b,c;
    if(a==m)
    {
        cout<<"Car is issued to you.";
    }
    else{
        cout<<"Car will not be issued."

    }
    if(b==um && b>=30)
    {
        cout<<"Car will be issued to you."<<endl;
    }
    else
    {
        cout<<"Car will not be issued to you."<<endl;
    }
    if(c=um && c>=25)
    {
        cout<<"Car will be issued to you.";
    } 
    else{
        cout<<"Car will not be issued to you."
    }
    return 0;
}