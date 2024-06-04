// declare an array alpha[20]
// initilize an array beta[20];
// declare an array gamma[20];
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


     int alpha[20];
     int beta[20] = {1,2,2,3,4,5,6,3,4,3,2,2,4,5,5,43,5,3,2,5};
     int gamma[20];
     for (int i = 0 ; i < 20 ; i++)
     {
        cout<<"Enter the value in alpha :"<<endl;
         cin>>alpha[i];
         cout<<"-------------------------"<<endl;
         
     }
     for (int j = 0 ; j < 20 ; j++)
     {
        cout<<"\n-----------------------\n "<<endl;
     cout<<"The value of beta is :"<<endl;
         cout<<beta[j];
     }
     for (int i = 0 ; i < 20 ; i++)
     {
        gamma[i] =alpha[i] + beta[i];
        cout<<"The sum of alpha : "<<i+1<<"and of beta  : "<<i+1<<gamma[i]<<endl;

     }
    


getch();
return (0);
}