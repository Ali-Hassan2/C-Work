#include<iostream>
using namespace std;
class complex{
    private:
    int imag;
    int real;
    public:
    complex()
    {

    }
    complex(int real , int imag)
    {
        this -> real = real;
        this -> imag = imag;
    }
    complex operator+(complex &c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    complex operator-(complex &c)
    {
        complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
    complex operator*(complex &c)
    {
        complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);
        return temp;
    }
    complex operator/(complex &b)
    {
        complex temp;
        temp.real = (real * b.real + imag * b.imag)/(b.real*b.real + b.imag * b.imag);
        temp.imag = (imag * b.real + real * b.imag)/(b.real*b.real+b.imag*b.imag);
        return temp;
    }
    complex operator++(void)
    {
        complex temp;
        real = real + 1;
        imag = imag + 1;
        temp.real = real;
        temp.imag = imag;

        return temp;
    }
    complex operator++(int)
    {
        complex temp;
        temp.real = real;
        temp.imag = imag;

        real = real + 1;
        imag = imag + 1;
        return temp;
    }


    friend ostream& operator<<(ostream& out , const complex& c);

};
ostream& operator<<(ostream& out , const complex& c)
{
    if(c.imag >= 0)
    {
        out<<c.real <<" + "<<c.imag<<"i"<<endl;
    }
    else{
        out<<c.real<<" - "<<c.imag<<"i"<<endl;
    }
    return out;
}
int main()
{
    complex c(1,2);
    complex c2(4,8);
    cout<<"First two are: "<<c<<endl;
    cout<<"Second Numbers are: "<<c2<<endl;

    complex c3 = c + c2;
    cout<<"The Addition is : "<<c3<<endl;

    complex diff = c - c2;
    cout<<"The Difference is : "<<diff<<endl;

    complex pro = c * c2;
    cout<<"The Prouct is: "<<pro<<endl;

    try{
        complex division = c / c2;
        cout<<"The Division is: "<<division<<endl;
    }
    catch(const exception &e)
    {
        cerr<<"Error: "<<e.what()<<endl;
    }
    return 0;
}