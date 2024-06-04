#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


    //  clrscr();
     char ch;
     cout<<"===========================\n";
     cout<<"     Movies Categories\n";
     cout<<"===========================\n";
     cout<<"A. For Adventure Movies ."<<endl;
     cout<<"C. For Comedy Movie."<<endl;
     cout<<"F. For Family Movie."<<endl;
     cout<<"H. For Horror Movie."<<endl;
     cout<<"S. For Science Fiction Movie."<<endl;
     cout<<"E. For Exit.."<<endl;
     cout<<"\n----------------------------------"<<endl;
     cout<<"Please enter a choice : "<<endl;
     cin>>ch;


     switch(ch)
     {
        case 'A':
        {
            cout<<"You have selected for the Adventure Movie."<<endl;
        }
        case 'C':
        {
            cout<<"You have selected for Comedy Movie."<<endl;
        }
        case 'F':
        {
            cout<<"You have selected for Family Movie."<<endl;
        }
        case 'H':
        {
            cout<<"You have selected for Horror Movie."<<endl;
        }
        case 'S':
        {
            cout<<"You have selected for Science Fiction Movie."<<endl;
        }
        case 'E':
        {
            cout<<"\nThank You For Visiying Us.....!!!!\n";

            exit(0);
        }
     }



getch();
return (0);
}