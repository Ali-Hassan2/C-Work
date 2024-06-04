#include <iostream>
#include <string>
#include <windows.h>
#include<cstdlib>
#include<fstream>
#include <iostream>
#include <windows.h>
#include<conio.h>
using namespace std;

#define maxsize 100
void showData()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_FONT_INFOEX fontInfo;
    fontInfo.cbSize = sizeof(CONSOLE_FONT_INFOEX);
    GetCurrentConsoleFontEx(hConsole, FALSE, &fontInfo);
    fontInfo.dwFontSize.X = 24; // Set the X font size to 16
    fontInfo.dwFontSize.Y = 24; // Set the Y font size to 24
    SetCurrentConsoleFontEx(hConsole, FALSE, &fontInfo);

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);

    char arrShow[] = "EVENT REGISTRATION SYSTEM";
    cout << "\n\t\t\t\t\t\t";
    for (int i = 0; i < 24; i++)
    {
        std::cout << arrShow[i];
        Sleep(300);
    }
    system("CLS");

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
enum GENDER {
    male, female  //0 , 1
};
class person
{
public:
    string name;
    string email;
    long int phone;
    GENDER gen;
public:
    person()
    {
        name = '\0';
        email = '\0';
        phone = 0;
    }


};

class Date
{
public:
    int dd;
    int mm;
    int yyyy;
    Date()
    {
        dd = 0;
        mm = 0;
        yyyy = 0;
    }
    ~Date()
    {

    }
};

class Time
{
public:
    int hh;
    int min;
    Time()
    {
        hh = 0;
        min = 0;
    }
    ~Time()
    {

    }
};

class Event_Management
{
public:
    static int idcount;
    int id;
    string name;
    Time t;
    Date d;
    string location;
    string type;
    string description;
public:
    Event_Management()
    {
        id = ++idcount;
        name = '\0';
        location = '\0';
        type = '\0';
        description = '\0';
    }
    ~Event_Management() {
    }
    static void event_managementmenu();
    void addEvent();
    void checkEvent();
    void searchEvent();
    void removeEvent();
    void updateEvent();
};
int Event_Management::idcount = 0;
class Event_Organizer : public person
{
public:
    static int idcount;
    int id;
    int registration_number;
    Date date_of_birth;
public:
    Event_Organizer()
    {
        id = ++idcount;
        registration_number = 0;
    }
    ~Event_Organizer() {
    }
    static void eventorganizermenu();
    void addOrganizer();
    void viewOrganizer();
    static void searchOrganizer();
    static void updateOrganizer();
    static void removeOrganizer();
};
int Event_Organizer::idcount = 0;

//-----------------
class Attendee :public person
{
public:
    static int idcount;
    int id;
    char special_request;

public:
    Attendee()
    {
        id = ++idcount;
        special_request = '\0';
    }
    ~Attendee() {
    }
    static void attendeemenu();
    void addAttendee();
    void viewAttendee();
    void searchAttendee();
    void removeAttendee();
    void updateAttendee();
};
int Attendee::idcount = 0;
Attendee* fetchAttendeeByID(int id);
class Ticket
{
public:
    int ticket_id;
    string name;
    string type;
    int price;
    Attendee* ptrattendee;
public:
    Ticket()
    {
        ticket_id = 0;
        price = 0;
        name = '\0';
        type = '\0';
        ptrattendee = NULL;
    }
    ~Ticket() {
    }
    int getID() const {
        return ticket_id;
    }
    static void ticketmenu();
    void newTicket();
    void viewTicket();
    void searchTicket();
    void updateTicket();
    void cancelTicket();
};

class Schedule : public Time
{
private:
    int starting_time;
    int duration;
    int ceremony;
    int venue_time;
    int ending_time;
public:
    Schedule()
    {
        starting_time = 0;
        duration = 0;
        ceremony = 0;
        ending_time = 0;
    }
    ~Schedule() {
    }

    static void schedule();
    void addTime();
    void viewTime();
    void updateTime();
    void searchTime();
    void removeTime();
};
class Utility
{
public:
    static int GetNumberFromUser(int len)
    {
        char strNum[11];
        if (len > 10) len = 10;

        char ch;
        int i = 0;

        while (i < len)
        {
            ch = _getch();

            if (ch >= '0' && ch <= '9')
            {
                cout << ch;
                strNum[i] = ch;
                i++;
            }

            if (ch == '\r')
            {
                break;
            }

            if (ch == '\b')
            {
                cout << "\b \b";

                i--;
            }


        }

        cout << "\n";
        strNum[i] = '\0';

        return atoi(strNum);
    }

    static string GetStringFromUser(int len)
    {
        char strNum[256];
        if (len > 10) len = 10;

        char ch;
        int i = 0;

        while (i < len)
        {
            ch = _getch();

            if (ch >= 'a' && ch <= 'z')
            {
                cout << ch;
                strNum[i] = ch;
                i++;
            }

            if (ch == '\r')
            {
                break;
            }

            if (ch == '\b')
            {
                cout << "\b \b";

                i--;
            }


        }

        cout << "\n";
        strNum[i] = '\0';
        string str = strNum;
        return str;
    }
};
class login {

public:

    string adminusername;
    long int adminpassword;

public:

    void inputdataadmin()
    {
        cout << "\n\n\nEnter the new user name : " << endl;
        adminusername = Utility::GetStringFromUser(15);
        cout << "\n\n\nEnter the new password : " << endl;
        cin >> adminpassword;
        ofstream write;
        write.open("E:\\login1.txt");
        if (write.is_open())
        {

            write << "Admin username : " << adminusername << endl;
            write << "Admin password: " << adminpassword << endl;
            write.close();
            cout << "=====================================================" << endl;
            cout << "Your account has been creating please wait";
            for (int i = 0; i < 6; i++)

            {

                cout << ".";

                Sleep(500);

            }
        }
        else
        {
            cout << "Error in opening file..." << endl;
        }

    }
    /*Login*/


    bool loginadmin(void)
    {
        string au, ap;
        cout << "\n\n\nEnter the admin username : " << endl;
        au = Utility::GetStringFromUser(15);
        cout << "\n\n\nEnter the admin password : " << endl;
        cin >> ap;
        ifstream read;
        read.open("E:\\login1.txt");
        if (read.is_open())
        {
            string line;
            while (getline(read, line))
            {
                if (line.find("Admin username : ") != string::npos)
                {
                    string storeuser = line.substr(line.find(": ") + 2);
                    getline(read, line);
                    string storepass = line.substr(line.find(": ") + 2);

                    if (au == storeuser && ap == storepass)
                    {
                        cout << "Admin login successfully..." << endl;
                        read.close();
                        return true;
                    }
                }
            }
            read.close();
        }
        else
        {
            cout << "Error in opening...." << endl;
        }
        cout << "Invalid username or password..." << endl;
        return false;
    }


    static int menu(int op)
    {




        cout << "\t\t\tLogin Page...!!!\n\n" << endl;
        cout << "\t\t************************" << endl;
        cout << "\t\t1. For Registration..." << endl;
        cout << "\t\t2. For Login...." << endl;
        cout << "\t\t3. Exit Program..." << endl;
        cout << "\t\t************************" << endl;
        cout << "\t\t   Enter the choice : ";
        op = Utility::GetNumberFromUser(1);

        return op;

    }

};

// event collection class

class EventCollection {
private:
    static const int MAX_EVENTS = 100;
    Event_Management events[MAX_EVENTS];
    int count;

public:
    EventCollection() {
        count = 0;
    }

    void addEvent(const Event_Management& event) {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        if (count < MAX_EVENTS) {
            events[count++] = event;
            ofstream outputFile("E:\\events.txt", ios::app);
            if (outputFile.is_open()) {
                for (int i = 0; i < count; i++) {
                    outputFile << "Event ID: " << events[i].id << endl;
                    outputFile << "Name: " << events[i].name << endl;
                    outputFile << "Date: " << events[i].d.dd << "/" << events[i].d.mm << "/" << events[i].d.yyyy << endl;
                    outputFile << "Time: " << events[i].t.hh << ":" << events[i].t.min << endl;
                    outputFile << "Location: " << events[i].location << endl;
                    outputFile << "Type: " << events[i].type << endl;
                    outputFile << "Description: " << events[i].description << endl;
                    outputFile << "-----------------------------------------" << endl;
                }
                outputFile.close();
                cout << "Events saved to file successfully!" << endl;
            }
            else {
                cout << "Error in opening the file." << endl;
            }
            cout << "Event added successfully!" << endl;
        }
        else {
            cout << "Event collection is full. Cannot add more events." << endl;
        }
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }

    void saveEventsToFile() {

    }
};


void Event_Management::addEvent() {
    EventCollection eventCollection;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    cout << "\t\t-----------* Enter event details *------------" << endl;
    cout << endl << endl;
    // Prompt the user to enter event details

    cout << "Event Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Event Date (dd mm yyyy): ";
    cin >> d.dd >> d.mm >> d.yyyy;
    cout << "Event Time (hh mm): ";
    cin >> t.hh >> t.min;
    cout << "Event Location: ";
    cin.ignore();
    getline(cin, location);
    cout << "Event Type: ";
    getline(cin, type);
    cout << "Event Description: ";
    getline(cin, description);

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    Event_Management event;
    event.id = ++id;
    event.name = name;
    event.d = d;
    event.t = t;
    event.location = location;
    event.type = type;
    event.description = description;

    eventCollection.addEvent(event);
}


void Event_Management::checkEvent()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    ifstream inputFile("E:\\events.txt");

    if (!inputFile.is_open()) {
        cout << "Error in opening the file." << endl;
        return;
    }


    cout << "\t\t-------* Event List *----------" << endl;
    cout << endl << endl;

    string line;
    while (getline(inputFile, line)) {
        if (line.find("Event ID: ") != string::npos) {

            cout << line << "|  ";
            getline(inputFile, line); // Read the next line
            cout << line << "|  ";
            getline(inputFile, line);
            cout << line << "|  ";
            getline(inputFile, line);
            cout << line << "|  ";
            getline(inputFile, line);
            cout << line << "|  ";
            getline(inputFile, line);
            cout << line << "|  ";
            getline(inputFile, line);
            cout << line << "|  ";

            cout << endl << endl;
        }
    }

    inputFile.close();
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void Event_Management::searchEvent()
{
    int id;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    cout << "\t\t------* Search *-------" << endl;
    cout << endl << endl;

    cout << "Enter the ID of the Event...";
    cin >> id;
    ifstream read;
    read.open("E:\\events.txt");
    if (read.is_open())
    {
        string data;
        while (getline(read, data))
        {
            if (data.find("Event ID: " + id) != string::npos)
            {
                cout << "\t\t-----* Event Details *-------" << endl;
                cout << endl << endl;
                for (int i = 0; i < 6; i++)
                {

                    // 			data is in 6 lines
                    getline(read, data);
                    cout << data << "| ";
                }
                cout << "\n---------------------------" << endl;
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                read.close();
                return;
            }


        }
        read.close();
        cout << "Event with id " << id << " not found...!!!" << endl;
    }
}
void Event_Management::updateEvent()
{
    //implementation
}
void Event_Management::removeEvent()
{
    //implementation
}

// Organizer collection class

class organizercollection
{
private:
    static const int max_org = 100;

    int count;
public:
    Event_Organizer orgs[max_org];
    organizercollection()
    {
        count = 0;
    }
    void addorganizer(Event_Organizer& org)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        if (count < max_org)
        {
            orgs[count++] = org;

            ofstream write;
            write.open("E:\\orgs.txt", ios::app);
            if (write.is_open())
            {
                for (int i = 0; i < count; i++)
                {
                    write << "ID: " << orgs[i].id << endl;
                    write << "Name: " << orgs[i].name << endl;
                    write << "Phone: " << orgs[i].phone << endl;
                    write << "Email: " << orgs[i].email << endl;
                    write << "Registration_number: " << orgs[i].registration_number << endl;
                    write << "DOB: " << orgs[i].date_of_birth.dd << " / " << orgs[i].date_of_birth.mm << " / " << orgs[i].date_of_birth.yyyy << endl;
                    write << "GENDER" << orgs[i].gen << endl;
                }
                write.close();
                cout << "Data saved successfully..." << endl;


            }
            else
            {
                cout << "Error in opening the file..." << endl;
            }
            cout << "Data saved..." << endl;
        }
        else
        {
            cout << "There is no space to accomodate..." << endl;
        }
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    }


};
void Event_Organizer::addOrganizer()
{
    organizercollection organizer;
pass:
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    cout << "\t\t-------* Enter Organizer Details *---------\n" << endl;
    cout << endl << endl;

    cout << "Enter the Name of Organizer : ";
    cin >> name;
    cout << "Enter the Phone Number : ";
    cin >> phone;
    if (phone < 0)
    {
        cout << "Wrong Input" << endl;
        goto pass;
    }
    cout << "Enter the Email..";
    cin >> email;
    cout << "Enter the Registration number : ";
    cin >> registration_number;
    if (registration_number < 0)
    {
        cout << "Wrong input" << endl;
        goto pass;
    }
    cout << "Enter the date of birth : " << endl;
    cin >> date_of_birth.dd >> date_of_birth.mm >> date_of_birth.yyyy;
    if (date_of_birth.dd < 0 || date_of_birth.mm < 0 || date_of_birth.yyyy < 0)
    {
        cout << "Wrong Input" << endl;
        goto pass;
    }
    cout << "Enter the Gender (M/F): " << endl;
    char g;
    cin >> g;
    if (!g == 'M' || !g == 'F')
    {
        cout << "Wrong input" << endl;
        goto pass;
    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);


    Event_Organizer eor;
    eor.id = ++id;
    eor.name = name;
    eor.phone = phone;
    eor.email = email;
    eor.registration_number = registration_number;
    eor.date_of_birth = date_of_birth;

    organizer.addorganizer(eor);
}
void Event_Organizer::viewOrganizer()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    ifstream read;
    read.open("E:\\orgs.txt");
    if (!read.is_open())
    {
        cout << "Error in opening the file..." << endl;
        return;
    }
    else
    {

        cout << "\t\t------* Organizer List *-------" << endl;
        cout << endl << endl;
        string line;
        while (getline(read, line))
        {
            if (line.find("ID: ") != string::npos)
            {
                cout << line << "|  ";   //1
                getline(read, line);
                cout << line << "|  ";  // 2
                getline(read, line);
                cout << line << "|  ";//3
                getline(read, line);
                cout << line << "|  ";//4
                getline(read, line);
                cout << line << "|  "; // 5
                getline(read, line);
                cout << line << "|  ";//6
                getline(read, line);
                cout << endl;
            }
        }
        read.close();
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
}
void Event_Organizer::searchOrganizer()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    int id;

    cout << "\t\t------* Search *-------" << endl;
    cout << endl << endl;
    cout << "Enter the ID: " << endl;
    cin >> id;
    ifstream read;
    read.open("E:\\orgs.txt");
    if (!read.is_open())
    {
        cout << "Error in opening file..." << endl;
        return;
    }
    else
    {
        string data;
        while (getline(read, data))
        {
            if (data.find("ID: " + id) != string::npos)
            {
                cout << "\t\t------* Organizer Details *------" << endl;
                cout << endl << endl;
                for (int i = 0; i < 6; i++)
                {
                    getline(read, data);
                    cout << data << "|  ";

                }
            }
        }
    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void Event_Organizer::updateOrganizer()
{
    //implementation
}
void Event_Organizer::removeOrganizer()
{
    //implementation
}

// Attendee collection class 

class attendeecollection {
private:
    static const int max_size = 100;
    Attendee attendee[max_size];
    int count;
public:
    attendeecollection()
    {
        count = 0;
    }
    void addattendee(Attendee& att)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        if (count < max_size)
        {
            attendee[count++] = att;
            ofstream write;
            write.open("E:\\attendee.txt", ios::app);
            if (!write.is_open())
            {
                cout << "Error in openning...." << endl;
                return;
            }
            else
            {
                for (int i = 0; i < count; i++)
                {
                    write << "ID: " << attendee[i].id << endl;
                    write << "Name: " << attendee[i].name << endl;
                    write << "Phone: " << attendee[i].phone << endl;
                    write << "Email: " << attendee[i].email << endl;
                    write << "Special Request: " << attendee[i].special_request << endl;
                }
                cout << "Data saved in file successfully..." << endl;
                write.close();
            }
            cout << "Data Saved..." << endl;
        }
        else
        {
            cout << "Cannot Accomadate.." << endl;
        }
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
};
void Attendee::addAttendee()
{

    attendeecollection attendeecol;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    cout << "\t\t------* Attendee Details *------" << endl;
    cout << endl << endl;
    cout << "------------------\n" << endl;
    cout << "Enter the Name : ";
    cin >> name;
    cout << "Enter the Phone : ";
    cin >> phone;
    cout << "Enter the email : ";
    cin >> email;
    cout << "Special request(y/n) :";
    cin >> special_request;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    Attendee att;
    att.id = ++id;
    att.name = name;
    att.phone = phone;
    att.email = email;
    att.special_request = special_request;

    attendeecol.addattendee(att);

}
void Attendee::viewAttendee()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    ifstream read;
    read.open("E:\\attendee.txt");
    if (!read.is_open())
    {
        cout << "Error..." << endl;
        return;
    }
    else
    {
        string line;
        while (getline(read, line))
        {
            if (line.find("ID: " + id) != string::npos)
            {
                cout << "\t\t--------* Attendee list *-------" << endl;
                cout << endl << endl;
                cout << line << endl;   //1
                getline(read, line);
                cout << line << endl;  // 2
                getline(read, line);
                cout << line << endl;//3
                getline(read, line);
                cout << line << endl;//4
                getline(read, line);
                cout << line << endl; // 5
                getline(read, line);
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            }
        }
        read.close();
    }


}
void Attendee::searchAttendee()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    cout << "\t\t-----* Search *-------" << endl;
    cout << endl << endl;
    int id;
    cout << "Enter the ID : ";
    cin >> id;
    ifstream read;
    read.open("E:\\attendee.txt");
    if (!read.is_open())
    {
        cout << "Error.." << endl;
        return;
    }
    else
    {
        string data;
        while (getline(read, data))
        {
            if (data.find("ID: " + id) != string::npos)
            {
                cout << "Attendee Details..." << endl;
                for (int i = 0; i < 5; i++)
                {
                    getline(read, data);
                    cout << data << endl;
                }
            }
        }
        read.close();
    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void Attendee::updateAttendee()
{
    //implementation
}
void Attendee::removeAttendee()
{
    //implementation
}
void Ticket::newTicket() {

}

void Ticket::viewTicket()
{

}
void Ticket::searchTicket()
{
    //implementation
}
void Ticket::updateTicket()
{
    //implementation
}
void Ticket::cancelTicket()
{
    //implementation
}
void Schedule::addTime()
{
    //implementation
}
void Schedule::viewTime()
{
    //implementation
}
void Schedule::searchTime()
{
    //implementation
}
void Schedule::updateTime()
{
    //implementation
}
void Schedule::removeTime()
{
    //implementation
}

// Sub Menus in static functions

void Event_Management::event_managementmenu() {
    int eventChoice;
    Event_Management eventObj;
    do
    {
        system("CLS");
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        cout << "\n===================================" << endl;
        cout << "\tEVENT MANAGEMENT MENU";
        cout << "\n===================================" << endl;
        cout << "1. Add Event" << endl;
        cout << "2. Check Event" << endl;
        cout << "3. Search Event" << endl;
        cout << "4. Remove Event" << endl;
        cout << "5. Update Event" << endl;
        cout << "0. Go Back" << endl;
        cout << "\n====================" << endl;
        cout << "Enter your choice: ";
        eventChoice = Utility::GetNumberFromUser(1);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        switch (eventChoice)
        {
        case 1:
            system("cls");
            eventObj.addEvent();
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            eventObj.checkEvent();
            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");
            eventObj.searchEvent();
            system("pause");
            system("cls");
            break;
        case 4:
            eventObj.removeEvent();
            system("pause");
            system("cls");
            break;
        case 5:
            eventObj.updateEvent();
            system("pause");
            system("cls");
            break;
        case 0:
            break;
        default:
            cout << "Invalid choice!" << endl;
            system("pause");
            system("cls");
            break;
        }
    } while (eventChoice != 0);

}
void Event_Organizer::eventorganizermenu() {
    int organizerChoice;
    Event_Organizer organizerObj;
    do
    {
        system("CLS");
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        cout << "\n===================================" << endl;
        cout << "\tEVENT ORGANIZER MENU";
        cout << "\n===================================" << endl;
        cout << "1. Add Organizer" << endl;
        cout << "2. View Organizer" << endl;
        cout << "3. Search Organizer" << endl;
        cout << "4. Update Organizer" << endl;
        cout << "5. Remove Organizer" << endl;
        cout << "0. Go Back" << endl;
        cout << "\n====================" << endl;
        cout << "Enter your choice: ";
        organizerChoice = Utility::GetNumberFromUser(1);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

        switch (organizerChoice)
        {
        case 1:
            system("cls");
            organizerObj.addOrganizer();
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            organizerObj.viewOrganizer();
            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");
            organizerObj.searchOrganizer();
            system("pause");
            system("cls");
            break;
        case 4:
            organizerObj.updateOrganizer();
            system("pause");
            system("cls");
            break;
        case 5:
            organizerObj.removeOrganizer();
            system("pause");
            system("cls");
            break;
        case 0:
            break;
        default:
            cout << "Invalid choice!" << endl;
            system("pause");
            system("cls");
            break;
        }
    } while (organizerChoice != 0);

}
void Attendee::attendeemenu() {
    system("CLS");
    int attendeeChoice;
    Attendee attendeeObj;
    do
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        cout << "\n===================================" << endl;
        cout << "\tATTENDEE MENU";
        cout << "\n===================================" << endl;
        cout << "1. Add Attendee" << endl;
        cout << "2. View Attendee" << endl;
        cout << "3. Search Attendee" << endl;
        cout << "4. Remove Attendee" << endl;
        cout << "5. Update Attendee" << endl;
        cout << "0. Go Back" << endl;
        cout << "\n====================" << endl;
        cout << "Enter your choice: ";
        attendeeChoice = Utility::GetNumberFromUser(1);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        switch (attendeeChoice)
        {
        case 1:
            attendeeObj.addAttendee();
            system("pause");
            system("cls");
            break;
        case 2:
            attendeeObj.viewAttendee();
            system("pause");
            system("cls");
            break;
        case 3:
            attendeeObj.searchAttendee();
            system("pause");
            system("cls");
            break;
        case 4:
            attendeeObj.removeAttendee();
            system("pause");
            system("cls");
            break;
        case 5:
            attendeeObj.updateAttendee();
            system("pause");
            system("cls");
            break;
        case 0:
            break;
        default:
            cout << "Invalid choice!" << endl;
            system("pause");
            system("cls");
            break;
        }
    } while (attendeeChoice != 0);

}
void Ticket::ticketmenu() {
    system("CLS");
    int ticketChoice;
    Ticket ticketObj;
    do
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        cout << "\n===================================" << endl;
        cout << "\tTICKET MENU";
        cout << "\n===================================" << endl;
        cout << "1. New Ticket" << endl;
        cout << "2. View Ticket" << endl;
        cout << "3. Search Ticket" << endl;
        cout << "4. Update Ticket" << endl;
        cout << "5. Cancel Ticket" << endl;
        cout << "0. Go Back" << endl;
        cout << "\n====================" << endl;
        cout << "Enter your choice: ";
        ticketChoice = Utility::GetNumberFromUser(1);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        switch (ticketChoice)
        {
        case 1:
            ticketObj.newTicket();
            system("pause");
            system("cls");
            break;
        case 2:
            ticketObj.viewTicket();
            system("pause");
            system("cls");
            break;
        case 3:
            ticketObj.searchTicket();
            system("pause");
            system("cls");
            break;
        case 4:
            ticketObj.updateTicket();
            system("pause");
            system("cls");
            break;
        case 5:
            ticketObj.cancelTicket();
            system("pause");
            system("cls");
            break;
        case 0:
            break;
        default:
            cout << "Invalid choice!" << endl;
            system("pause");
            system("cls");
            break;
        }
    } while (ticketChoice != 0);
}
void Schedule::schedule() {
    system("CLS");
    int scheduleChoice;
    Schedule scheduleObj;
    do
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        cout << "\n===================================" << endl;
        cout << "\tSCHEDULE MENU";
        cout << "\n===================================" << endl;
        cout << "1. Add Time" << endl;
        cout << "2. View Time" << endl;
        cout << "3. Update Time" << endl;
        cout << "4. Search Time" << endl;
        cout << "5. Remove Time" << endl;
        cout << "0. Go Back" << endl;
        cout << "\n====================" << endl;
        cout << "Enter your choice: ";
        scheduleChoice = Utility::GetNumberFromUser(1);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        switch (scheduleChoice)
        {
        case 1:
            scheduleObj.addTime();
            system("pause");
            system("cls");
            break;
        case 2:
            scheduleObj.viewTime();
            system("pause");
            system("cls");
            break;
        case 3:
            scheduleObj.updateTime();
            system("pause");
            system("cls");
            break;
        case 4:
            scheduleObj.searchTime();
            system("pause");
            system("cls");
            break;
        case 5:
            scheduleObj.removeTime();
            system("pause");
            system("cls");
            break;
        case 0:
            break;
        default:
            cout << "Invalid choice!" << endl;
            system("pause");
            system("cls");
            break;
        }
    } while (scheduleChoice != 0);




}

int main()
{
    //	
    int opp = 0;
    login l;
    do {
        system("cls");
        opp = login::menu(opp);
        switch (opp)
        {
        case 1:
            system("cls");
            l.inputdataadmin();
            break;

        case 2:
        {

            system("cls");
            if (l.loginadmin())
            {
                system("CLS");

                showData();

                Event_Management e;
                Event_Organizer E;
                Attendee a;
                Ticket t;
                Schedule s;
                int choice;


                string title = "Event Registration by Ali Hassan";
                string menu = "MAIN MENU";

                cout << "******************************************" << endl;
                cout << "*                                        *" << endl;
                cout << "*    " << title << "    *" << endl;
                cout << "*                                        *" << endl;
                cout << "******************************************" << endl;
                cout << endl << endl;
                system("pause");
                system("CLS");

                do
                {
                    system("CLS");
                    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
                    cout << endl;
                    cout << " ==========================================" << endl;
                    cout << "|\t\t" << menu << "\t\t   |" << endl;
                    cout << " ==========================================" << endl;
                    cout << "| 1. Event Management\t\t\t  |" << endl;
                    cout << " ==========================================" << endl;
                    cout << "| 2. Event Organizer\t\t\t  |" << endl;
                    cout << " ==========================================" << endl;
                    cout << "| 3. Attendee\t\t\t  |" << endl;
                    cout << " ==========================================" << endl;
                    cout << "| 4. Ticket\t\t\t |" << endl;
                    cout << " ==========================================" << endl;
                    cout << "| 5. Schedule\t\t\t |" << endl;
                    cout << " ==========================================" << endl;
                    cout << "| 0. Exit\t\t\t\t |" << endl;
                    cout << "==========================================" << endl;
                    cout << "Enter your choice: ";
                    choice = Utility::GetNumberFromUser(1);
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

                    switch (choice)
                    {
                    case 1:
                    {

                        Event_Management::event_managementmenu();
                        break;
                    }
                    case 2:
                    {
                        Event_Organizer::eventorganizermenu();
                        break;
                    }
                    case 3:
                    {
                        Attendee::attendeemenu();
                        break;

                    }
                    case 4:
                    {
                        Ticket::ticketmenu();
                        break;
                    }
                    case 5:
                    {
                        Schedule::schedule();
                        break;
                    }
                    case 0:
                        break;
                    }
                } while (choice != 0);
                cout << "System is running..." << endl;
                system("pause");
            }
            break;
        }

        case 3:
            cout << "Exiting program please wait";
            for (int i = 0; i < 6; i++)

            {

                cout << ".";

                Sleep(500);

            }
            exit(0);

        default:
            cout << "Invalid Choice......" << endl;
        }

    } while (opp != 3);

    return 0;

}
