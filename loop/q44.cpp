// q29 from book
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{

double odd , even , prime , p;
char choice = 'y';
odd = even = prime = 0;
int n;
while(choice != 'n' && choice != 'N')
{
    cout<<"Enter the number : "<<endl;
    cin>>n;
    if(n % 2 == 0)
    {
        cout<<"Number is even : "<<endl;
        even++;
    }
    else
    {
        cout<<"Number is odd : "<<endl;
        odd++;
    }
    p = 1;
    for(int i = 2 ; i <= n / 2  ; i++)
    
        if(n%i==0)
        {
            p = 0;
            break;
        }
        if(p==1)
        {
            cout<<"It is a prime number.."<<endl;
            prime++;
        }
        else
        {
            cout<<"It is a composite number.."<<endl;
        }
cout<<"Enter N to terminate."<<endl;
cin>>choice;
    


}
cout<<"The number of odd numbers is : "<<odd<<endl;
cout<<"The number of even numbers is : "<<even<<endl;
cout<<"The number of prime numbers is : "<<prime<<endl;



getch();
return (0);
}