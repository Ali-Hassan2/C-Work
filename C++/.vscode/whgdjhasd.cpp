#include<iostream>
using namespace std;


int main(){
    double a;
   int fact=1;
cout<<"enter";
cin>>a;
for (int i = 1; i <= a; i++)
{
 fact = fact*i;

}
cout<<"Fact = "<<fact;
    return 0;
}