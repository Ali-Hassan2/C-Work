// Write a program in C++ to swap two numbers. Go to the editor
// Sample Output:
// Swap two numbers :
// -----------------------
// Input 1st number : 25
// Input 2nd number : 39
// After swapping the 1st number is : 39
// After swapping the 2nd number is : 25
#include<iostream>
using namespace std;
int main()
{


     int num1 , num2 , temp;
cout<<"Enter a number1 : "<<endl;

cin>>num1;

cout<<"Enter a number2 : "<<endl;

cin>>num2;

temp = num2;
num2 = num1;
num1 = temp;

// after swapping the result output is given
cout<<"After swaping the first number : "<<num1<<endl;
cout<<"---------------------------------"<<endl;
cout<<"After swaping the second number : "<<num2<<endl;

return (0);
}