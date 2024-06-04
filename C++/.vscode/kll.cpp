#include <iostream>
#include <cmath>
using namespace std;

void oddOrEven(int n) {
  if (n % 2 == 0) {
    cout << n << " is even" <<endl;
  } else {
    cout << n << " is odd" <<endl;
  }
}

int factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main() {
  while (true) {
    cout << "Menu:" <<endl;
    cout << "1. Odd or even" <<endl;
    cout << "2. Factorial of the number" <<endl;
    cout << "3. Exit" <<endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
      int n;
      cout << "Enter a number: ";
      cin >> n;
      oddOrEven(n);
    } else if (choice == 2) {
      int n;
      cout << "Enter a number: ";
      cin >> n;
      cout << "The factorial of " << n << " is: " << factorial(n) <<endl;
    } else if (choice == 3) {
      break;
    } else {
      cout << "Invalid choice. Please try again."<<endl;
    }
  }

  return 0;
}
