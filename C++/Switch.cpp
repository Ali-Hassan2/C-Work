// By switch statment
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Tell me your age :"<<endl;
    cin>>age;

    switch(age)
    {
        case 18:{
        cout << "You are Eighteen"<<endl;
        break;
        }
        case 45:{
        cout<<"You are Fourty five"<<endl;
        break;
        }
        case 32:{
            cout<<"You are thirty two."<<endl;
            break;
        } 
        default:
        cout<<"you are not yet born."<<endl; 
    }
    cout<<"Savage by switch statement."<<endl;
}