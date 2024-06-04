#include <iostream>
using namespace std;

int main() {
    char option;
    int n;
    
    do {
        
        cout  << "Enter a number for factorial table :"<<endl;;        
        cin >> n;
// nested loop for printing entered number and j for factorial of that number
        for (int i = 1; i <= n; i++) {
             int fac=1;        
            for (int j = 1; j <= i; j++) {
                fac *= j;
            }
            cout << i << " = " << fac << endl;
        }

        cout<<"Do you want to repeat (y/n) y for yes n or any other key for no."<<endl; ;       
        cin >> option;
    } while (option == 'y');

    return (0);
}
