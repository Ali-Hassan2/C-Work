#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
#include<string>
using namespace std;
int main()
{
    
    int att = 1;
    while(att <= 3)
    {

    string un;
    int password;
    cout<<"Enter the username : "<<endl;
    cin>>un;


cout<<"Enter the password : "<<endl;
cin>>password;
if (password == 786 && un == "ali")
{
     int a , b;
     cout<<"---------WELCOME------------\n"<<endl;
     cout<<"Enter the number : "<<endl;
     cin>>a;
     cout<<"Ente the number : "<<endl;
     cin>>b;
     cout<<"The sum of two numbers is : "<<a+b<<endl;
}
else
{
    cout<<"Username and password does not match."<<endl;
}
att++;
cout<<"Please Try Again."<<endl;
    }
getch();
return (0);
}