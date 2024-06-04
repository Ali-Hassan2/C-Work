#include<iostream>
#include<string>
#include<unistd.h>
#include<stdlib.h>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20];
// 1 hr 30 min

int total = 0;


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
        cout<<"\nEnter the name : "<<arr1[i]<<endl;
        cin>>arr1[i];
        cout<<"\nEnter the roll no of student : "<<arr2[i]<<endl;
        cin>>arr2[i];
        cout<<"\nEnter the contact of student : "<<arr3[i]<<endl;
        cin>>arr3[i];
        cout<<"\nEnter the course of the student : "<<arr4[i]<<endl;
        cin>>arr4[i];
        cout<<"\n------------------------------------------------------"<<endl;
        cout<<"\nThe data of the students have been successfully added."<<endl;
    }
    }
    else
    {
        for(int i = total ; i < total+choice ; i++)
    {
        cout<<"\nEnter the data of student : "<<i+1<<endl;
        cout<<"\nEnter the name : "<<arr1[i]<<endl;
        cin>>arr1[i];
        cout<<"\nEnter the roll no of student : "<<arr2[i]<<endl;
        cin>>arr2[i];
        cout<<"\nEnter the contact of student : "<<arr3[i]<<endl;
        cin>>arr3[i];
        cout<<"\nEnter the course of the student : "<<arr4[i]<<endl;
        cin>>arr4[i];
        cout<<"\n-----------------------------------------------"<<endl;
        cout<<"\nThe data of the students have been successfully added.\n"<<endl;

    }

}
}
void show()
{
    for(int i = 0 ; i < total ; i++)
    {
    cout<<"\n The data of the student : "<<i+1<<endl;
    cout<<"\nName : "<<arr1[i]<<endl;
    cout<<"\nRoll no : "<<arr2[i]<<endl;
    cout<<"\nContact : "<<arr2[i]<<endl;
    cout<<"\ncourse : "<<arr4[i]<<endl;
    cout<<"\n----------------------\n"<<endl;
    }
}

void search()
{
    string rollno;
    cout<<"\nEnter the roll no of the student : "<<endl;
    cin>>rollno;
    for(int i = 0 ; i < total ; i++)
    {
        if(rollno == arr2[i]){
        cout<<"\nData of the student  :"<<i+1<<endl;
            cout<<"\nName : "<<arr1[i]<<endl;
    cout<<"\nRoll no : "<<arr2[i]<<endl;
    cout<<"\nContact : "<<arr2[i]<<endl;
    cout<<"\ncourse : "<<arr4[i]<<endl;
    cout<<"\n----------------------"<<endl;
        }
    }


}

void update()
{
    string rollno;
    cout<<"\nEnter the roll no of the student : "<<endl;
    cin>>rollno;
    for(int i = 0 ; i < total ; i++)
    {

        if(rollno == arr2[i]){
            cout<<"\nPrevious data of the student.\n";

        
            cout<<"\nName : "<<arr1[i]<<endl;
    cout<<"\nRoll no : "<<arr2[i]<<endl;
    cout<<"\nContact : "<<arr2[i]<<endl;
    cout<<"\ncourse : "<<arr4[i]<<endl;
    cout<<"\n----------------------\n"<<endl;
        cout<<"\nEnter new data : "<<endl;
        cout<<"\nName : "<<endl;
        cin>>arr1[i];
        cout<<"\nRoll no : "<<endl;
        cin>>arr2[i];
        cout<<"\nContact : "<<endl;
        cin>>arr3[i];
        cout<<"\nCourse :"<<endl;
        cin>>arr4[i];
        cout<<"\nNew data has been saved.\n"<<endl;
        cout<<"\n------------------------\n";
        
        }
    }
    



} 
void del()
{
    int option;
    string rollno;
cout<<"Pess 1 . For deleting full record : "<<endl<<endl;
cout<<"Pess 2 . For deleting specific record : "<<endl<<endl;
cin>>option;
if(option == 1)
{
    total = 0 ; 
    cout<<"Your all record has been successfully deleted....!!"<<endl;
}
if(option==2)
{
    cout<<"Enter the roll no of the student : "<<endl;
    cin>>rollno;
    for(int i = 0 ; i < total ; i++)
    {
        if(rollno==arr2[i])
        {
            for(int j = i ; j < total ; j++){
            arr1[j] = arr1[j+1];
            arr2[j] = arr2[j+1];
            arr3[j] = arr3[j+1];
            arr4[j] = arr4[j+1];
            }
                
        }
        total--;
        cout<<"Your required data has been deleted successfully.....!!!"<<endl;
    }

}

}



int main()
{
    string un;
    int pass;
    int att;
    cout<<"\nUsername = ali   -------  Password = 786"<<endl;
    cout<<"Enter the username : "<<endl;
    cin>>un;
    cout<<"Enter the password : "<<endl;
    cin>>pass;
   
    if( (un =="ali") && ( pass == 786 ))
    {

int choice;
     while(true)
     {
        
        
        
        
cout<<"\nW E L C O M E---- T O----S T U D E N T----D A T A----M A N A G E M E N T----S Y S T E M \n"<<endl;

        
cout<<"Press 1 . For enter data of student : "<<endl;
cout<<"Press 2 . For show data of student : "<<endl;
cout<<"Press 3 . For search data of student : "<<endl;
cout<<"Press 4 . For update data of student : "<<endl;
cout<<"Press 5 . For delete data of student : "<<endl;
cout<<"Press 6 . For  Exit.  "<<endl;

cout<<"Please enter a choice : "<<endl;
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
search();
break;
case 4:
update();
break;
case 5:
del();
break;
case 6:
exit(0);
break;
default :

    cout<<"Invalid choice."<<endl;
        
     

}
     }
     
return (0);
    }
    else
    {
        cout<<"Invalid username or password."<<endl;
    }
    
}
