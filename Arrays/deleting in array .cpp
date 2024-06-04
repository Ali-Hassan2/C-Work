#include <iostream>
#include <conio.h>
#include <math.h>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {4, 5, 6, 7, 8};
    int pos = 0, i;
    cout << "Enter the Position at which you eant to delete element : " << endl;
    cin >> pos;
    // now set a for loop
    for (i = 0; i < 5; i = i + 1)
    {
        arr[i + 1] = arr[i];
    }
    cout << "New array after the operation is : " << endl;
    for (i = 0; i < 4; i = i + 1)
    {
        cout << arr[i] << " ";
    }

    getch(); 
    return (0);
}