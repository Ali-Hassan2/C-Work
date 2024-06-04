#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
#include<sstream>
#include<vector>
#include<fstream>
using namespace std;
void login();
void reg();
void fp();
void adddrug();
 void deliverydrug();
void updatedrug();
void searchdrug();
void deldrug();
void displaydrug();

struct addrug
{
    int pkg[100];
    string name[50];
    int srl[60];

};

int main()
{

    int choice;
    char option ;

   
//  do{
    cout<<"\t\t\t -------------------------------PHARMACUETICAL MANAGEMENT SYSTEM----------------------------------\n"<<endl;
    cout<<"\t\t\t|                                                                                                 |\n"<<endl;
    cout<<"\t\t\t -------------------------------------------------------------------------------------------------\n"<<endl;

     cout<<"\t\t\t-------------------------------------------------------------------------------------------------\n"<<endl;
     cout<<"\t\t\t-----------------------------------------  W E L C O M E  ----------------------------------------\n"<<endl;
     cout<<"\t\t\t-------------------------------------            T O          -------------------------------------\n"<<endl;
     cout<<"\t\t\t---------------------------------        L O G I N--P A G E      ----------------------------------\n"<<endl;
     cout<<"\t\t\t----------------------------------------------------------------------------------------------------\n"<<endl;

     cout<<"\t\t- Press 1 . For Login.\n"<<endl;
     cout<<"\t\t- Press 2 . For Registration.\n"<<endl;
     cout<<"\t\t- Press 3 . For Forget Password.\n"<<endl;
     cout<<"\t\t- Press 4 . For Exit.\n"<<endl;
     cout<<"\t\t------------------------------------\n"<<endl;
     cout<<"\t\tEnetr the choice : ";
     cin>>choice;

     switch (choice)
     {
        case 1:
        {
            // system ("CLS");

            login();
            break;
        }

        case 2:
        {
            // system("Cls");

            reg();

            break;
        }

    case 3:
    {
        // system ("Cls");

        

        fp();
        break;
    }

    case 4:
    {
// system ("CLS");
        cout<<"\n\t\t\tThe program has been closed successfully.\n"<<endl;
        cout<<"\n\t\t\tTHANK YOU FOR VISITING US !!!!\n"<<endl;
        exit(0);
    }

    default:
    {
        // system("CLS");
        cout<<"\n\t\t\tNot Working. Please Select a valid option."<<endl;

        
    }

    }
//  }while(choice!=4);

 
    //  if(choice == 1 )
    //  {
    //     system ("cls");
    //     login();
    //     break;
    //  }
    //  else if(choice == 2)
    //  {
    //     system ("cls");
    //     reg();

    //     break;
    //  }
    //  else if (choice == 3)
    //  {
    //     system ("cls");
    //     fp();

    //     break;
    //  }
    //  else if(choice == 4)
    //  {
    //     system("cls");
    //     cout<<"\n\t\t\t- The Program has been closed successfully.\n"<<endl;
    //     cout<<"\t\t\t- THANK YOU FOR VISITING US !!!!!\n"<<endl;
    //     exit(0);

    //     break; 
    //  }
    //  else
    //  {
    //     system("cls");
    //     cout<<"\t\t\t--------------------------------\n"<<endl;
    //    cout<<"\t\t\t- Please enter a valid statement.\n"<<endl;
    //    main();
    //  }

//      cout<<"---------------------------------------------"<<endl;
//      cout<<"\nDo you want to repeat the program (y for yes ) and any other key for No : "<<endl;
//      cin>>option;
// }while(option == 'y'|| option == 'Y');

getch();
return (0);
}

// here i am using the filehandling for the login registration and foget
//password

void login()
{

    string userid , password , id , pass;
    int c;
system("cls");
    cout<<"\t\t\t -------------------------------------------------------------\n"<<endl;
    cout<<"\t\t\t|                                                             |\n"<<endl;
    cout<<"\t\t\t|                    --LOGIN PAGE--                           |\n"<<endl;
    cout<<"\t\t\t|                                                             |\n"<<endl;
    cout<<"\t\t\t ------------------------------------------------------------- \n"<<endl;
    cout<<"\n\t\t\t-Welcome to the login.\n"<<endl;
    cout<<"\n\t\t\t---------------------------"<<endl;
    cout<<"\n\t\t\t-Enter the username and password."<<endl;
    cout<<"\n\t\t\t--------------------------------"<<endl;
    cout<<"\n\t\t\t.Enter the Username : ";
    cin>>userid;
    cout<<"\n\t\t\t.Enter the password : ";
    cin>>password;
    ifstream  input("records.txt");

 
    while(input>>id>>pass)
    {
        if(id==userid && pass==password)
        {
            c = 1;

            system ("cls");
        }

    }

    input . close();

    if( c == 1 )
    {
        
 system("CLS");
cout<<userid<<"\n\t\t\tYour Login Successfully. Thank you for logging in.\n"<<endl;


cout<<"\t\t\t---WELCOME TO THE PHARMA DISTRIBUTIVE MANAGEMENT SYSTEM----\n"<<endl;


int option;
cout<<"\t\t\t   ============================================================================="<<endl;
cout<<"\t\t\t |                                  TABLE                                        |"<<endl;
cout<<"\t\t\t | _____________________________________________________________________________ |"<<endl;
cout<<"\t\t\t |                   Quantaies we are offering                                   |"<<endl;
cout<<"\t\t\t | _____________________________________________________________________________ |"<<endl;
cout<<"\t\t\t | Sr.  |     Name      |  Serial No. |    Quantity    |   Prics (WS)|  WS Price |"<<endl;
cout<<"\t\t\t | _____________________________________________________________________________ |"<<endl;
cout<<"\t\t\t |  1   |    Panadol    |    0001     |      100pkg    |    1500 PKR | 1700 PKR  |"<<endl;
cout<<"\t\t\t |  2   |    Benzoic    |    0002     |      100pkg    |    1700 PKR | 1950 PKR  |"<<endl;
cout<<"\t\t\t |  3   |     Flygl     |    0003     |      100pkg    |    1200 PKR | 1400 PKR  |"<<endl;
cout<<"\t\t\t |  4   |    Vitamin    |    0004     |      100pkg    |    1800 PKR | 2000 PKR  |"<<endl;
cout<<"\t\t\t |  5   |     Fibre     |    0005     |      100pkg    |    1900 PKR | 2200 PKR  |"<<endl;
cout<<"\t\t\t |  6   |    Surbex     |    0006     |      100pkg    |    2200 PKR | 2500 PKR  |"<<endl;
cout<<"\t\t\t |                                                                               |"<<endl;
cout<<"\t\t\t  =============================================================================== "<<endl;  


        cout<<"\t\t\tPress 1. For Adding Drugs.."<<endl;
        cout<<"\t\t\tPress 2. For Delivering the Medicine.."<<endl;
        cout<<"\t\t\tPress 3. For Updating the Existing Drug Information.."<<endl;
        cout<<"\t\t\tPress 4. For Deleting the certain Drug from the system.."<<endl;
        cout<<"\t\t\tPress 5. For Searchin the certain Drug from the system.."<<endl;
        cout<<"\t\t\tPress 6. For Displaying the Drugs in the System.."<<endl;
        cout<<"\t\t\tPress 7. For Exit the System..."<<endl;
        cout<<"\n=======================================================\n"<<endl;
        cout<<"\t\t\t\nPlease Select a choice : "<<endl;
        cout<<"\n=======================================================\n"<<endl;
        cin>>option;
        switch(option)
        {
            case 1:
            {

               adddrug();

            }
            case 2:
            {
                deliverydrug();


            }
            case 3:
            {
                 updatedrug();

            }
            case 4:
            {
                deldrug();

            }
            case 5:
            {
                searchdrug();

            }
            case 6:
            {
                displaydrug();

            }
            case 7:
            {
                cout<<"\t\t\tThank You for Visiting Us !!!!"<<endl;

                exit(0);
            }
            default:{
            cout<<"\t\t\t\nPlease Enter the Valid choice..!!!!"<<endl;
            }
        }

        

    }

    else
    {
        cout<<"\n\t\t\tLogin Error. Check your username and password."<<endl;

        
    }



    

    



}

// now registration portion by file handling 


void reg()
{
    system("cls");
    string ruserid , rpassword  , rid , rpass;

    cout<<"\t\t\t----Welcome to registration----\n"<<endl;
    cout<<"\t\t\tEnter the Username : ";
    cin>> ruserid;
    cout<<"\t\t\tEnter the Password : ";
    cin>>rpassword;

    ofstream f1 ("records.txt" , ios :: app);
    f1 <<ruserid <<' '<<rpassword<<endl;
    system ("CLS");
    

    cout<<"\n\t\t\tRegistration sucessfully done. You can login!!!"<<endl;

}
void fp()
{

     int option;
     


    cout<<"\t\t\t----Forgrt Password----"<<endl;
    cout<<"\t\t\tPress 1 . For finding account by username : "<<endl;
    cout<<"\t\t\tPress 2 . For return to main menu.";
    cin>>option;


    switch ( option )
    {

        case 1 :

        int count = 0;

        string ruserid , rpass , rid;

        cout<<"\n\t\t\tEnter the usernamae you rembered : ";
        cin>>ruserid;

        ifstream R3("record.txt");
        while (R3>>rid>>rpass)
        {
            if (rid == ruserid)
            {
                count == 1;
            }

            R3.close();

            if(count == 1 )
            {
                cout<<"\n\t\t\tYour Account has been successfully Found!!!\n"<<endl;
                cout<<"\n\t\t\tYour Account Password is : "<<rpass<<endl;

                main();
            }

            else
            {
                cout<<"\n\t\t\tYour account is nou found in our records. Sorry !!!!"<<endl;



                main();
            }
        
        }



    }
}
    




// here i declare the string of multinational drugs options :

//here i will declare the string arrays for the local drugs options:

 
int total = 0;
void adddrug()
{
   addrug s;

    int n;
    cout<<"How many Packages did you want to Enter : "<<endl;
    cin>>n;

    // here the package is used to hold the medicines 
for (int i = 0 ; i < n ; i++)
{
    cout<<"Enter the number of the package " <<i+1<<" : "<<endl;
    cin>>s.pkg[i];
    cout<<"Enter the name of the package "<<i+1<<" : "<<endl;
    cin>>s.name[i];
    cout<<"Enter the serial number "<<i+1<<" : "<<endl;
    cin>>s.srl[i];
  cout<<"\n--------------------------------------------------------------"<<endl;
cout<<"The data of the pakage"<<i+1<<" has been stored successfully : "<<endl;

}



    

}
void deliverydrug()
{
    cout<<"\n======================================="<<endl;
    cout<<"En"

}
void updatedrug()
{

}
void searchdrug()
{

}
void deldrug()
{

}
void displaydrug()
{
    
}

 


