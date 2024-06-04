#include<iostream>
using namespace std;

int main()
{
    int e=1 , num;
    cout<<"Please entetr a number :"<<endl;
    cin>>num;
    do{
        cout<<num<<" * "<<e<<" = "<<num*e<<endl;
        e++;
    }while(e<=10);

    return 0;
}