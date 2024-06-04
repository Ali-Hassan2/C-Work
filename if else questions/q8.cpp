// student must not be able to sit in class if percentage of attendance is below then 75:
//input : number of class held
//number of classes attended...??
#include<iostream>
using namespace std;

int main()
{
int clh , cla;
float per;
cout<<"The number of class held : "<<endl;
cout<<"---------------------------"<<endl;
cin>>clh;
cout<<"---------------------------"<<endl;
cout<<"The number of classes attend : "<<endl;
cout<<"---------------------------"<<endl;
cin>>cla;
per = ( cla/ (float) clh) * 100;

if(per<75)
{
    cout<<"The percentage is : "<<per<<endl;
cout<<"--------------------------------------------------------------"<<endl;
cout<<"You are not able to sit in exam because shortage of attendence.";
}
else
{
    cout<<"The percentage is : "<<per<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"You are able to sit in exam."<<endl;
}

return (0);
}