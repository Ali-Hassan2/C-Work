// profit and loss program......???????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
#include<sstream>
#include<vector>
using namespace std;
int main()
{


     int sp , cp , profit , loss;
     cout<<"Enter the cost price : "<<endl;
     cin>>cp;
     cout<<"Enter the selling price : "<<endl;
     cin>>sp;
     if(sp > cp)
     {
        profit = sp - cp;
        cout<<"\nYou have earned a profit :"<<endl;
        cout<<"The profit is : "<<profit<<endl;
     }
     else if(sp < cp)
     {
        loss = cp - sp;
        cout<<"\nYou have loss :\n "<<endl;
        cout<<"The loss is : "<<loss<<endl;
     }
     else 
     {
        cout<<"There is no profit or no loss."<<endl;
     }


getch();
return (0);
}