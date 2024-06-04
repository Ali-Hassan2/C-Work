#include<iostream>
using namespace std;

int main()
{
int mathmarks[4];
mathmarks[0]=343;
mathmarks[1]=443;
mathmarks[2]=563;
mathmarks[3]=663;
cout<<endl;
cout<<sizeof(mathmarks);
mathmarks[6]=566;
 mathmarks[8]=4545;
 cout<<endl;
cout<<sizeof(mathmarks);
cout<<mathmarks[0]<<endl;
cout<<mathmarks[1]<<endl;
cout<<mathmarks[2]<<endl;
cout<<mathmarks[3]<<endl;
cout<<mathmarks[6]<<endl;
cout<<mathmarks[8]<<endl;
return (0);
}