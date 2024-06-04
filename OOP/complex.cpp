#include<iostream>

using namespace std;

class complex{

    private:
    int real;
    int imag;

    public:

    complex()
    {

    }
    complex(int real, int imag)
    {
        this->real =real;
        this->imag =imag;
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
        temp.real= real + c.real;
        temp.imag= real + c.imag;
        return temp;
    }

    void sum()
    {
        
    }
}