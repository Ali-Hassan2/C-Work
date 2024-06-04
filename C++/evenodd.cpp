#include<iostream>
using namespace std;
int main()
{
    int es = 0 , os = 0 ,num ;
    do
    {
        cout<<"Ener a number :: "<<endl;
        cin>>num;
        if(num % 2 == 0)
        es=es+num;
        else
        os=os+num;
    }while(num!=0);
    cout<<"The even sum is = "<<es<<endl;
    cout<<"The odd sum is = "<<os<<endl;
    return 0 ;
}