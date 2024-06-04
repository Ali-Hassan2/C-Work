#include<iostream>

using namespace std;

int main(){
    int n,fac=1;
    b:
    cout<<"1. Press 1 for even odd."<<endl;
    cout<<"2. Press 2 for factorial."<<endl;
    cout<<"3. For Exit."<<endl;
    int choice;
    cout<<"Please select a choice."<<endl;
    cin>>choice;
     
    switch(choice)
    {
        case 1:
        
        cout<<"please Enter a Number."<<endl;
        cin>>n;
        if(n%2==0)
        cout<<"The number is even."<<endl;
        else{
            cout<<"The number is odd."<<endl;
        }
        goto b;
        break;
        case 2:

        
        cout<<"Please Enter a number."<<endl;
        cin>>n;
        for(int i=1; i<=n; i++)
        fac=fac*i;
        cout<<"The factorial is : "<<fac<<endl;
        goto b;
        break;
        
     case 3:
         exit(0);
         default:
         	break;
    }
    
    return 0;
}
