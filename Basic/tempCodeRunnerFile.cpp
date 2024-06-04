// q17 from book
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     char con;
     double val;
     cout<<"I. For Inches."<<endl;
     cout<<"G. For Gallons."<<endl;
     cout<<"M. For Miles."<<endl;
     cout<<"P.For Pounds."<<endl;
     cout<<"E.For Exit..."<<endl;
     cout<<"Enter the choice for conversions."<<endl;
     cin>>con;

     switch(con)
     {
        case 'I':
        {
                 cout<<"Enter the Value : "<<endl;
     cin>>val;
            cout<<"The amount in Inches is : "<<val*0.394<<endl;
            break;
        }
        case 'G':
        {
                 cout<<"Enter the Value : "<<endl;
     cin>>val;
            cout<<"In the Gallons is : "<<val*0.264<<endl;
        break;
        }
        case 'M':
        {
                 cout<<"Enter the Value : "<<endl;
     cin>>val;
            cout<<"In the Miles is : "<<val*0.622<<endl; 
        break;
        }
        case 'P':
        {
                 cout<<"Enter the Value : "<<endl;
     cin>>val;
            cout<<"In the Pounds is : "<<val*2.2<<endl;
        break;
        }
        case 'E':
        {
            cout<<"Thank You For Visiting Us..!!!"<<endl;
            exit(0);
        
        }
        default :
        {
            cout<<"Invalid choice..."<<endl;
        }
     }


getch();
return (0);
}