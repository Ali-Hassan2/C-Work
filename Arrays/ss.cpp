#include <iostream>
using namespace std;

int nonrepeat(int arr[], int n) {
    int counter[n] = {0}; 
    for (int i = 0; i < n; i++) {
        counter[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (counter[arr[i]] == 1) {
            return arr[i];
        }
    }
    return -1;
}
int main() {
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0 ; i < n ; i++)
    {
        cout<<"Enter the number : "<<i+1<<endl;
        cin>>arr[i];
    }
    cout<<"The non repeating number is give :: "<<endl;
    cout<<"\n-------------------------------------"<<endl;
    cout << nonrepeat(arr, n); 
    return 0;
}