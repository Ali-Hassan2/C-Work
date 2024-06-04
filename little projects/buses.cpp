#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include<cstdlib>
#include<cstdio>
using namespace std;

struct bus
{
    int busno[5];
    string drivername[5];
    string from[5];
    string to[5];
    string deptime[5];
    string arrtime[5];
    int bsnum;
    int capacity[5];
    int totseats[5];
    // int busnumb[5];
    int pass[5];

}n;
int max_buses = 0;
int i = 0;
int p = 0;

void add();
void del();
void avail();
void seatbook();
void menu();
void can();
int main()
{
    
    menu();
    return 0;
}
        
void add()
{
    
    p++;
    if(p>5)
    {
        cout << "Cannot add more buses. Maximum bus limit has reached " << endl;

    }
    else
    {
        ofstream write("busres.txt" ,ios :: app);
        max_buses++;
        write << "This is the data of bus no " << max_buses << endl;

        cout << "Enter the bus number --> ";
        cin>>n.busno[i];
        write <<  "Bus number : "<< n.busno[i]<<endl;
        cout << "Enter the total seat capacity of the bus --> ";
        cin  >> n.capacity[i];
        write <<  "Total seat capacity of the bus number is "<< n.busno[i]<<" : "<<n.capacity[i]<<endl;
        n.totseats[i] = n.capacity[i];
        cin.ignore();
        cout<<"Enter the driver name --> ";
        getline(cin, n.drivername[i]);
        write << "Driver name of bus number "<< n.busno[i]<<" is : "<<n.drivername[i]<<endl;
        cin.ignore();
        cout<<"Enter the departure place --> ";
        getline(cin, n.from[i]);
        write << "Departure place of bus number "<< n.busno[i]<<" is : "<<n.from[i]<<endl;
        cout<<"Enter the destination place --> ";
        getline(cin, n.to[i]);
        write << "Destination place of bus number "<< n.busno[i]<<" is : "<<n.to[i]<<endl;
        cout<<"Enter the departure time --> ";
        cin>>n.deptime[i];
        write << "Departure time of bus number "<< n.busno[i]<<" is : "<<n.deptime[i]<<endl;
        cout<<"Enter the arrival time --> ";
        cin>>n.arrtime[i];
        write << "Arrival time of bus number "<< n.busno[i]<<" is : "<<n.arrtime[i]<<endl<<endl;
        cout << "Bus added successfully " << endl;
        i++;
        
    }
}
void del()
{
    int temp;
    temp = max_buses;
    if(temp==0)
    {
        cout << "Sorry there is no bus " << endl;
    }
    else if(temp==1)
    {
        cout << "You cannot delete the bus " << endl;
    }
    else 
    {
        cout << "Enter the bus number you want to delete --> " << endl;
        cin >> n.bsnum;
        for(int i=0;i<temp;i++)
        {
            if(n.bsnum==n.busno[i])
            {
                cout << "Bus found successfully " << endl;
                for(int j=i;j<temp-1;j++)
                {
                    n.busno[j]=n.busno[j+1];
                }
                    max_buses--;
                    cout << "Bus deleted successfully " << endl;
                    cout << "Now available buses " << max_buses << endl;
            }
        }
            
    }
}
void avail()
{
    ifstream read("busres.txt");
    if(!read)
    {
        cout<<"No file has been founded"<<endl;
    }

    // while(!(i.eof()))
    // {
    //     getline(i, n);
    //     cout << n<<endl;
    // }
    
    if (max_buses==0)
    {
        cout << "Currently no bus is available " << endl;
    }
    else
        
    while()
    {
       
        cout << "Bus number        : " << n.busno[i] << endl;
        cout << "Driver name       : " << n.drivername[i] << endl;
        cout << "Total seats in bus: " << n.totseats[i] << endl;
        cout << "Passangers        : " << n.pass[i] << endl;
        cout << "Empty Seats       : " << n.capacity[i] << endl;
        cout << "Departure Place   : " << n.from[i] << endl;
        cout << "Destination Place : " << n.to[i] << endl;
        cout << "Departure time    : " << n.deptime[i] << endl;
        cout << "arrival time      : " << n.arrtime[i] << endl;
        cout << endl
             << endl;
    }
    
    
}
void seatbook()
{
    if(max_buses==0)
    {
        cout << "Currently no bus is available " << endl;
    }
    else
    {
        int bsn;
        cout << "Enter the bus no you want to book a seat --> " << endl;
        cin >>bsn;
        for(int i=0;i<5;i++)
        {
            if(n.busno[i]==bsn)
            {
                n.pass[i]++;
                n.capacity[i]--;
                cout << "Seat booked successfully " << endl;
            }
            
        }
        
    }
    
}
void can()
{
    int nb;
    cout << "Enter the bus number you want to cancell the booking --> " << endl;
    cin >> nb;
    for(int i=0;i<5;i++)
    {
        if(n.busno[i]==nb)
        {
            if(n.pass[i]==0)
            {
                cout << "There is no booking in this bus " << endl;
            }
            else
            {
                n.pass[i]--;
                n.capacity[i]++;
                cout << "Your booking is cancelled " << endl;
            }
        }

    }

}
void menu()
{
    cout << endl << endl;
    cout<<"\t\t\t ------------------------------ WELCOME TO BUS RESERVATION SYSTEM ---------------------------------\n"<<endl;
    cout<<"\t\t\t|                                                                                                 |\n"<<endl;
    cout<<"\t\t\t| ------------------------------------------------------------------------------------------------|\n"<<endl;

    cout<<"\t\t\t|-------------------------------------------------------------------------------------------------|\n"<<endl;
    cout<<"\t\t\t|-----------------------------------------  W E L C O M E  ---------------------------------------|\n"<<endl;
    cout<<"\t\t\t|-------------------------------------           T O        --------------------------------------|\n"<<endl;
    cout<<"\t\t\t|------------------------     B U S---R E S E R V A T I O N---S Y S T E M     --------------------|\n"<<endl;
    cout<<"\t\t\t|-------------------------------------------------------------------------------------------------|\n"<<endl;
    start:
    int choice;
    
    // cout << "\t\t\t\t\t\t*************************" << endl;
    // cout << "\t\t\t\t\t\t------------ WELCOME TO BUS RESERVATION SYSTEM ------------" << endl;
    // cout << "\t\t\t\t\t\t*************************" << endl;
   

    cout << "\t\t\t\t\t\t1.Add Bus " << endl;
    cout << "\t\t\t\t\t\t2.Delete a Bus " << endl;
    cout << "\t\t\t\t\t\t3.Show Available Buses" << endl;
    cout << "\t\t\t\t\t\t4.Book a Seat " << endl;
    cout << "\t\t\t\t\t\t5.Cancell the Booking " << endl;
    cout << "\t\t\t\t\t\t6.Exit " << endl;
    cout << "\t\t\t\t\t\tEnter your choice --> ";
    cin >> choice;
    switch(choice)
    {
        case 1:
        add();
        break;
        case 2:
        del();
        break;
        case 3:
        avail();
        break;
        case 4:
        seatbook();
        break;
        case 5:
        can();
        break;
        case 6:
        system("cls");
        exit(0);
        default:
        cout << "Please enter correct choice " << endl;
    }
    goto start;
}