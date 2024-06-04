#include<iostream>
#include <iomanip>
#include<math.h>
#include<string>
using namespace std;
void welcome();
void hotel_name();
void sign_in();
void menu();
void room_cost();
int cnic_validation(long long int a);
int main()
{
   welcome();              // goto line # 
   hotel_name();           // goto line # 
   system("pause");
    system("cls");
    hotel_name();            // goto line # 
    sign_in();            // goto line # 
     menu();            // goto line # 
    room_cost();            // goto line # 
    return 0;
}
void welcome()    
{
    int i =1;        // it is used for loops
    cout<<endl<<endl;
    for(;i<30;i++)
       cout<<"* ";    
    cout<<endl<<endl;      // loop body ends here
    cout<<"\t\tWelcome to our project :-)";
    cout<<endl<<endl;
    for(i=1;i<30;i++)
       cout<<"* ";
    cout<<endl<<endl;       // loop body ends here
    system("pause");          // it is used to pause screen
    system("cls");            // it is used to remove everyyhing from output and move cursor to top left side 

}
void hotel_name()
{
    int i =1;                 // it is used for loops
    cout<<endl<<endl;
    for(;i<28;i++)
      cout<<"* ";            // body of loop
    cout<<endl<<endl;      
    cout<<"\t\t** Sareena Hotel **";
    cout<<endl<<endl;
    for(i=1;i<28;i++)
       cout<<"* ";           // body of loop
    cout<<endl<<endl;
}
void sign_in()
{
    system("cls");
    long long int CNIC[2];      //  variables used for sign in and sign up
    string password[2];        //  variables used for sign in and sign up
    int Again;            // goto function variables
    int choice;          // used to get value from user for menu
    int exit;           // goto function variables
   do                  
              // do while loop is used to show menu
   {  
    Again:        // goto function from line # 
    system("cls");
    cout<<"Enter 1 to sign up\nEnter 2 to sign in\nEnter 0 to exit\n";
        cin>>choice;
    switch(choice)
    {
        case 1:
        {
            int pass;   // goto statement variable
           pass:          
          // account making
          cout<<"\tMake Your Account\n\n";
          cout<<"Enter CNIC:\t\t";
	      cin>>CNIC[0];
	      cout<<"Enter password:\t\t";
          cin.ignore();
	      getline(cin,password[0]);
          cin.ignore();
          long long int cnic=CNIC[0];
          if(cnic_validation(cnic)!=13)
          {
              cout<<"\nInvalid CNIC or Password :(\n";
              system("pause");
              system("cls");
              goto pass;          // line # 
          }
          else
          {
              cout<<"\nYour account have made :)\n\n";
              system("pause");
              system("cls");
          }
          break;
        }
        case 2:
        {
            // user authentication
int again;       // goto statement variable
again:            // from line 
system("cls");
cout<<"\tUser Authentication\n\n";
    cout<<"Enter CNIC:\t\t";
	cin>>CNIC[1];
	cout<<"Enter pasword:\t\t";
    cin.ignore();
	getline(cin,password[1]);
    cin.ignore();

if((CNIC[1]==CNIC[0])&&(password[1]==password[0]))
{
    cout<<"Logged in successfully :-)\n";
    system("pause");
        system("cls");
}
else
{
    cout<<"Wrong CNIC or password!\n";
     system("pause");       
    goto again;         // line # 
}
break;
        }
        case 0:
        {
            cout<<"\nYou exited";
            goto exit;        // line # 
            break;
        }
        default:
        {
            cout<<"\nWrong input\n";
            system("pause");
             goto Again;       // line # 
             break;
        }
    }
   }
   while(choice!=0);
   exit:
   int a;
   cout<<endl;
}
void menu()
{
    system("pause");
    system("cls");
cout<<"\nFloor 01:"<<setw(37)<<"Floor 02:"<<setw(35)<<"Floor 03:"<<endl<<endl;    // headings
cout<<"|"<<setw(10)<<"Room(s)"<<setw(5)<<"|"<<setw(15)<<"Price Per Day"<<setw(5)<<"|";  //headings
cout<<"|"<<setw(10)<<"Room(s)"<<setw(5)<<"|"<<setw(15)<<"Price Per Day"<<setw(5)<<"|";    //headings
cout<<"|"<<setw(10)<<"Room(s)"<<setw(5)<<"|"<<setw(15)<<"Price Per Day"<<setw(5)<<"|"<<endl;  //headings
for (int i=1;i<=5;i++)
 {
 cout<<"|"<<setw(8)<<i<<setw(7)<<"|"<<setw(10)<<"$70"<<setw(10)<<"|";    // 1st floor first 5 rooms
  cout<<"|"<<setw(8)<<i+10<<setw(7)<<"|"<<setw(10)<<"$50"<<setw(10)<<"|";  //2nd floor first 5 rooms
   cout<<"|"<<setw(8)<<i+20<<setw(7)<<"|"<<setw(10)<<"$30"<<setw(10)<<"|"<<endl;  //3rd floor first 5 rooms
 }
 for (int i=6;i<=10;i++)
 
    {
    cout<<"|"<<setw(8)<<i<<setw(7)<<"|"<<setw(10)<<"$60"<<setw(10)<<"|";  //1st floor next 5 rooms
    cout<<"|"<<setw(8)<<i+10<<setw(7)<<"|"<<setw(10)<<"$40"<<setw(10)<<"|";   // 2nd floor next 5 rooms
    cout<<"|"<<setw(8)<<i+20<<setw(7)<<"|"<<setw(10)<<"$20"<<setw(10)<<"|"<<endl;  //3rd floor next 5 rooms */
     }
cout<<endl<<"Reserved Rooms:"<<endl;
cout<<"\t Floor 01: 4,8"<<endl;
cout<<"\t Floor 02: 13"<<endl;
cout<<"\t Floor 03: 22,27"<<endl;
system("pause");
system("cls");
}
void room_cost()
{
    int num, days;            
    int choice;
    int wrong;       // goto statement variable
    long long sum=0;
    cout<<"How many rooms you want to reserve: ";
    cin>>num;
    cout<<"For how many days: ";
    cin>>days;
    for(int i=1;i<=num;i++)
    {
        wrong:          // line # 
        cout<<"Enter room no "<<i<<" : ";
        cin>>choice;
        switch(choice)
        {
           case 1:
           case 2:
           case 3:
           case 5:
           {
             sum+=(days*70);
             break;
           }
           case 6:
           case 7:
           case 9:
           case 10:
           {
            sum+=(days*60);
            break;
           }
           case 11:
           case 12:
           case 14:
           case 15:
           {
            sum+=(days*50);
            break;
           }
           case 16:
           case 17:
           case 18:
           case 19:
           case 20:
           {
            sum+=(days*40);
            break;
           }
           case 21:
           case 23:
           case 24:
           case 25:
           {
            sum+=(days*30);
            break;
           }
           case 26:
           case 28:
           case 29:
           case 30:
           {
            sum+=(days * 20);
            break;
           }
           case 4:
           case 8:
           case 13:
           case 22:
           case 27:
           {
            cout<<"\nRoom is already reserved :-(\nSelect another room\n\n\n";
            goto wrong;
            break;
           }
           default:
           {
            cout<<"Wrong input";
            break;
           }
        }
    }
    cout<<"\nTotal cost of room is : "<<sum;
}
int cnic_validation(long long int a)
{
     int count=0;
    while(a!=0)      
    {
        a/=10;
        count++;
    }
    return count;
}
