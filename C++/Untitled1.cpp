#include<iostream>
using namespace std;


    void pyr(){
    for(int i = 1 , k = 0 ; i <= 5 ; i++, k = 0)
    {
        for (int j = 1 ; j <= 5 - i ; j++)
        {
            cout<<" ";
        }
        while(k != 2*i-1)
           {
            cout<<"*";
            k++;
           }
           cout<<endl;
    }
    }
void dia()
{
    for(int i = 1 , k = 0 ; i <= 5 ; i++ , k = 0)
    {
        for(int j = 1 ; j <= 6 - i ; j++)
        {
        cout<<" ";
        }
        while(k != 2*i-1)
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
    }
    for (int i = 5 , k = 0 ; i >= 1 ; i-- , k = 0)
    {
        for (int j = 1 ; j <= 6-i ; j++)
        {
            cout<<" ";
        }
        while(k != 2*i - 1)
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
    }
}
void rec()
{
    for (int i = 1 ; i <= 4 ; i++)
    {
        for (int j =1 ; j <= 10 ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void tri()
{
    for (int i = 1 ; i <= 5 ; i++)
    {
        for (int j =1 ; j <= i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
void hsqu()
{
    for (int i = 1 ; i <= 4 ; i++)
    {
        for (int j =1 ; j <= 7 ; j++)
        {
            if(i==1 || i == 4 || j == 1 || j == 7) 
            {
            cout<<"*";
            }
            else 
            {
                cout<<" ";
            } 
        }
        cout<<endl;
    }
}
void squ()
{
    for (int i = 1 ; i <= 4 ; i++)
    {
        for (int j =1 ; j <= 6 ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void menu()
{
    b:
    cout<<"(\tMenu Launched Successfully\t)"<<endl;
    cout<<"1.Press 1 For Square.\n";
    cout<<"2.Press 2 For Hollow square.\n";
    cout<<"3.Press 3 For Pyramid.\n";
    cout<<"4.Press 4 For Diamond.\n";
    cout<<"5.Press 5 For Triangle.\n";
    cout<<"6.Press 6 For Rectangle\n";
    cout<<"7.Press 7 For Exit.\n";   
    int choice;
    cout<<"Please Enter A Number : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        squ();
        break;
        case 2:
        hsqu();
        break;
        case 3:
        pyr();
        break;
        case 4:
        dia();
        break;
        case 5:
        tri();
        break;
        case 6:
        rec();
        break;
        case 7:
          exit;
        break;
        default:
        cout<<"Enter a valid choice."<<endl;
       
    }goto b;

}
int main()
{
    menu();
    return 0;
}

