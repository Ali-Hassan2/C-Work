// q 26 from the book...
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{
    char choice;
    do{


     double sum = 0 , n ,num;
     cout<<"Enter the number which you want to enter : "<<endl;
     cin>>n;
     for (int i = 1 ; i < n ; i++)
     {
        cout<<"Enter the number : "<<endl;
        cin>>num;
        sum = sum+=num;
     }
     cout<<"The sum of the series is : "<<sum<<endl;
cout<<"Do you want to enter (Y for yes): ";
cin>>choice;
    }while(choice == 'y');
getch();
return (0);
}