#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    n1=10;
    n2=20;
    n3=40;
    if(n1>n2&&n1>n3);
    {
        cout<<"n1 is maximum."<<endl;
    }
    if(n2>n1&&n2>n3){
    cout<<"n2 is maximum."<<endl;
    }
    else{
    cout<<"n3 is maximum.";
    }
    return 0;
}