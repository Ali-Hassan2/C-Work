// declare array fifth 
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


int alpha[20]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2};
int beta[20] = {1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2};
int gama[20]= {1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2};
long tera[20];
for (int  i  = 0 ; i < 20 ; i++)
{
    tera[i] = alpha[i] * beta[i] * gama[i];
    cout<<"The product of the alpha and beta is : "<<tera[i]<<endl;
}


getch();
return (0);
}