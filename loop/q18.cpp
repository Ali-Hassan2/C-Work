//1 + 1/4 + 1 / 8 + ........... + 1 / 100; by do while
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{
            double r = 4.0;
        double c = 1.0;
    do
    {

        c = c + 1.0/r;
        c = c + 4;
    } while (r <= 100);
cout<<"The Result is = "<<c<<endl;
    


     


getch();
return (0);
} 