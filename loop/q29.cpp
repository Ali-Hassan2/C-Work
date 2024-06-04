#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{
    int choice;
do{
    

     int fact = 1 , n;
     cout<<"Enter the number : "<<endl;
     cin>>n;
     for (int i = 1 ; i <= n ; i++)
     {
        fact = fact*=i;
     }
     cout<<"The factorial of the given number is : "<<fact<<endl;
     cout<<"Do you want to repeat it (1 for yes 0 for No) : ";
     cin>>choice;

}while(choice==1);
getch();
return (0);
}