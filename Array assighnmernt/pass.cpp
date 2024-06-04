#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{
    string un ;
    int pass;
    int att = 1;
    while (att <= 3 )
    {
    cout<<"Enter the username : "<<endl;
    cin>>un;
    
    cout<<"Enter the password : "<<endl;
    cin>>pass;
    if ( pass == 786 && un == "ali")
    {


     int a , b;
     cout<<"\n---------------------Welcome------------\n"<<endl;
cout<<"Enter the number : "<<endl;
cin>>a;
cout<<"Enter the number : "<<endl;
cin>>b;
cout<<"The sum is = "<<a+b<<endl;
    }
    else
    {
        cout<<"\nUsername and Password does not match."<<endl;
    }
    att++;
    cout<<"You have 3 attempts. So please Try again. "<<endl;
    }
getch();
return (0);
}