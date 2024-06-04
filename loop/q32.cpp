// to show total positive and negitive numbers...???
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int pos = 0 , neg = 0  , n;
     for (int i = 0 ; n!=0 ; i++)
     {
        cout<<"Enter the number (0 to exit): "<<endl;
        cin>>n;
        if(n>0)
        {
            pos++;
        }
        if(n<0)
        {
            neg++;
        }
     }
     cout<<"The number of the positive integers is : "<<pos<<endl;
     cout<<"The number of the negative integers is : "<<neg<<endl;


getch();
return (0);
}