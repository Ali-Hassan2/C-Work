// #include<iostream>
// #include<conio.h>
// #include<math.h>
// #include<unistd.h>
// #include<stdlib.h>
// #include<ctime>
// #include<iomanip>
// #include<sstream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main()
// {


//      int arr[10];
//      int i , num;
//      for (i = 0 ; i < 10 ; i++)
//      {
//         cout<<"Enter the ( "<<i+1<<" ) number : "<<endl;
//         cin>>arr[i];

//      }
//      cout<<"Enter the number to check wether it is present or not : "<<endl;
//      cin>>num;
//      for (int i = 0 ; i < 10; i++)
//      {
//      if(arr[i] == num)
//      {
//         cout<<"\n---------------------\n"<<endl;
//         cout<<"This number is present."<<endl;
//         cout<<"\n---------------------\n"<<endl; 
//         getch();
//         return(0);
//      }
     
//      }
     
     
//         cout<<"Not present."<<endl;
     


// getch();
// return (0);
// }
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int pres(int arr[] , int n)
{
   int i;
   int num;
   
   cout<<"Enter the size of the array : "<<endl;
   cin>>n;
   for ( i = 0 ; i < n ; i++)
   {
      cout<<"Enter the ( "<<i+1<<" ) number : "<<endl;
      cin>>arr[i];
   }
   cout<<"\n----------------------------------------\n"<<endl;
   cout<<"Enter the number which you want to search : "<<endl;
   cin>>num;
   if (arr[i] == num)
   {
           cout<<"\n---------------------\n"<<endl;
           cout<<"This number is present."<<endl;
           cout<<"\n---------------------\n"<<endl; 
return(0);
   }
   cout<<"Not present."<<endl;
}
int main()
{
   // int n;
   
int n;
int arr[n];
   pres(arr , n);


     


getch();
return (0);
}