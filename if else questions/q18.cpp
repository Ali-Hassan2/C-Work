// 371 is an Armstrong number since (3*3*3 =27)+ (7*7*7=343) + (1*1*1=1) =(27+343+1)=  371.
// Armstrong number 1: 0
// Armstrong number 2: 1
// Armstrong number 3: 153 since (1*1*1=1) + (5*5*5=125) + (3*3*3=27)= (1+125+27)
// Armstrong number 4: 370
// Armstrong number 5: 371
// Armstrong number 6: 407
// Armstrong Number Program in C++ using While Loop.....?????
#include<iostream>
using namespace std;

int main()
{
int armstrong  = 0, o , y , n ;
cout<<"Enter the number to check wheter it is a Armstrong : "<<endl;
cout<<"-----------------------------------------------------"<<endl;
cin>>n;
y=n;
while(n>0)
{
    // remeber this condition and logic 
    o=n%10;
    n=n/10;
    armstrong=armstrong+o*o*o;
}
    if(armstrong==y)
    {
        cout<<"-------------------"<<endl;
        cout<<"It is a Armstrong number."<<endl;
        cout<<"--------------------"<<endl;
    }
    else
    {
        cout<<"--------------------------"<<endl;
        cout<<"It is not a Armstrong number."<<endl;
        cout<<"--------------------------"<<endl;
    }


return (0);
}