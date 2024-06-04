#include<iostream>
using namespace std;
int main()
{
    double add,sub,mult,div,sq,cu,a,b,per;
    cout<<"1 : Press 1 For Addition."<<endl;
    cout<<"2 : Press 2 For Subtraction."<<endl;
    cout<<"3 : Press 3 For Multiplication."<<endl;
    cout<<"4 : Press 4 For Division."<<endl;
    cout<<"5 : Press 5 For Square."<<endl;
    cout<<"6 : Press 6 For Cube."<<endl;
    cout<<"7 : Press 7 For Percentage."<<endl;
    cout<<"8 : Press 8 For Exit Menu."<<endl;
    int choice;
    cout<<"Please Select a Number : "<<endl;
    cin>>choice;
    switch (choice)
    {
        case 1:
        cout<<"You can add two numbers here."<<endl;
        cout<<"Please Enter First Number :"<<endl;
        cin>>a;
        cout<<"Please Enter Second Number :"<<endl;
        cin>>b;
        add=a+b;
        cout<<"The Addition of Two Numbers is = "<<add<<endl;
        break;
       case 2:
       cout<<"You can Subtract two numbers here."<<endl;
       cout<<"Please Enter First Number :"<<endl;
       cin>>a;
       cout<<"Please Enter Second Number :"<<endl;
       cin>>b;
       sub=a-b;
       cout<<"The Subtraction Of Two Number is = "<<sub<<endl;
       break;
       case 3:
        cout<<"You can Multiply two numbers here."<<endl;
       cout<<"Please Enter First Number :"<<endl;
       cin>>a;
       cout<<"Please Enter Second Number :"<<endl;
       cin>>b;
       mult=a*b;
       cout<<"The Subtraction Of Two Number is = "<<mult<<endl;
       break;
       case 4:
        cout<<"You can Divide two numbers here."<<endl;
       cout<<"Please Enter First Number :"<<endl;
       cin>>a;
       cout<<"Please Enter Second Number :"<<endl;
       cin>>b;
       div=a/b;
       if(b==0)
       {
        cout<<"Incorrect division."<<endl;
       }
       else
       {cout<<"The Division Of Two Number is = "<<div<<endl;
       }
       break;
       case 5:
        cout<<"You can find square of one numbers here."<<endl;
       cout<<"Please Enter First Number :"<<endl;
       cin>>a;
       sq=a*a;
       cout<<"The Square Of Number is = "<<sq<<endl;
       break;
       case 6:
       cout<<"You can find Cube of one numbers here."<<endl;
       cout<<"Please Enter First Number :"<<endl;
       cin>>a;
       cu=a*a*a;
       cout<<"The Cube Of Number is = "<<cu<<endl;
       break;
       case 7:
       cout<<"You can Find Percentage of two numbers here."<<endl;
       cout<<"Please Enter First Number :"<<endl;
       cin>>a;
       cout<<"Please Enter Second (second is total) Number :"<<endl;
       cin>>b; 
       per=a/b*100;
       cout<<"The Percentage Of Two Numbers is = "<<per<<endl;
       break;
       case 8:
          exit(0);
       
    default:
        break;
    }
    return 0;
}