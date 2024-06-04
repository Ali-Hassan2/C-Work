#include<iostream>
using namespace std;
int pres(int arr[] , int n)
{
   int i;
   int num;
   
   for ( i = 0 ; i < n ; i++)
   {
      cout<<"Enter the number : "<<endl;
      cin>>arr[i];
   }
   cout<<"Enter the number which you want to search : "<<endl;
   cin>>num;
   for(int i =  0 ; i < n ;i++)
   {
   if (arr[i] == num)
   {
           
           cout<<"Present."<<endl;
return(0);
   }
   }
   cout<<"Not present."<<endl;
}
int main()
{
   
int n;
cout<<"Enter the size of the array : "<<endl;
cin>>n;
int arr[n];
   pres(arr , n);

return (0);
}