#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int choice;
    int car = 0 , bike = 0  , rikshaw = 0 ;
    while(true){
        cout<<"\nC A R-------P A R K I N G"<<endl;
cout<<"Press 1 . For adding  car : "<<endl;
cout<<"Press 2 . For adding  bike : "<<endl;
cout<<"Press 3 . For adding  rikshaw : "<<endl;
cout<<"Press 4 . For record checking   : "<<endl;
cout<<"Press 5 . For deleting record : "<<endl;
cout<<"Press 6 . For Exit."<<endl;
cout<<"--------------------------------"<<endl;
cout<<"Please select a choice from above : "<<endl;
cout<<"------------------------------------"<<endl;
cin>>choice;
cout<<"------------------------------------"<<endl;
if(choice==1)
{
    car++;
    system("cls");
    cout<<"Car has been added."<<endl;
}
if(choice==2)
{
    bike++;
    system("cls");
    cout<<"Bike has been added."<<endl;
}
if(choice == 3)
{
    rikshaw++;
    system("cls");
    cout<<"Rikshaw has been added."<<endl;
}
if(choice == 4)
{
    // system("cls");
cout<<"Number of cars is : "<<car<<endl;
cout<<"Number of bikes is : "<<bike<<endl;
cout<<"Number of rikshaws is : "<<rikshaw<<endl;
}
if(choice==5)
{
    system("cls"); 
    car = 0 ;
    bike = 0 ;
    rikshaw = 0 ;
    cout<<"Your all record has been deleted....!!!"<<endl;
}
    
if(choice == 6)
{
    cout<<"Thanks for visiting us."<<endl;
    exit(0);
}
else{
    cout<<"Please enter valid choice."<<endl;
}
    }
// return (0);


}