#include<iostream>
#include<conio.h>
using namespace std;
class complex;

class calculator
{
    int sum(int a ,  int b)
    {
        return (a+b);
    }

    int sumrealcomplex(complex o1 , complex o2)
    {
        return(o1.a+o2.a);
        // ab es ko b ijazat chahye na private members ko access krny k liye to ham
        // es k liye b friendship krny k liye propose bheje gy complex name 
        // ki class ko taky wo qabool kr ly or apny private members ko use krny 
        // ki ijazat dy dy...    
        
        }

};
class complex
{
    private:
    friend int calculator :: sumrealcomplex(complex o1 , complex o2);
    int a , b;
    public:
    void setdata(int v1 , int v2)
    {
        a = v1;
        b = v2;
    }

    // now i will print the numbers{}
    void print_numbers(void)
    {
        cout<<"The entrered numbers are as it is : "<<a<<" + "<<b<<"i"<<endl;
    }
};
                   
int main()
{
     
getch();
return (0);
}