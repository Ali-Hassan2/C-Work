#include<iostream>
#include<conio.h>
using namespace std;
 class shop{
    private:
    int id;
    int price;
    public:
    void setdata(int a , int b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout<<"The id of the object is : "<<id<<endl;
        cout<<"The price of the object is : "<<price<<endl;
    }

 };
int main()
{
    int size = 3;
    shop* ptr = new shop [size];
    shop* ptrtemp = ptr;
    int p , q , i;
    for( i = 0 ; i < size ; i++)
    {
        cout<<"Enter the Id and the price of the item"<<i+1<<":"<<endl;
        cin>>p>>q;
        (*ptr).setdata(p , q);
        ptr++;
    }
    for(int  i = 0 ; i < size ; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }

getch();
return (0);
}