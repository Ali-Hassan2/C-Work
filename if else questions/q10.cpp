// to check weather the enterd number is lowercase or uppercase
#include<iostream>
using namespace std;

int main()
{
char x;
cout<<"Enter the value : "<<endl;
cout<<"------------------"<<endl;
cin>>x;
if(x>='a'&& x<='z')
{
    cout<<"The enterd letter is a lowercase letter.";
}
else if(x>='A'&& x<='Z')
{
    cout<<"Entered letter is uppercase letter.";
}
else{
    cout<<"This is not a letter. Bri chawal mari hai apny."<<endl;
}
return (0);

}