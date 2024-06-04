#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    alibhai:
	int mult, fact = 1, num1,num2, temp,  res;
    char choice , option;
		cout<<"DO YU WANNA A TABLE OR FACTORIAL (t) ";
		cin>>choice;
    if (choice=='t')
		{
		 cout<<"Enter a number you want to find Table =";
		 cin>>num1;
		 for(int num=1; mult<=10; mult++)
		 {
		  res=num*mult;
		  cout<<num<<"X"<<mult<<"="<<res<<"\n";	
		 }	
		cout<<"Do you want to repeat (y/n) : "<<endl;
        cin>>option;
        if(option == 'y')
        goto alibhai;
        }
		
		else if(choice=='f')
		{
		cout<<"Enter a number you want to find Factorial =";
		 cin>>num2;	
         for(int i = 1 ; i <= num2 ; i++)
		 fact=fact*=i;
		 cout<<fact<<"\n";
         cout<<"Do you want to repeat (y/n) : "<<endl;
        cin>>option;
        if(option == 'y')
        goto alibhai;
		}
       
		getch();
}