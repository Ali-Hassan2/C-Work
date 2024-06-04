#include <iostream>
#include <conio.h>
#include <math.h>
#include <climits>
using namespace std;

int main()
{
    const int size = 20;
    int arr[size];
    int s = -1;
    int n = 0;

    // Get input values from user until -1 is entered or the array is full
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a value (-1 to stop): " << endl;
        cin >> n;
        if (n != -1)
        {
            arr[i] = n;
            s = i; // Track the last index with a valid value
        }
        else
        {
            break;
        }
    }

    // Print the array contents
    for (int i = 0; i <= s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Add a value at the end of the array
    cout << "Enter a value to add at the end: " << endl;
    cin >> n;
    if (s == size - 1)
    {
        cout << "Array is full." << endl;
    }
    else
    {
        s++;
        arr[s] = n;
        cout << "Value added at the end." << endl;
    }

    // Add a value at the start of the array
    cout << "Enter a value to add at the start: " << endl;
    cin >> n;
    if (s == size - 1)
    {
        cout << "Array is full." << endl;
    }
    else
    {
        s++;
        for (int i = s; i > 0; i--)
        {
            arr[i] = arr[i-1]; // Shift all elements to the right
        }
        arr[0] = n; // Add the new value at the start
        cout << "Value added at the start." << endl;
    }

    // Search for a value in the array
    cout << "Enter a value to search for: " << endl;
    cin >> n;
    bool found = false;
    for (int i = 0; i <= s; i++)
    {
        if (arr[i] == n)
        {
            cout << "Value found at index " << i << "." << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Value not found." << endl;
    }

    // Delete the last value from the array
    if (s < 0)
    {
        cout << "Array is empty." << endl;
    }
    else
    {
        s--;
        cout << "Last value deleted." << endl;
    }

    // Print the final array contents
    for (int i = 0; i <= s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    getch();
    return 0;
}
 