#include <iostream>
using namespace std;

int main() {
    int num, pos_count = 0, neg_count = 0;
    char choice;

    do {
        cout << "Enter a number: ";
        cin >> num;

        if (num > 0) {
            pos_count++;
        } else if (num < 0) {
            neg_count++;
        }

        cout << "Do you want to enter another number (y/n)? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'n');

    cout << "Number of positive numbers: " << pos_count << endl;
    cout << "Number of negative numbers: " << neg_count << endl;

    return 0;
}
