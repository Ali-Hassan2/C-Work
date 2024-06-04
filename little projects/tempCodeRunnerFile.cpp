#include<iostream>
#include<conio.h>
#include<unistd.h>
using namespace std;
                   
int main()
{
    // sleep(3);
     char arr[] = {'A', 'L' , 'I' , ' ' , 'H' , 'A' , 'S' , 'S' , 'A' , 'N'};
for (int i = 0  ;  i  < 10 ; i++)
{
    cout<<arr[i];
     sleep(500);
}
     

      system("CLS");
getch();
return (0);
}