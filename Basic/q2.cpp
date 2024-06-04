// Write a program in C++ to find Size of fundamental data types. Go to the editor
// Sample Output:
// Find Size of fundamental data types :
// ------------------------------------------
// The sizeof(char) is : 1 bytes
// The sizeof(short) is : 2 bytes
// The sizeof(int) is : 4 bytes
// The sizeof(long) is : 8 bytes
// The sizeof(long long) is : 8 bytes
// The sizeof(float) is : 4 bytes
// The sizeof(double) is : 8 bytes
// The sizeof(long double) is : 16 bytes
// The sizeof(bool) is : 1 bytes........?????
#include<iostream>
using namespace std;

int main()
{
cout<<"----------------------------------------------------------"<<endl;
cout<<"----------------------------------------------------------"<<endl;
cout<<"The size of (char) is :     "<<sizeof(char)<<"  bytes. "<<endl;
cout<<"The size of (short) is :     "<<sizeof(short)<<" bytes. "<<endl;    
cout<<"The size of (int) is :     "<<sizeof(int)<<" bytes. " <<endl;    
cout<<"The size of (long) is :     "<<sizeof(long)<<" bytes. " <<endl;    
cout<<"The size of (long long) is :     "<<sizeof(long long) <<" bytes. "<<endl;    
cout<<"The size of (float) is :     "<<sizeof(float) <<" bytes. "<<endl;    
cout<<"The size of (double) is :     "<<sizeof(double) <<" bytes. "<<endl;    
cout<<"The size of (long double) is :     "<<sizeof(long double)  <<" bytes. "<<endl;   
cout<<"The size of (bool) is :     "<<sizeof(bool)<<" bytes. "<<endl;     



return (0);
}