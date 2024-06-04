#include<iostream>

using namespace std;

int main()
{
    // code to be here

    cout<<"This is the Bilal and umer calculator."<<endl;
    int num1;
    int num2;
    int number;
    cout<<"Enter the first number: ";                                      

   cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;

    cout<<"1. For addition."<<endl;
    cout<<"2. For the Subtration."<<endl;
    cout<<"2. For the Multiplcation."<<endl;
    cout<<"2. For the Division."<<endl;

    int choice;
    cout<<"Enter the choice: "<<endl;
    cin>>choice; 

    switch(choice)
    {
        case 1:
        {
            cout<<"The result of the "<<num1<<" and "<<num2<<" : "<<num1+num2;
            break;
        }
        case 2:
        {
            cout<<"The result of the "<<num1<<" and "<<num2<<" : "<<num1-num2;
            break;
        }
        case 3:
        {
            cout<<"The result of the "<<num1<<" and "<<num2<<" : "<<num1*num2;
            break;
        }
        case 4:
        {
            cout<<"The result of the "<<num1<<" and "<<num2<<" : "<<num1/num2;
            if (num2 == 0)
            {
                cout<<"Division cannot possible."<<endl;
            }
            break;
        }
        case 5:
        exit(0);
        default:
        {
            cout<<"Enter the valid input."<<endl;
        }

    }

    return 0;
}