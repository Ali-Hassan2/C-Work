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


//      int arr[20] , i , pos = 0, odd = 0 , eve = 0 , neg = 0 , zer = 0;
//      for(i = 0 ; i < 20 ; i++)
//      {
//         cout<<"Enter the ( "<<i+1<<" ) number : "<<endl;
//         cin>>arr[i];
//         if(arr[i] > 0)
//         {
//             pos++;
            
//              }
//              if (arr[i] < 0 )
//              {
//                 neg++;
//              }
//              if(arr[i] % 2 == 0)
//              {
//                 eve++;
//              }
//              if(arr[i] % 2 != 0 )
//              {
//                 odd++;
//              }
//              if(arr[i] == 0)
//              {
//                 zer++;
//              }
              

//      }
//      cout<<"\n-----------------------------\n"<<endl;
//      cout<<"\nThe positive numbers are : \n"<<pos<<endl;
//      cout<<"\nThe negative numbers are : \n"<<neg<<endl;
//      cout<<"\nThe even numbers are : \n"<<eve<<endl;
//      cout<<"\nThe odd numbers are : \n"<<odd<<endl; 
//      cout<<"\nThe zeros are : \n"<<zer<<endl;
// getch();
// return (0);
// }
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
void all(int arr[] )
{
    int i , pos = 0 , neg = 0 , eve = 0 , odd = 0 , zer = 0;

     

     for ( i = 0 ; i < 5 ; i++)
     {
        cout<<"Enter the ( "<<i+1<<" ) number : "<<endl;
        cin>>arr[i];

        if (arr[i] < 0)
        {
            neg++;
        } 
         if (arr[i] > 0)
        {
            pos++;
        }
         if (arr[i] % 2 == 0)
        {
            eve++;

        }
         if (arr[i] % 2 != 0)
        {
            odd++;
        }
        if(arr[i]==0)
        {
            zer++;
        }
     }
     for (int i = 0 ; i<5 ; i++)
     {
        cout<<arr[i]<<" ";
     }
          cout<<"\n-----------------------------\n"<<endl;
      cout<<"\nThe positive numbers are : \n"<<pos<<endl;
      cout<<"\nThe negative numbers are : \n"<<neg<<endl;
      cout<<"\nThe even numbers are : \n"<<eve<<endl;
      cout<<"\nThe odd numbers are : \n"<<odd<<endl; 
      cout<<"\nThe zeros are : \n"<<zer<<endl;
     


}

int main()
{
    int arr[5];
    all(arr);


     


 getch();
return (0);
}