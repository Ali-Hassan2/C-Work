#include<iostream>
#include<conio.h>
using namespace std;
class parent{
    private:
    int a;
    public:
    virtual parent& setdata()
    {
        cout<<"Enter the value of the parent child: ";
        cin>>a;
        return* this;
    }
    virtual void display()
    {
        cout<<"The value of the parent a is: "<<a<<endl;
    }
};   
class child : public parent{
    private:
    int a;
    public:
    child& setdata()
    {
        cout<<"Enter the value of the child a: ";
        cin>>a;
        return* this;
    }
    void display()
    {
        cout<<"The value of child a is: "<<a<<endl;
    }
};                
int main()
{
parent* per = new parent;
child c;
per = &c;
per->setdata().display();
     
getch();
return (0);
}