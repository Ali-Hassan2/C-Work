#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int num = 1 , sum = 0 ;
     cout<<"------------\n";
     cout<<"num\tsum\n";
     cout<<"------------\n";
     while(num<=5)
     {
        sum = sum + num;
        cout<<num<<"\t"<<sum<<endl;
        num++;
        
     }
     cout<<"-----------\n";


getch();
return (0);
}