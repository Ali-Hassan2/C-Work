#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
// so always declare array of the larger size so that the free space must be present 
// always use a variable to check the size of the array so that it may count the cin
// insertion may included 3 cases if user says that inserta valuee at 0 index 

int main()
{
    const int size = 20 ;
    int arr[size];
int s = -1;
        int n  = 0;
    for (int i = 0 ; i < size ; i++)
    {

        cout<<"Enter the value : "<<endl;
        cin>>n;
        if (n != -1)
        {
            arr[i] = n ;

            s++;
        } 
        else
        {
            break;
        }

    }
    for (int i = 0 ; i <= s ; i++)
    {
        cout<<endl<<arr[i];
    }
    cout<<"for entering the value at last : "<<endl;
cin>>n;
s++;
arr[s] = n;
    for (int i = 0 ; i <= s ; i++)
    {
        cout<<endl<<arr[i];
    }

     


getch();
return (0);
}