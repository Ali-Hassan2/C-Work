#include<iostream>
#include<conio.h>
using namespace std;
// so basically the complex numbers are : 
//1+2i
//5+10i
// so if i want to add them then the answer will be 
//6+12i
// simple algebra...
// ab ek misal ly ly k ye jo class hai ye ek city hai or ye jo function hai 
// sumcomplex ye foreign function hai yani k maybe chor ho to as a police compiler ki ye 
// zimadari hoti hai k wo sab ko check kry agr kahi b garbar lgy to usy capture 
// krly es waja sy ((friend)) ka concept use howa tha taky jesy hamain agr police 
// pakr ly to ham pta na id card dekhaty hain bilkul usi tarah to en k pass b identity hoti hai \
// k ham bhai jaan chor nhi hain hamy chor dain allah k nam pr
class complex
{
    private:
    int a, b ;
    public:
    void setnumbers(int n1 , int n2)
    {
        a = n1;
        b = n2;
    }
friend complex sumcomplex(complex o1 , complex o2);

// yaha pr ye dono dost ban gaye hai aab koi police nhi pary gi............
    void print_numbers(void)
    {
        cout<<"Your entered number is : "<<a<<" + "<<b<<"i"<<endl;
    }
};   

complex sumcomplex(complex o1 , complex o2)
{
    complex o3;
    o3.setnumbers(o1.a+o2.a , o1.b + o2.b);

    return o3;
    // the errors are because the function has not premission to the class private
    // variables tumhari himmat kesy hoi bagair ijazat k private ko chairny kbhit
    // pehly ijazat lo phir ana...
    // sumcomplex complex class ko phone kry gi yar mai tumhara dost hon pr ye
    // compilier yani k police mujy nhi chor rhi to sum complex ny phone kiya complex
    // complex ny kaha mai luikh kar bhejta ho...
}
int main()
{
    complex c1 , c2 , sum;
    c1.setnumbers(1,4);
    c1.print_numbers();

    c2.setnumbers(3,8);
    c2.print_numbers();

    sum = sumcomplex(c1,c2);
    sum.print_numbers();

     
getch();
return (0);
}

/*
Properties of the friend functions 

1. not in the scope of the class...class ka hisa nhi hai...bas private membvers ko
access krny ki ijazat di jaye

2. Sinc it is not the part of the class so it cannot be called by the 
objects of the class 
((c1.sumcomplex(int o1 , int o2))) === invalid..

3. Cannot be invoked by the help of anyother function...

4. usually contains the objects as the arguments.... na b ly koi msla nhi hai

5. can be declared in the private or the public section of the class....
koi farq nhi parta

6. It cannot access the members directly by their names and needs
object_name.member_name to access any number..
matlab k agr mai kaho (cout<<a) to es ka koi matlab nhi hai yani k mujy by object use krna
hoga as (cout<<o1.a)......

*/