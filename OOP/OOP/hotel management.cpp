#include <iostream>
#include <bitset>
#include <string>
using namespace std;
int main() {
    string binaryString = "01000001 "; // Binary representation of 'a'
    
    
    bitset<8> bits(binaryString);
    int decimalValue = bits.to_ulong();
    
   
    char character = static_cast<char>(decimalValue);
    
    cout << "Binary: " << binaryString << endl;
    cout << "Character: " << character << endl;
    
    return 0;
}
