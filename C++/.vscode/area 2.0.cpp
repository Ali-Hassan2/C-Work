#include <iostream>
#include <math.h>
using namespace std;
void area( )
{
    double a,b,c,area1,s;
    cout<<"Enter the vlaues.";
    cin>>a>>b>>c;
    s=a+b+c/2;
    area1 = sqrt (s*(s-a)*(s-b)*(s-c));
    cout<<"Area is : "<<area1<<endl; 

}
int main()
{
    area ();
    return 0;
}