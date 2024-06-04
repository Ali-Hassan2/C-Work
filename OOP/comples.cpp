#include<iostream>
using namespace std;
class complex{
private:
int real;
int imag;
public:
void getvalues()
{
    cout<<"Enter the real value: "<<endl;
    cin>>real;
    cout<<"Entee the imaginiary value: "<<endl;
    cin>>imag;
}
complex operator+(complex c)
{
    complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
}
complex operator-(complex c)
{
    complex temp;
    temp.real = real - c.real;
    temp.imag = imag - c.imag;
    return temp;
}
void showsum()
{
    cout<<real<<" + "<<imag<<"i"<<endl;
}
void showsub()
{
    cout<<real<<" - "<<imag<<"i"<<endl;
}
};
int main()
{
    complex c , c1 , c2;
    c1.getvalues();
    c2.getvalues();
    c = c1 + c2;
    cout<<":::::ADDITION:::::"<<endl;
    c.showsum();
c = c1 - c2;
    cout<<":::::SUBTRACTION:::::"<<endl;
    c.showsub();
    
    return 0;
}