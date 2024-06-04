#include <iostream>

using namespace std;

int main()
{
    int number;
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    cout << "Enter numbers (enter 0 to stop):" << endl;

    while (true) {
        cin >> number;
        if (number > 0) {
            positiveCount++;
        } else if (number < 0) {
            negativeCount++;
        } else if (number == 0) {
            zeroCount++;
        }
        if (number == 0) {
            break;
        }
    }

    cout << "Number of positive numbers: " << positiveCount << endl;
    cout << "Number of negative numbers: " << negativeCount << endl;
    cout << "Number of zeros: " << zeroCount << endl;

    return 0;
}

