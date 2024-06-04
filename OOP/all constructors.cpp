#include<iostream>
#include<conio.h>
using namespace std;
class all{
    private:
    int num;
    public:
    all()
    {
        cout<<"Default constructor called.."<<endl;
    }
    all(int num)
    {
        this -> num = num;
    }
    all(const all &a)
    {
        num = a.num;
    }
    void display()
    {
        cout<<"The number is : "<<num<<endl;
    }
};                   
int main()
{
     all a;
     cout<<endl;
     all a1(4);
     a1.display();
     cout<<endl;
     cout<<"::::::::::::"<<endl;
     all a2(a1);
     a2.display();
     cout<<endl;
getch();
return (0);
}