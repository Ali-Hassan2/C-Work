// given decimal number to binary
#include<iostream>
#include<bitset>
// here i am using another library <bitset> to change into binary
// To store and manipulate small binary numbers
// To store and manipulate flags or other boolean-like values
// To perform bitwise operations on binary numbers, such as AND, OR, XOR, and shift operations
using namespace std;
int main()
{
    int decimal;
    cout<<"Please enter a decimal number : ";
    cin>>decimal;

    bitset<8> binary(decimal);
    
    cout<<"The binary representation of "<<decimal<<" is "<<binary<<endl;
    return 0;
}