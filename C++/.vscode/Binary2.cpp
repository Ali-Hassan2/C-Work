#include <iostream>
#include <bitset>

using namespace std;

int main()
{ int b;
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
b:
    bitset<8> binary(decimal);
    cout << "The binary representation of " << decimal << " is " << binary << endl;
goto b;
    return 0;
}
