#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
struct bookinfo
{
   int num[5];
   string name[5];
   double size[5];

};
void alibhai( bookinfo s , bookinfo arr1[5] , bookinfo arr2[5] , bookinfo arr3[5])
{
    for(int i = 0 ;i  < 5 ; i++)
    {
        cout<<"Enter the number of book "<<i+1<<" : "<<endl;
        cin>>s.num[i];
        cout<<"Enter the name of the "<<i+1<<" book : "<<endl;
        cin>>s.name[i];
        cout<<"Enter the size of the book "<<i+1<<" : "<<endl;
        cin>>s.size[i];
    }
}

int main()
{
    bookinfo a ,  num1[5] , num2[5] , num3[5] ;   
    
alibhai(a , num1 , num2 ,num3 );

     


getch();
return (0);
}