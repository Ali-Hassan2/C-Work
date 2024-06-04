#include<iostream>
#include<stdlib.h>
#include<unistd.h>

using namespace std;
int main()
{
    // for avoiding garbage value initilalize variables
    int hrs = 2 , min = 50 , sec = 13;
    while(true)
    {
        system("cls");
        cout<<"---------------------------------|"<<endl;
        cout<<"|"<<hrs<<" : "<<min<<" : "<<sec<<"                     |"<<endl;
        cout<<"|--------------------------------|"<<endl;
        sec++; //increment of sec as to reach 60
        if(sec==60)
        {
            // for the delayment of loop we use another header file 
            // for systen cls we use another header file 
            min++;
            sec=1;
            if(min==60)
            // yes it is working goods
            {
                hrs++;
                min=0;
                if(hrs==60)
                {
                    hrs=1;
                }
            }
        }
    sleep(1);
    }
}