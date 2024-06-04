// starting your first project
// student managemen
#include<iostream>
#include<conio.h>
using namespace std;
void enter();
void show();

t


//Function Prototyping

//Menu in the main function
int main()
{
    int choice;
     while(true)
     {
        
        

cout<<"\n----------------------------------------------------------------------------------------\n"<<endl;  
cout<<"\nW E L C O M E---- T O----S T U D E N T----D A T A----M A N A G E M E N T----S Y S T E M \n"<<endl;
cout<<"\n----------------------------------------------------------------------------------------\n"<<endl;  
        
cout<<"Press 1 . For enter data of student : "<<endl;
cout<<"Press 2 . For show data of student : "<<endl;
cout<<"Press 3 . For search data of student : "<<endl;
cout<<"Press 4 . For update data of student : "<<endl;
cout<<"Press 5 . For delete data of student : "<<endl;
cout<<"Press 6 . For  Exit.  "<<endl;

cout<<"Please enter a choice : ";
cin>>choice;
     
switch(choice)
{
case 1: 
enter();
break;
case 2:
show();
break;
case 3:
// search();
break;
case 4:
// update();
break;
case 5:
// del();
break;
case 6:
exit(0);
break;
default :

    cout<<"Invalid choice."<<endl;
        

    return(0);
    getch();
}
     }
}
//functions definitions

string name[20] , rollno[20] , contct[20] , crs[20];
int total;
void enter()
{
int choice;
    cout<<"\nHow much students data do you want to enter : "<<endl;
    cin>>choice;
    if(total == 0)
    {
    total = total + choice;
    
    for(int i = 0 ; i < choice ; i++)
    {
        cout<<"\nEnter the data of student : "<<i+1<<endl;
        cout<<"\nEnter the name : "<<name[i]<<endl;
        cin>>name[i];
        cout<<"\nEnter the roll no of student : "<<rollno[i]<<endl;
        cin>>rollno[i];
        cout<<"\nEnter the contact of student : "<<contct[i]<<endl;
        cin>>contct[i];
        cout<<"\nEnter the course of the student : "<<crs[i]<<endl;
        cin>>crs[i];
        cout<<"\n------------------------------------------------------"<<endl;
        cout<<"\nThe data of the students have been successfully added."<<endl;
        cout<<"\n------------------------------------------------------"<<endl;
    }
}
else
{
    for(int i = total ; i < total+choice ; i++)
    {
        cout<<"\nEnter the data of student : "<<i+1<<endl;
        cout<<"\nEnter the name : "<<name[i]<<endl;
        cin>>name[i];
        cout<<"\nEnter the roll no of student : "<<rollno[i]<<endl;
        cin>>rollno[i];
        cout<<"\nEnter the contact of student : "<<contct[i]<<endl;
        cin>>contct[i];
        cout<<"\nEnter the course of the student : "<<crs[i]<<endl;
        cin>>crs[i];
        cout<<"\n-----------------------------------------------"<<endl;
        cout<<"\nThe data of the students have been successfully added.\n"<<endl;
        cout<<"\n-----------------------------------------------"<<endl;

    }
}

}

void show()
{
    // using loop for showing operation
    system("cls");

    for(int i = 0 ; i < total ; i++)
    {
 cout<<"\n-----------------------------------------------"<<endl;
    cout<<"\n The data of the student : "<<i+1<<endl;
     cout<<"\n-----------------------------------------------"<<endl;
    cout<<"\nName : "<<name[i]<<endl;
    cout<<"\nRoll no : "<<rollno[i]<<endl;
    cout<<"\nContact : "<<contct[i]<<endl;
    cout<<"\ncourse : "<<crs[i]<<endl;
    cout<<"\n----------------------\n"<<endl;
    }

}