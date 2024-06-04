#include <iostream>
#include <conio.h>
#include <math.h>
#include <climits>
using namespace std;
// so always declare array of the larger size so that the free space must be present
// always use a variable to check the size of the array so that it may count the cin
// insertion may included 3 cases if user says that inserta valuee at 0 index

int main()
{
    const int size = 20;
    int arr[size];
    int s = -1;
    int n = 0;
    for (int i = 0; i < size; i++)
    {

        cout << "Enter the value : " << endl;
#include <iostream>
#include <conio.h>
#include <math.h>
#include <climits>
using namespace std;
        // so always declare array of the larger size so that the free space must be present
        // always use a variable to check the size of the array so that it may count the cin
        // insertion may included 3 cases if user says that inserta valuee at 0 index

        int main()
        {
            const int size = 20;
            int arr[size];
            int s = -1;
            int n = 0;
            for (int i = 0; i < size; i++)
            {

                cout << "Enter the value : " << endl;
                cin >> n;
                if (n != -1)
                {
                    arr[i] = n;

                    s++;
                }
                else
                {
                    break;
                }
            }
            for (int i = 0; i <= s; i++)
            {
                cout << endl
                     << arr[i];
            }
            cout << "for entering the value at last : " << endl;
            cin >> n;
            s++;
            arr[s] = n;
            for (int i = 0; i <= s; i++)
            {
                cout << endl
                     << arr[i];
            }

            getch();
            return (0);
        }
        cin >> n;
        if (n != -1)
        {
            arr[i] = n;

            s++;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i <= s; i++)
    {
        cout << endl
             << arr[i];
    }
    cout << "for entering the value at last : " << endl;
    cin >> n;
    s++;
    arr[s] = n;
    for (int i = 0; i <= s; i++)
    {
        cout << endl
             << arr[i];
    }
    cout << "Enter the number for entering at start : " << endl;
    cin >> n;
    s++;
    int temp = s;
    for (int i = s - 1; i >= s; i--)
    {
        arr[temp] = arr[i];
        temp--;
    }
    // searching in the array of the numbers is given below

    int control = 0;
    bool flag = true;

    arr[0] = n;
    for (int i = 0; i <= s; i++)
    {
        if (arr[i] == n)
        {
            cout << "Present" << endl;
            control++;
            break;
        }
    }

    if (control == 0)
    {
        cout << "Not Present." << endl;
    }

    // this is the above of the searching in the array
    // now the updation

    cout<<endl<<"Deleting last number : "<<endl;
    s--;
for (int i = 0 ; i <= s ; i++)
{
    cout<<endl<<arr[i];
}

    getch();
    return (0);
} 