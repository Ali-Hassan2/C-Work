// Write a program in C++ that takes a number as input and prints its multiplication table upto 10. Go to the editor
// Sample Output:
// Print the multiplication table of a number upto 10:
// --------------------------------------------------------
// Input a number: 5
// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15
// 5 x 4 = 20
// 5 x 5 = 25
// 5 x 6 = 30
// 5 x 7 = 35
// 5 x 8 = 40
// 5 x 9 = 45
// 5 x 10 = 50.....????
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


     int n;
     cout<<"Enter a number : "<<endl;
     cin>>n;
     for(int i = 1 ; i <= 10 ; i++)
     {
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
     } 


getch();
return (0);
}