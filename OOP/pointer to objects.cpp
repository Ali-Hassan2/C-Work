// pointer to objects means that we can access the pubic members of the class by pointing the 
// object in the same way as we point other types as the pre defined types

#include<iostream>
#include<conio.h>
using namespace std;
class complex{
    private:
    int real;
    int imag;
    public:
    void setdat(int real , int imag)
    {
        this -> real = real;
        this -> imag = imag;
    }
    void getdata()
    {
        cout<<"The real number is : "<<real<<endl;
        cout<<"The imaginary number is : "<<imag<<endl;
    }

};                   
int main()
{
     //complex c1;
     //complex* ptr;
     //ptr = &c1;
    //  instead of this i can also use the arrow notation ->
    complex* ptr = new complex;
    
(*ptr).setdat(1,5);
(*ptr).getdata();
// same as it is:
ptr->setdat(3,5);
ptr->getdata(); 

// i can also make the *ptr by using the new operator
// complex* ptr = new complex;

     
getch();
return (0);
}