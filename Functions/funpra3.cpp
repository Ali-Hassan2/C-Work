#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
#include<sstream>
#include<vector>
using namespace std;
void fun_static(int a)
{

}
int main()
{
int n;
cout<<"Enter a number : "<<endl;
cin>>n;
for(int i = 1 ; i <= n ; i++)
{
fun_static(i);
}

     


getch();
return (0);
}