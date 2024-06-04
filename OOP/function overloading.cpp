#include<iostream>
#include<conio.h>
using namespace std;
class ab{
    public:
    int add(int a , int b)
    {
        return a+b;
    }
    int add(double a , double b)
    {
        return a+b;
    }
};                   
int main()
{
    ab a;
    cout<<a.add(1,2);
    cout<<endl;
    cout<<a.add(3.5,2.0);
    cout<<endl;
     
getch();
return (0);
}