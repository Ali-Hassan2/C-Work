#include<iostream>
using namespace std;
class baseclass{
    private:
    int var1;
    public:
    virtual void  set(int var1)
    {
        this -> var1 = var1;
    }
    virtual void display()
    {
        cout<<"The value of the base var1 is: "<<var1<<endl;
    }
};
class derivedclass : public baseclass{
    private:
    int var2;
    public:
    void set(int var2)
    {
        this -> var2 = var2;
    }
    void display()
    {
        cout<<"The value of the derived var1 is : "<<var2<<endl;
    }
};
int main()
{
    baseclass* baseptr;
    derivedclass der;
    baseptr = &der;

    baseptr->set(4);
    baseptr->display();


    return 0;
}