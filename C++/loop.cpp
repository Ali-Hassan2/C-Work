#include <iostream>

int main() {
    int n;
    int even_sum ; // Running total for even integers
    int odd_sum; // Running total for odd integers

    std::cout << "Enter a set of integers (enter 0 to end):" << std::endl;
    std::cin >> n;

    while (n) {
        if (n % 2 == 0) { // n is even
            even_sum += n;
        } else { // n is odd
            odd_sum += n;
        }

        std::cin >> n;
    }

    std::cout << "Sum of even integers: " << even_sum << std::endl;
    std::cout << "Sum of odd integers: " << odd_sum << std::endl;

    return 0;
}

