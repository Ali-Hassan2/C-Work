// Write a program in C++ to calculate the sum of all even and odd numbers in an array. Go to the editor
// Sample Output:
// Original array: 1 2 3 4 5 6 7 8
// Sum of all even and odd numbers: 20,16.......???????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
using namespace std;
int main()
{

int esum = 0 , odsum=0;
     int arr[9];
     for(int i = 0 ; i < 9 ; i++)
     {
        cout<<i<<endl;
        if(i%2==0)
        {
            esum = esum + i ;
        }
        if(i%3==0)
        {
            odsum = odsum + i;
        }
          
     }
     cout<<"The even usum and odd sum is : "<<esum<<" and "<<odsum<<endl;


getch();
return (0);
}