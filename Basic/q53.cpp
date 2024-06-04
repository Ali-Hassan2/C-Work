//  Write a C++ program to compute the sum of the two given integers and
//   count the number of digits of the sum value.....????
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
int main()
{


     int x , y;
     while(cin>>x>>y)
     {
        stringstream str1;
        str1<<x+y<<endl;
        cout<<str1.str().size()<<endl;
     }


getch();
return (0);
}