//reversing the numbers ........???????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
using namespace std;
int main()
{


     int a ,res;
     cout<<"Enter a number : "<<endl;
     cin>>a;
     while(a!=0)
     {
        res = a%10;
        a = a/10;
cout<<res;
     }
     


getch();
return (0);
}