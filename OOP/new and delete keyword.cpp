#include<iostream>
#include<conio.h>
using namespace std;
                   
int main()
{
     int a = 4;
     int* ptr = &a;
     cout<<"The value of the a is : "<<*(ptr)<<endl;

     // the new keyword 
    //  is nothing but the new operator will allocate the memory in the heap
    int* p = new int(40);
    // Allocating the array
    // here the only syntax changes
    int* arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    // Here it has given the values and now if i want to delete the containing block then i will use the 
    // delete operator i some given syntax delete [] arr;
    delete [] arr;
    cout<<"The value of arr[0] is: "<<arr[0]<<endl;
    cout<<"The value of arr[1] is: "<<arr[1]<<endl;
    cout<<"The value of arr[2] is: "<<arr[2]<<endl;
// It is dynamically allocated memory

getch();
return (0);
}