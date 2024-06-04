#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
#include<sstream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int att = 0;
    int pass ;
    string us;
    
    while(att <= 3)
    {
   
    
    

    cout<<"Enter the username : "<<endl;
    cin>>us;
    cout<<"Enter the password  :"<<endl;
    cin>>pass;
    
    if (pass == 786 && us == "ali")
    {


     int a , b ;
     cout<<"enter a number : "<<endl;
     cin>>a;
     cout<<"enter a number : "<<endl;
     cin>>b;
     cout<<"The sum is = "<<a+b<<endl;
     break;
    }
    else
    {
        cout<<"Incorrect username or password.";
        
        
        

    }
    att++;
    cout<<"You have only 3 attempts. "<<endl;
    cout<<"\nPlease Try Again."<<endl;
    
    }
    // if(att >= 3)
    // {
    //     cout<<"You have excceeded the limit."<<endl;
    // }
getch();
return (0);
}