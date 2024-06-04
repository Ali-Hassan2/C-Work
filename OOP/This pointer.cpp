// #include<iostream>
// #include<conio.h>
// using namespace std;
// class A{
//     private:
//     int a;
//     public:
//     void setdata(int a)
//     {
//         this->a = a;
//     }
//     void getdata()
//     {
//         cout<<"The value of the a is : "<<a<<endl;
//     }

// };                   
// int main()
// {
//      A a;
//      a.setdata(5);
//      a.getdata();
// getch();
// return (0);
// }

#include<iostream>
#include<conio.h>
using namespace std;
class A{
    private:
    int a;
    public:
    A & setdata(int a)
    {
        this -> a = a;
        return *this;
    }
    void getdata()
    {
        cout<<"The value of the a is : "<<a<<endl;
    }

};                   
int main()
{
     A a;
     a.setdata(4).getdata();

getch();
return (0);
}