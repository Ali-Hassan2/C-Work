#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
void sp(int arr[] , int n)
{
    int sum = 0 , prod = 1 , i ;
    for ( i = 0 ; i < n ; i++)
    {
        cout<<"Enter the ( "<<i+1<<" ) number : "<<endl;
        cin>>arr[i];
sum = sum + arr[i];
prod = prod * arr[i];
    }
cout<<"The sum is = "<<sum<<endl;
cout<<"\n------------------------------\n"<<endl;
cout<<"The product is = "<<prod<<endl;

}
int main()
{
 int n;
 cout<<"Enter the size of the array : "<<endl;
 cin>>n;

    int arr[n];

    sp(arr , n);



     


getch();
return (0);
}