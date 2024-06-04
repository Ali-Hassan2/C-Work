// Write a program in C++ to display the operation of pre and post increment and decrement. Go to the editor
// Sample Output:
// Display the operation of pre and post increment and decrement :
// --------------------------------------------------------------------
// The number is : 57
// After post increment by 1 the number is : 58
// After pre increment by 1 the number is : 59
// After increasing by 1 the number is : 60
// After post decrement by 1 the number is : 59
// After pre decrement by 1 the number is : 58
// After decreasing by 1 the number is : 57.....?????
#include<iostream>
using namespace std;

int main()
{
int num = 57;      
 cout<<"The number is : "<<num<<endl;
 num++; //(post increment by 1)
 cout<<"After post increment by 1 the number is : "<<num<<endl;
 ++num;
 cout<<"After pre increment by 1 the number is : "<<num<<endl;
 num = num + 1;
cout<<"After increasing by 1 the number is :"<<num<<endl;
num--;
cout<<"After post decrement by 1 the number is : "<<num<<endl;
--num;
cout<<"After pre decrement by 1 number : "<<num<<endl;
num = num - 1;
cout<<"After decreasing by 1 the 1 number is : "<<num<<endl;
cout<<endl;

return (0);
}
// int num = 57;      
//     cout << "\n\n Display the operation of pre and post increment and decrement :\n";
// 	cout << "--------------------------------------------------------------------\n";    
//    cout <<" The number is : " << num << endl; 
//    num++;               // increase by 1 (post-increment)
//    cout <<" After post increment by 1 the number is : " << num << endl; 
//    ++num;               // increase by 1 (pre-increment)
//    cout <<" After pre increment by 1 the number is : " << num << endl; 
//    num = num + 1;  // num is now increased by 1.
//    cout <<" After increasing by 1 the number is : " << num << endl; // 79
//    num--;               // decrease by 1 (post-decrement)
//    cout <<" After post decrement by 1 the number is : " << num << endl; 
//    --num;               // decrease by 1 (pre-decrement)
//    cout <<" After pre decrement by 1 the number is : " << num << endl; 
//    num = num - 1; // num is now decreased by 1.
//    cout <<" After decreasing by 1 the number is : " << num << endl;
//    cout << endl;
//    return 0;