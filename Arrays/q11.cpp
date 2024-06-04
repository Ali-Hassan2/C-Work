// Write a C++ program to update every array element by multiplication of next and previous values
//  of a given array of integers.....???
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
void multi(int nums[]  , int n )
{
    if(n <= 1)
    {
        return;
    }
    int prelement = nums[0];
    nums[0] = nums[0] * nums[1];

    for (int i = 0 ; i < n - 1 ; i++)
    {
        int curelement = nums[i];
        nums[i] = preleemnt[i] * nums[i+1];
        prelement = curelement;
    }
}
int main()
{


     


getch();
return (0);
}