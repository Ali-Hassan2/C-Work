// cutomize the previous program and give choice Y and N if any student has a medical problem press Y and "Npot able to sit in exam"
// if press N "Able to sit in exam".....???
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
char choice;
cout<<"Do you have any Medical issue (Y OR N) : "<<endl;
cin>>choice;
if(choice=='y'|| choice=='Y')
{
    cout<<"---------------------------"<<endl;
    cout<<"Minimum percentage required is 75%"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"Sorry, You are not able to sit in exam."<<endl;
}
else{
    cout<<"You are able to sit in exam. If you have not problem in attendance percentage."<<endl;
}
if(per<75)
{
    cout<<"---------------------------"<<endl;
    cout<<"Minimum percentage required is 75%"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"Your percentage is : "<<per<<endl;
cout<<"--------------------------------------------------------------"<<endl;
cout<<"You are not able to sit in exam because shortage of attendence.";
}
else
{
    cout<<"Your percentage is : "<<per<<endl;
    cout<<"---------------------"<<endl;
    cout<<"You are able to sit in exam."<<endl;
}

return (0);
}