#include<iostream>
using namespace std;
int main()
{
   for(int i  = 1,k = 0  ; i <= 5 ; i++,k = 0)
   {
    for(int j = 1 ; j <= 6-i ; j++){
    cout<<" ";
   }
   while(k != 2*i-1)
   {
    cout<<"*";
    k++;
   }
   cout<<endl;
   }
   
   // baqi his a dosri video mai
    

  
    for(int i = 4 , k = 0 ; i>= 1; i--, k = 0)
    {
        for(int j = 1 ; j<=6-i ; j++){
        cout<<" ";
        }
    
    while(k!=2*i-1)
    {
    cout<<"*";
    k++;
    }
    cout<<endl;
    }
}
    

