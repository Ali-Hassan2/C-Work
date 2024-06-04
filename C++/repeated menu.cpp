#include<iostream>
using namespace std;
int main()
{
    int option,a,b;
    cout<<"Press 1: For addition."<<endl;
    cout<<"Press 2: For Sub."<<endl;
    cout<<"Press 3: For Multiplication."<<endl;
    cout<<"Press 4: For Division."<<endl;
    
    do{
        cout<<"Please Enter a choice : "<<endl;
    cin>>option;
        switch (option){
        case 1 :
        cout<<"Please enter a number : "<<endl;
        cin>>a;
        cout<<"Please enter a second number : "<<endl;
        cin>>b;
        cout<<"The sum of two numbers is = "<<a+b<<endl;
        break;

        case 2:
        cout<<"Please enter a number : "<<endl;
        cin>>a;
        cout<<"Please enter a second number : "<<endl;
        cin>>b;
        cout<<"The sub of two numbers is = "<<a-b;
        break;
        case 3:
        cout<<"Please enter a number : "<<endl;
        cin>>a;
        cout<<"Please enter a second number : "<<endl;
        cin>>b;
        cout<<"The multiplication of two numbers is = "<<a*b;
        break;
        case 4:
        cout<<"Please enter a number : "<<endl;
        cin>>a;
        cout<<"Please enter a second number : "<<endl;
        cin>>b;
        if(b==0)
        {
            cout<<"Division not possible."<<endl;
        }
        cout<<"The multiplication of two numbers is = "<<a/b;
        break;
        case 5:
        exit(0);
        break;
        default:
        cout<<"Invailed option.";}
        
    }while (option!=5);

}