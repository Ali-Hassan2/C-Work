//  Write a program in C++ to find the area of any triangle using Heron's Formula. Go to the editor
// Sample Output:
// Find the area of any triangle using Heron's Formula :
// ----------------------------------------------------------
// Input the length of 1st side of the triangle : 5
// Input the length of 2nd side of the triangle : 5
// Input the length of 3rd side of the triangle : 5
// The area of the triangle is : 10.8253.....????
#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int a, b, c, s;
    double area;
    cout << "Enter the side : " << endl;
    cin >> a;
    cout << "Enter the side : " << endl;
    cin >> b;
    cout << "Enter the side : " << endl;
    cin >> c;
    s = (a + b + c) / 2;
    area = s * sqrt((s - a) + (s - b) + (s - c));
    cout << "The area of triangle by Heron's formula : " << area << endl;

    return (0);
}