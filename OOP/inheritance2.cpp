#include<iostream>
#include<conio.h>
using namespace std;
class fruit{
    public:
    int frt;
    fruit()
    {
        frt = 0;
    }
    void set(int frts)
    {
         frt = frts;
    }
    int getnum()
    {
        return frt;
    }
};   
class apple : public fruit{
    public:
    void display()
    {
        cout<<"The numebr of the apple is : "<<getnum();
    }
};                
class banana : public fruit{

    public:
    void display()
    {
        cout<<"The number of banana is : "<<getnum();
    }
};
int main()
{
     apple a;
     a.set(5);
     a.getnum();
     a.display();
     cout<<endl<<":::::::::::::::"<<endl;
     banana b;
     b.set(3);
     b.getnum();
     b.display();
     cout<<endl<<":::::::::::::::"<<endl;
     int total = a.getnum() + b.getnum();
     cout<<"The total fruits are : "<<total<<endl;

getch();
return (0);
}