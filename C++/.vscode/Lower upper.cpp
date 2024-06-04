#include<iostream>

using namespace std;
int main()
{
    char sh;
    cout<<"Enter Alphabet : "<<endl;
    cin>>sh;
    if(sh>='a' && sh<='z')
    {
    cout<<"Entered Alphabets is in lower case."<<endl;
    }
    else if (sh>='A' && sh<='Z')
    {
        cout<<"Entered Alphabet is in upper case."<<endl;
    }
    else
    {
        cout<<"Please enter alphabets.";
    }
    return 0;
}