#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
#include<sstream>
#include<vector>
#include<fstream>
using namespace std;


struct add
{
    string serial_number[100];
    string name[100];
    string price[100];

};




void login_menu();
void login();
void reg();
void fp();
void adddrug();
 void deliverydrug();
void updatedrug();
void searchdrug();
void deldrug();


// struct addrug
// {
//     int pkg[100];
//     string name[50];
//     int srl[60];

// };

int main()
{
    while(true)
    {
    login_menu();
    }


getch();
return (0);
}
void login_menu()
{
        int choice;
    char option ;

    cout<<"\t\t\t -------------------------------PHARMACUETICAL MANAGEMENT SYSTEM----------------------------------\n"<<endl;
    cout<<"\t\t\t|                                                                                                 |\n"<<endl;
    cout<<"\t\t\t -------------------------------------------------------------------------------------------------\n"<<endl;

     cout<<"\t\t\t-------------------------------------------------------------------------------------------------\n"<<endl;
     cout<<"\t\t\t-----------------------------------------  W E L C O M E  ----------------------------------------\n"<<endl;
     cout<<"\t\t\t-------------------------------------            T O          -------------------------------------\n"<<endl;
     cout<<"\t\t\t---------------------------------        L O G I N--P A G E      ----------------------------------\n"<<endl;
     cout<<"\t\t\t----------------------------------------------------------------------------------------------------\n"<<endl;
b:
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
        goto b;
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
ali:

cout<<"\t\t\t---WELCOME TO THE PHARMA DISTRIBUTIVE MANAGEMENT SYSTEM----\n"<<endl;

while(true)
{
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
        cout<<"\t\t\tPress 6. For Exit the System..."<<endl;
        cout<<"\n=======================================================\n"<<endl;
        cout<<"\t\t\t\nPlease Select a choice : "<<endl;
        cout<<"\n=======================================================\n"<<endl;
        cin>>option;
        switch(option)
        {
            case 1:
            {
                system("CLS");

               adddrug();
               break;

            }
            case 2:
            {
                system("CLS");
                deliverydrug();
break;


            }
            case 3:
            {
                system("CLS");
                 updatedrug();
break;

            }
            case 4:
            {
                system("Cls");
                deldrug();
break;

            }
            case 5:
            {
                system("CLS");
                searchdrug();
break;

            }

            case 6:
            {
                system("CLS");
                cout<<"\t\t\tThank You for Visiting Us !!!!"<<endl;

                exit(0);
            }
            default:{
            cout<<"\t\t\t\nPlease Enter the Valid choice..!!!!"<<endl;
            }
        }
}
        goto ali;

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

        int count ;

        string ruserid , rpass , rid;

        cout<<"\n\t\t\tEnter the usernamae you rembered : ";
        cin>>ruserid;

        ifstream R3("record.txt");
        while (R3>>rid>>rpass)
        {
            if (rid == ruserid)
            {
                count = 1;
            }
        
            R3.close();
        }
            if(count == 1 )
            {
                cout<<"\n\t\t\tYour Account has been successfully Found!!!\n"<<endl;
                cout<<"\n\t\t\tYour Account Password is : "<<rpass<<endl;

                // main();
            }
        
        else
            {
                cout<<"\n\t\t\tYour account is nou found in our records. Sorry !!!!"<<endl;



                main();
            }
        
        



    }
}
    




// here i declare the string of multinational drugs options :

//here i will declare the string arrays for the local drugs options:

 string name[100] , srl[100];
int total = 0;
void adddrug()
{ 

int price = 1;

    int choice , option;
    cout<<"\t\t\tWhich Category of Medicine Packages did you want to enter : "<<endl;
    cout<<"\t\t\t\n=========================================================="<<endl;
    cout<<"\t\t\t\nPress 1: For Entering Panadol Stock : "<<endl;
    cout<<"\t\t\t\nPress 2: For Entering Benzoic Stock : "<<endl;
    cout<<"\t\t\t\nPress 3: For Entering Flygl Stock : "<<endl;
    cout<<"\t\t\t\nPress 4: For Entering Vitamin Stock : "<<endl;
    cout<<"\t\t\t\nPress 5: For Entering Fibre Stock : "<<endl;
    cout<<"\t\t\t\nPress 6: For Entering Surbex Stock : "<<endl;
    cout<<"\t\t\t\nPress 7: For Exit.."<<endl;
    cout<<"\n================================================"<<endl;
    cout<<"Please Select any choice : ";
    cin>>choice;
    cout<<"\n================================================"<<endl;

switch(choice)
{
    case 1:
    {
        system("CLS");
        cout<<"\n-------------PANADOL STORE---------------------\n"<<endl;
        cout<<"How many Packages did you want to enter : "<<endl;
        cin>>option;
        if(total == 0)
        {
            total = total + option;
                
                for (int i = 0 ; i < option ; i++)
                {
                    cout<<"Enter the data of the "<<i+1<<" Package..  \n"<<endl;
                    cout<<"\n============================================"<<endl;
                    cout<<"Enter the Serial Number of the Package : "<<endl;
                    cin>>srl[i];
                  
                    cout<<"Enter the Name of the Package : "<<endl;
                    cin>>name[i];

                    
                
                }
                price = price * option;
                cout<<"\n==================================================="<<endl;
                cout<<"The total Price for these packages is : "<<1500*option<<" PKR."<<endl;
                cout<<"\n============================================================"<<endl;
        }
        else{ 
        for (int i = total ; i < option + total ; i++)
        {
                                cout<<"Enter the data of the "<<i+1<<" Package..  \n"<<endl;
                    cout<<"\n============================================"<<endl;
                    cout<<"Enter the Serial Number of the Package : "<<endl;
                    cin>>srl[i];
                    cout<<"Enter the Name of the Package : "<<endl;
                    cin>>name[i];
                
        }

        price = price * option +total;
        cout<<"The Total Price Bill for adding packages is : "<<1500*option+total<<" PKR."<<endl; 
        cout<<"\n============================================================"<<endl;
        }
    
         break;    
     }
     case 2:
     {
        cout<<"\n--------------------Benzoic Acid--------------------"<<endl;
        system("CLS");
                cout<<"How many Packages did you want to enter : "<<endl;
        cin>>option;
        if(total == 0)
        {
            total = total + option;
                
                for (int i = 0 ; i < option ; i++)
                {
                    cout<<"Enter the data of the "<<i+1<<" Package..  \n"<<endl;
                    cout<<"\n============================================"<<endl;
                    cout<<"Enter the Serial Number of the Package : "<<endl;
                    cin>>srl[i];
                    cout<<"Enter the Name of the Package : "<<endl;
                    cin>>name[i];
                    
                
                }
                price = price * option;
                cout<<"\n==================================================="<<endl;
                cout<<"The total Price for these packages is : "<<1700*option<<" PKR."<<endl;
                cout<<"\n============================================================"<<endl;
        }
        else{ 
        for (int i = total ; i < option + total ; i++)
        {
                                cout<<"Enter the data of the "<<i+1<<" Package..  \n"<<endl;
                    cout<<"\n============================================"<<endl;
                    cout<<"Enter the Serial Number of the Package : "<<endl;
                    cin>>srl[i];
                    cout<<"Enter the Name of the Package : "<<endl;
                    cin>>name[i];
                
        }

        price = price * option +total;
        cout<<"The Total Price Bill for adding packages is : "<<1700*option<<" PKR."<<endl; 
        cout<<"\n============================================================"<<endl;
        }
        break;
     }

     case 3:
     {
        system("CLS");
        cout<<"\n--------------------Flygl--------------------"<<endl;
                cout<<"How many Packages did you want to enter : "<<endl;
        cin>>option;
        if(total == 0)
        {
            total = total + option;
                
                for (int i = 0 ; i < option ; i++)
                {
                    cout<<"Enter the data of the "<<i+1<<" Package..  \n"<<endl;
                    cout<<"\n============================================"<<endl;
                    cout<<"Enter the Serial Number of the Package : "<<endl;
                    cin>>srl[i];
                    cout<<"Enter the Name of the Package : "<<endl;
                    cin>>name[i];
                    
                
                }
                price = price * option;
                cout<<"\n==================================================="<<endl;
                cout<<"The total Price for these packages is : "<<1200*option<<" PKR."<<endl;
                cout<<"\n============================================================"<<endl;
        }
        else{ 
        for (int i = total ; i < option + total ; i++)
        {
                                cout<<"Enter the data of the "<<i+1<<" Package..  \n"<<endl;
                    cout<<"\n============================================"<<endl;
                    cout<<"Enter the Serial Number of the Package : "<<endl;
                    cin>>srl[i];
                    cout<<"Enter the Name of the Package : "<<endl;
                    cin>>name[i];
                
        }

        price = price * option +total;
        cout<<"The Total Price Bill for adding packages is : "<<1200*option<<" PKR."<<endl; 
        cout<<"\n============================================================"<<endl;
        }
        break;
     }
     case 4:
     {
        system("CLS");
        cout<<"\n--------------------Vitamin--------------------"<<endl;
                cout<<"How many Packages did you want to enter : "<<endl;
        cin>>option;
        if(total == 0)
        {
            total = total + option;
                
                for (int i = 0 ; i < option ; i++)
                {
                    cout<<"Enter the data of the "<<i+1<<" Package..  \n"<<endl;
                    cout<<"\n============================================"<<endl;
                    cout<<"Enter the Serial Number of the Package : "<<endl;
                    cin>>srl[i];
                    cout<<"Enter the Name of the Package : "<<endl;
                    cin>>name[i];
                    
                
                }
                price = price * option;
                cout<<"\n==================================================="<<endl;
                cout<<"The total Price for these packages is : "<<1800*option<<" PKR."<<endl;
        }
        else{ 
        for (int i = total ; i < option + total ; i++)
        {
                                cout<<"Enter the data of the "<<i+1<<" Package..  \n"<<endl;
                    cout<<"\n============================================"<<endl;
                    cout<<"Enter the Serial Number of the Package : "<<endl;
                    cin>>srl[i];
                    cout<<"Enter the Name of the Package : "<<endl;
                    cin>>name[i];
                
        }

        price = price * option +total;
        cout<<"The Total Price Bill for adding packages is : "<<1800*option<<" PKR."<<endl;
        cout<<"\n============================================================"<<endl; 
        }
        break;
     }
     case 5:
     {
        system("CLS");  
        cout<<"\n--------------------Fibre--------------------"<<endl;
                cout<<"How many Packages did you want to enter : "<<endl;
        cin>>option;
        if(total == 0)
        {
            total = total + option;
                
                for (int i = 0 ; i < option ; i++)
                {
                    cout<<"Enter the data of the "<<i+1<<" Package..  \n"<<endl;
                    cout<<"\n============================================"<<endl;
                    cout<<"Enter the Serial Number of the Package : "<<endl;
                    cin>>srl[i];
                    cout<<"Enter the Name of the Package : "<<endl;
                    cin>>name[i];
                    
                
                }
                price = price * option;
                cout<<"\n==================================================="<<endl;
                cout<<"The total Price for these packages is : "<<1900*option<<" PKR."<<endl;
                cout<<"\n============================================================"<<endl;
        }
        else{ 
        for (int i = total ; i < option + total ; i++)
        {
                                cout<<"Enter the data of the "<<i+1<<" Package..  \n"<<endl;
                    cout<<"\n============================================"<<endl;
                    cout<<"Enter the Serial Number of the Package : "<<endl;
                    cin>>srl[i];
                    cout<<"Enter the Name of the Package : "<<endl;
                    cin>>name[i];
                
        }

        price = price * option +total;
        cout<<"The Total Price Bill for adding packages is : "<<1900*option<<" PKR."<<endl; 
        cout<<"\n============================================================"<<endl;
        }
        break;
     }

     case 6:
     {
                cout<<"How many Packages did you want to enter : "<<endl;
        cin>>option;
        if(total == 0)
        {
            total = total + option;
                
                for (int i = 0 ; i < option ; i++)
                {
                    cout<<"Enter the data of the "<<i+1<<" Package..  \n"<<endl;
                    cout<<"\n============================================"<<endl;
                    cout<<"Enter the Serial Number of the Package : "<<endl;
                    cin>>srl[i];
                    cout<<"Enter the Name of the Package : "<<endl;
                    cin>>name[i];
                    
                
                }
                price = price * option;
                cout<<"\n==================================================="<<endl;
                cout<<"The total Price for these packages is : "<<2200*option<<" PKR."<<endl;
                cout<<"\n============================================================"<<endl;
        }
        else{ 
        for (int i = total ; i < option + total ; i++)
        {
                                cout<<"Enter the data of the "<<i+1<<" Package..  \n"<<endl;
                    cout<<"\n============================================"<<endl;
                    cout<<"Enter the Serial Number of the Package : "<<endl;
                    cin>>srl[i];
                    cout<<"Enter the Name of the Package : "<<endl;
                    cin>>name[i];
                
        }

        price = price * option +total;
        cout<<"The Total Price Bill for adding packages is : "<<2200*option<<" PKR."<<endl; 
        cout<<"\n============================================================"<<endl;
        }
     }
     break;
     case 7:
     {
        exit(0);
        cout<<"Thank You For Visiting Us.....!!!"<<endl;
     }
     default:
     {
        cout<<"\nWrong Choice.....Please Try Again.....!!!!"<<endl;
     }

     }

     


}




    


void deliverydrug()
{
    add s;
    int option;
    int choice;
    cout<<"1.For deliver Panadol."<<endl;
    cout<<"2.For deliver Benzoic Acid."<<endl;
    cout<<"3.For deliver Flygl."<<endl;
    cout<<"4.For deliver Vitamin."<<endl;
    cout<<"5.For deliver Fibre."<<endl;
    cout<<"6.For deliver Panadol."<<endl;
    cout<<"\n==========================="<<endl;
    cout<<"Select the choice : "<<endl;
    cin>>choice;
    double sum = 1;
    switch (choice)
{
    case 1:
    {
        cout<<"Enter the number of packages did you want to deliver : "<<endl;
        cin>>option;
        for(int i = 0 ; i <= option ; i++)
        {
            cout<<"Enter the Name of the package : "<<endl;
            cin>>s.name[i];
            cout<<"Enter the serial number of the package : "<<endl;
            cin>>s.serial_number[i];
            sum = option * 1700;
        }
        cout<<"The total amout to be received is = "<<sum;
    }
    case 2:
    {
            cout<<"Enter the number of packages did you want to deliver : "<<endl;
        cin>>option;
        for(int i = 0 ; i <= option ; i++)
        {
            cout<<"Enter the Name of the package : "<<endl;
            cin>>s.name[i];
            cout<<"Enter the serial number of the package : "<<endl;
            cin>>s.serial_number[i];
            sum = option * 1950;
        }
        cout<<"The total amout to be received is = "<<sum;
    }

    case 3:
    {
                cout<<"Enter the number of packages did you want to deliver : "<<endl;
        cin>>option;
        for(int i = 0 ; i <= option ; i++)
        {
            cout<<"Enter the Name of the package : "<<endl;
            cin>>s.name[i];
            cout<<"Enter the serial number of the package : "<<endl;
            cin>>s.serial_number[i];
            sum = option * 1400;
        }
        cout<<"The total amout to be received is = "<<sum;
    }
    case 4:
    {
                cout<<"Enter the number of packages did you want to deliver : "<<endl;
        cin>>option;
        for(int i = 0 ; i <= option ; i++)
        {
            cout<<"Enter the Name of the package : "<<endl;
            cin>>s.name[i];
            cout<<"Enter the serial number of the package : "<<endl;
            cin>>s.serial_number[i];
            sum = option * 2000;
        }
        cout<<"The total amout to be received is = "<<sum;
    }
    case 5:
    {
                cout<<"Enter the number of packages did you want to deliver : "<<endl;
        cin>>option;
        for(int i = 0 ; i <= option ; i++)
        {
            cout<<"Enter the Name of the package : "<<endl;
            cin>>s.name[i];
            cout<<"Enter the serial number of the package : "<<endl;
            cin>>s.serial_number[i];
            sum = option * 2200;
        }
        cout<<"The total amout to be received is = "<<sum;
    }
    case 6:
    {
                        cout<<"Enter the number of packages did you want to deliver : "<<endl;
        cin>>option;
        for(int i = 0 ; i <= option ; i++)
        {
            cout<<"Enter the Name of the package : "<<endl;
            cin>>s.name[i];
            cout<<"Enter the serial number of the package : "<<endl;
            cin>>s.serial_number[i];
            sum = option * 2500;
        }
        cout<<"The total amout to be received is = "<<sum;
        
    }

}
    
 }
void updatedrug()
{
    
    string rollno;
    cout<<"Enter the serial number of the package : "<<endl;
    cin>>rollno;
    for(int i = 0 ; i < total ; i++)
    {
        if(rollno == srl[i])
        {
            cout<<"\nPrevious data of the student : "<<endl;
            cout<<"\nSerial number is : "<<srl[i]<<endl;
            cout<<"\nName is : "<<name[i]<<endl;
            cout<<"\n===========================\n"<<endl;
            cout<<"\nEnter the new data :"<<endl;
            cout<<"\nEnter the serial number : "<<endl;
            cin>>srl[i];
            cout<<"\nEnter the name of the package : "<<endl;
            cin>>name[i];
            cout<<"\n================================"<<endl;
            cout<<"\nNew data of the pakacge has been saved."<<endl;

        }

    }

}
void searchdrug()
{
    string element;
    cout<<"\n===================================="<<endl;
    cout<<"Enter the serial number of the package : "<<endl;
    cin>>element;
    for (int i = 0 ; i < total ; i++)
    {
        cout<<"\nName : "<<name[i];
        cout<<"\nSeial Number of the package is : "<<srl[i];
    }


}
void deldrug()
{
    int option;
    string serialnum;
    cout<<"1.For Deleting Full record.."<<endl;
    cout<<"2.For deleting Particular record.."<<endl;
    cout<<"\n=================================="<<endl;
    cin>>option;
    if(option == 1)
    {
        total = 0;
        cout<<"\nYour all record has been deleted successfully...!!!"<<endl;
    }
    if(option == 2)
    {
        cout<<"\nEnter the serial number of the package : "<<endl;
        cin>>serialnum;
        for (int i = 0 ;i < total ; i++)
        if(serialnum == srl[i])
        {
            for (int j = 0 ; j < total ; j++)
            {
                name[j] = name[j+1];
                srl[j] = srl[j+1];

            }
            total--;
            cout<<"Your required data has been deleted successfully.....!!!!"<<endl;

        }
        
    }

    

}


    


 


