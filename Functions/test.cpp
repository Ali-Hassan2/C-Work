#include<iostream>
using namespace std;

  void reverse(int num)
    {
        int a;
        
        for(  ; num != 0 ;num = num / 10)
        {
            
        a= num % 10;
        
cout<<a;
        }
       
       
    }
int main()
{
    int n;
    cout<<"Enter a number : "<<endl;
cin>>n;
reverse(n);
  

return (0);
}