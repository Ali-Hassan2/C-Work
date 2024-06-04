#include <iostream>
#include<stdio.h>
#include <string>
#include <windows.h>
#include<cstdlib>
#include<limits>
#include<fstream>
#include <iostream>
#include <windows.h>
#include<conio.h>
#include<list>
using namespace std;

#define maxsize 100
/*void showData()
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
}*/
class EventCollection;
class organizercollection;
class Event_Organizer;
enum GENDER {
    male, female  //0 , 1
};
class person
{
public:
    string name;
    string email;
    int phone;
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
    string lev;
    Time()
    {
        hh = 0;
        min = 0;
    }
    ~Time()
    {

    }
};

class Event_Management {
public:
    int eid;
    string name;
    Time t;
    Date d;
    string location;
    string type;
    string description;
    std::list<Event_Organizer> organizerList;
    Event_Management() {
        name = '\0';
        location = '\0';
        type = '\0';
        description = '\0';
    }

    ~Event_Management() {}
    static void event_managementmenu();
    void addEvent();
    void checkEvent();
    void searchEvent();
    void removeEvent();
    void updateEvent();
};



class Event_Organizer : public person
{
public:

    int oid;
    int registration_number;
    Date date_of_birth;
    Event_Management* ptrevent;

public:
    Event_Organizer()
    {
        oid = 0;
        registration_number = 0;
        ptrevent = nullptr;
    }
    ~Event_Organizer() {
    }
    static void eventorganizermenu();
    void addOrganizer(EventCollection& eventCollection);
    void viewOrganizer();
    void searchOrganizer();
    void updateOrganizer();
    void removeOrganizer();
};


//-----------------
class Attendee :public person
{
public:
    int aid;
    string special_request;

public:
    Attendee()
    {
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

class Ticket
{
public:
    int tid;
    string type;
    int price;
    Date d;
    Attendee* ptrattendee;
public:
    Ticket()
    {
        price = 0;
        type = '\0';
        ptrattendee = NULL;
    }
    ~Ticket() {
    }
    static void ticketmenu();
    void addTicket();
    void viewTicket();
    void searchTicket();
    void updateTicket();
    void cancelTicket();
};

class Schedule : public Time
{
public:
    int sid;
    Time starting_time;
    Time duration;
    Time ceremony;
    Time venue_time;
    Time  ending_time;
public:
    Schedule()
    {
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
        cout << "\n\n\nEnter the new user name : ";
        adminusername = Utility::GetStringFromUser(15);
        cout << "\n\n\nEnter the new password : ";
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
        cout << "\n\n\nEnter the admin username : ";
        au = Utility::GetStringFromUser(15);
        cout << "\n\n\nEnter the admin password : ";
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




        cout << "\n\n\n\t\t\t\t\t\t\t--------* Login Page *---------\n\n\n" << endl;
        cout << "\n\n\n\n";
        cout << "\t\t\t\t\t\t************************\n" << endl;
        cout << "\t\t\t\t\t\t1. Registration...\n" << endl;
        cout << "\t\t\t\t\t\t2. Login....\n" << endl;
        cout << "\t\t\t\t\t\t3. Exit Program...\n" << endl;
        cout << "\t\t\t\t\t\t************************" << endl;
        cout << "\t\t\t\t\t\tEnter the choice : ";
        cin >> op;

        return op;

    }

};

// event collection class

class EventCollection {
private:
    static int idcount;
    static const int MAX_EVENTS = 100;
    Event_Management events[MAX_EVENTS];
    int count;

public:
    
    EventCollection() {
        count = 0;
    }

    void addEvent(Event_Management& event) {
        if (count < MAX_EVENTS) {
            event.eid = ++idcount;
            events[count] = event;
            count++;

            ofstream outputFile("E:\\events.txt", ios::app);
            if (outputFile.is_open()) {
                outputFile << "Event ID: " << event.eid << endl;
                outputFile << "Name: " << event.name << endl;
                outputFile << "Date: " << event.d.dd << "/" << event.d.mm << "/" << event.d.yyyy << endl;
                outputFile << "Time: " << event.t.hh << ":" << event.t.min << endl;
                outputFile << "Location: " << event.location << endl;
                outputFile << "Type: " << event.type << endl;
                outputFile << "Description: " << event.description << endl;
                outputFile << "-----------------------------------------" << endl;
                outputFile.close();
                cout << "Event added successfully!" << endl;
                cout << "Assigned Event ID: " << event.eid << endl;
            }
            else {
                cout << "Error in opening the file." << endl;
                cout << "Event not added successfully!" << endl;
            }

        }
        else {
            cout << "Event collection is full. Cannot add more events." << endl;
        }
    }
    Event_Management* getEventByID(int event_id) {
        for (int i = 0; i < count; i++) {
            if (events[i].eid == event_id) {
                return &events[i];
            }
        }
        return nullptr; // Event not found
    }

    void saveEventsToFile() {
        // Your code to save events to a file
    }
    
};

int EventCollection::idcount = 0;

EventCollection eventCollection;
// int EventCollection::idcount = eventCollection.getLastAssignedEventID() + 1;
void Event_Management::addEvent() {
    Event_Organizer e;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    cout << "\t\t\t\t\t-----------* Enter event details *------------" << endl;
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

    eventCollection.addEvent(*this);

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void Event_Management::checkEvent() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    ifstream inputFile("E:\\events.txt");

    if (!inputFile.is_open()) {
        cout << "Error in opening the file." << endl;
        return;
    }

    cout << "\t\t\t\t\t-------* Event List *----------" << endl;
    cout << endl << endl << "\n";

    string line;
    while (getline(inputFile, line)) {
        if (line.find("Event ID: ") != string::npos) {

            cout << line << "   ";
            getline(inputFile, line); // Read the next line
            cout << line << "   ";
            getline(inputFile, line);
            cout << line << "   ";
            getline(inputFile, line);
            cout << line << "   ";
            getline(inputFile, line);
            cout << line << "   ";
            getline(inputFile, line);
            cout << line << "   ";
            getline(inputFile, line);
            cout << line << "   ";

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
    cout << "\t\t\t\t\t------* Search *-------" << endl;
    cout << endl << endl << "\n";

    cout << "Enter the ID of the Event: ";
    cin >> id;
    ifstream read;
    read.open("E:\\events.txt");
    if (read.is_open())
    {
        string data;
        while (getline(read, data))
        {
            if (data.find("Event ID: " + to_string(id)) != string::npos)
            {
                cout << "\t\t\t\t\t-----* Event Details *-------" << endl;
                cout << endl << endl << "\n";
                for (int i = 0; i < 6; i++)
                {
                    // data is in 6 lines
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


void Event_Management::updateEvent() {
    int uid;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    cout << "\t\t------* Update Event *-------" << endl;
    cout << endl << endl;

    cout << "Enter the ID of the Event you want to update: ";
    cin >> uid;
    fstream file;
    file.open("E:\\events.txt", ios::in | ios::out); // Open for both reading and writing

    if (file.is_open()) {
        string line;
        bool eventFound = false;
        size_t pos;

        while (getline(file, line)) {
            pos = line.find("Event ID: " + to_string(uid));
            if (pos != string::npos) {
                eventFound = true;
                cout << "\t\t-----* Current Event Details *-------" << endl;
                cout << endl << endl;
                for (int i = 0; i < 6; i++) {
                    // Print current event details
                    cout << line << "| ";
                    getline(file, line);
                }
                cout << "\n---------------------------" << endl;

                // Prompt the user to update the event details
                cout << "\t\t-----* Enter New Event Details *-------" << endl;
                cout << endl << endl;
                Event_Management updatedEvent;
                updatedEvent.eid = uid;
                cout << "Event Name: ";
                cin.ignore();
                getline(cin, updatedEvent.name);
                cout << "Event Date (dd mm yyyy): ";
                cin >> updatedEvent.d.dd >> updatedEvent.d.mm >> updatedEvent.d.yyyy;
                cout << "Event Time (hh mm): ";
                cin >> updatedEvent.t.hh >> updatedEvent.t.min;
                cout << "Event Location: ";
                cin.ignore();
                getline(cin, updatedEvent.location);
                cout << "Event Type: ";
                getline(cin, updatedEvent.type);
                cout << "Event Description: ";
                getline(cin, updatedEvent.description);

                // Update the event details in the file
                file.seekp(pos); // Move to the position of the found line
                file << "Event ID: " << updatedEvent.eid << endl;
                file << "Name: " << updatedEvent.name << endl;
                file << "Date: " << updatedEvent.d.dd << "/" << updatedEvent.d.mm << "/" << updatedEvent.d.yyyy << endl;
                file << "Time: " << updatedEvent.t.hh << ":" << updatedEvent.t.min << endl;
                file << "Location: " << updatedEvent.location << endl;
                file << "Type: " << updatedEvent.type << endl;
                file << "Description: " << updatedEvent.description << endl;
                file << "-----------------------------------------" << endl;
                break;
            }
        }

        file.close();

        if (eventFound) {
            cout << "Event with ID " << uid << " updated successfully!" << endl;
        }
        else {
            cout << "Event with ID " << uid << " not found. No changes were made." << endl;
        }
    }
    else {
        cout << "Error in opening the file." << endl;
    }

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void Event_Management::removeEvent() {
    int rid;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    cout << "\t\t------* Remove Event *-------" << endl;
    cout << endl << endl;

    cout << "Enter the ID of the Event you want to remove: ";
    cin >> rid;

    ifstream inputFile("E:\\events.txt");
    if (inputFile.is_open()) {
        ofstream outputFile("E:\\temp_events.txt");
        if (outputFile.is_open()) {
            string line;
            bool eventFound = false;
            size_t pos;

            while (getline(inputFile, line)) {
                pos = line.find("Event ID: " + to_string(rid));
                if (pos != string::npos) {
                    eventFound = true;
                    // Skip the lines of the event to be removed
                    for (int i = 0; i < 7; i++) {
                        getline(inputFile, line);
                    }
                }
                else {
                    // Copy the current line to the temporary file
                    outputFile << line << endl;
                }
            }

            inputFile.close();
            outputFile.close();

            if (eventFound) {
                // Rename the temporary file to overwrite the original events file
                remove("E:\\events.txt");
                rename("E:\\temp_events.txt", "E:\\events.txt");
                cout << "Event with ID " << rid << " removed successfully!" << endl;
            }
            else {
                remove("E:\\temp_events.txt"); // Delete the temporary file
                cout << "Event with ID " << rid << " not found. No changes were made." << endl;
            }
        }
        else {
            inputFile.close();
            cout << "Error in creating the temporary file." << endl;
        }
    }
    else {
        cout << "Error in opening the file." << endl;
    }

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

// Organizer collection class

class organizercollection
{

private:
    static int idcount;
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
            org.oid = ++idcount;
            orgs[count] = org;
            count++;

            ofstream write;
            write.open("E:\\orgs.txt", ios::app);
            if (write.is_open())
            {
                for (int i = 0; i < count; i++)
                {
                    write << "ID: " << orgs[i].oid << endl;
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
int organizercollection::idcount = 0;
void Event_Organizer::addOrganizer(EventCollection& eventCollection) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);

    cout << "\t\t-------* Enter Organizer Details *---------\n" << endl;
    cout << endl << endl;

    int event_id;
    cout << "Enter the event ID for which you want to add an organizer: ";
    cin >> event_id;

    Event_Management* event = eventCollection.getEventByID(event_id);
    if (event != nullptr) {
        ptrevent = event;

        cout << "Enter the Name of Organizer: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter the Phone Number: ";
        cin >> phone;
        cout << "Enter the Email: ";
        cin >> email;
        cout << "Enter the Registration number: ";
        cin >> registration_number;
        cout << "Enter the date of birth (dd mm yyyy): ";
        cin >> date_of_birth.dd >> date_of_birth.mm >> date_of_birth.yyyy;

        // Note: You don't need to create another organizer collection object here.
        // You can directly add the organizer to the event's organizer list.

        // Assuming you have a list of organizers inside Event_Management class.
        event->organizerList.push_back(*this); // Assuming organizerList is a std::vector<Event_Organizer> in Event_Management.

        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
    else {
        cout << "No event with this id.." << endl;
    }
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
                cout << line << "   ";   //1
                getline(read, line);
                cout << line << "   ";  // 2
                getline(read, line);
                cout << line << "   ";//3
                getline(read, line);
                cout << line << "   ";//4
                getline(read, line);
                cout << line << "   "; // 5
                getline(read, line);
                cout << line << "   ";//6
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
    int uid;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    cout << "\t\t------* Update Organizer *-------" << endl;
    cout << endl << endl;

    cout << "Enter the ID of the Organizer you want to update: ";
    cin >> uid;
    fstream file;
    file.open("E:\\orgs.txt", ios::in | ios::out); // Open for both reading and writing

    if (file.is_open()) {
        string line;
        bool eventFound = false;
        size_t pos;

        while (getline(file, line)) {
            pos = line.find("ID: " + to_string(uid));
            if (pos != string::npos) {
                eventFound = true;
                cout << "\n";
                cout << "\t\t-----* Current Organizer Details *-------" << endl;
                cout << endl << endl;
                for (int i = 0; i < 6; i++) {
                    // Print current event details
                    cout << line << "| ";
                    getline(file, line);
                }
                cout << "\n---------------------------" << endl;

                // Prompt the user to update the event details
                cout << "\t\t-----* Enter New Organizer Details *-------" << endl;
                cout << endl << endl;
                Event_Organizer updatedorg;
                updatedorg.oid = uid;
                cout << "Enter the Name of Organizer: ";
                cin.ignore();
                getline(cin, updatedorg.name);
                cout << "Enter the Phone Number: ";
                cin >> updatedorg.phone;
                cout << "Enter the Email: ";
                cin >> updatedorg.email;
                cout << "Enter the Registration number: ";
                cin >> updatedorg.registration_number;
                cout << "Enter the date of birth (dd mm yyyy): ";
                cin >> updatedorg.date_of_birth.dd >> updatedorg.date_of_birth.mm >> updatedorg.date_of_birth.yyyy;

                // Update the event details in the file
                file.seekp(pos); // Move to the position of the found line
                file << "ID: " << updatedorg.oid << endl;
                file << "Name: " << updatedorg.name << endl;
                file << "Phone: " << updatedorg.phone << endl;
                file << "Email: " << updatedorg.email << endl;
                file << "Registration_number: " << updatedorg.registration_number << endl;
                file << "DOB: " << updatedorg.date_of_birth.dd << " / " << updatedorg.date_of_birth.mm << " / " << updatedorg.date_of_birth.yyyy << endl;

                break;
            }
        }

        file.close();

        if (eventFound) {
            cout << "Organizer with ID " << uid << " updated successfully!" << endl;
        }
        else {
            cout << "Organizer with ID " << uid << " not found. No changes were made." << endl;
        }
    }
    else {
        cout << "Error in opening the file." << endl;
    }

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void Event_Organizer::removeOrganizer()
{
    int rid;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    cout << "\t\t------* Remove Organizer *-------" << endl;
    cout << endl << endl;

    cout << "Enter the ID of the Organizer you want to remove: ";
    cin >> rid;

    ifstream inputFile("E:\\orgs.txt");
    if (inputFile.is_open()) {
        ofstream outputFile("E:\\temp_orgs.txt");
        if (outputFile.is_open()) {
            string line;
            bool orgFound = false;
            size_t pos;

            while (getline(inputFile, line)) {
                pos = line.find("ID: " + to_string(rid));
                if (pos != string::npos) {
                    orgFound = true;
                    // Skip the lines of the event to be removed
                    for (int i = 0; i < 7; i++) {
                        getline(inputFile, line);
                    }
                }
                else {
                    // Copy the current line to the temporary file
                    outputFile << line << endl;
                }
            }

            inputFile.close();
            outputFile.close();

            if (orgFound) {
                // Rename the temporary file to overwrite the original events file
                remove("E:\\orgs.txt");
                rename("E:\\temp_orgs.txt", "E:\\orgs.txt");
                cout << "Organizer with ID " << rid << " removed successfully!" << endl;
            }
            else {
                remove("E:\\temp_orgs.txt"); // Delete the temporary file
                cout << "Organizer with ID " << rid << " not found. No changes were made." << endl;
            }
        }
        else {
            inputFile.close();
            cout << "Error in creating the temporary file." << endl;
        }
    }
    else {
        cout << "Error in opening the file." << endl;
    }

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

// Attendee collection class 

class attendeecollection {
private:
    static int idcount;
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
            att.aid = ++idcount;
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
                    write << " ID: " << attendee[i].aid << endl;
                    write << " Name: " << attendee[i].name << endl;
                    write << " Phone: " << attendee[i].phone << endl;
                    write << " Email: " << attendee[i].email << endl;
                    write << " Special Request: " << attendee[i].special_request << endl;
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
int attendeecollection::idcount = 0;
void Attendee::addAttendee()
{

    attendeecollection attendeecol;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    cout << "\t\t------* Attendee Details *------" << endl;
    cout << endl << endl;
    cout << "------------------\n" << endl;
    cout << "Enter the Name : ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter the Phone : ";
    cin >> phone;
    cout << "Enter the email : ";
    cin >> email;
    cout << "Special request(y/n) :";
    cin >> special_request;
    attendeecol.addattendee(*this);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

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
        cout << "\t\t------* Attendee List *-------" << endl;
        cout << endl << endl;
        string line;
        while (getline(read, line))
        {
            if (line.find("ID: ") != string::npos)
            {
                cout << line << "   ";   //1
                getline(read, line);
                cout << line << "   ";  // 2
                getline(read, line);
                cout << line << "   ";//3
                getline(read, line);
                cout << line << "   ";//4
                getline(read, line);
                cout << line << "   "; // 5
                getline(read, line);
                cout << line << "   ";//6
                getline(read, line);
                cout << endl;
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
                cout << "\t\t------* Attendee Details *------" << endl;
                cout << endl << endl;
                for (int i = 0; i < 6; i++)
                {
                    getline(read, data);
                    cout << data << "|  ";
                }
            }
        }
        read.close();
    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void Attendee::updateAttendee()
{
    int uid;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    cout << "\t\t------* Update Attendee *-------" << endl;
    cout << endl << endl;

    cout << "Enter the ID of the Attendee you want to update: ";
    cin >> uid;
    cin.ignore(); // Ignore newline character left in the buffer

    ifstream inputFile("E:\\attendee.txt");
    ofstream tempFile("E:\\temp.txt", ios::out); // Create a temporary file to store updated data

    if (inputFile.is_open() && tempFile.is_open()) {
        string line;
        bool attendeeFound = false;

        while (getline(inputFile, line)) {
            if (line.find("ID: " + to_string(uid)) != string::npos) {
                attendeeFound = true;
                cout << "\n";
                cout << "\t\t-----* Current Attendee Details *-------" << endl;
                cout << endl << endl;
                for (int i = 0; i < 6; i++) {
                    // Print and skip current attendee details
                    cout << line << "| ";
                    getline(inputFile, line);
                }
                cout << "\n---------------------------" << endl;

                // Prompt the user to update the attendee details
                cout << "\t\t-----* Enter New Attendee Details *-------" << endl;
                cout << endl << endl;
                Attendee updateatt;
                updateatt.aid = uid;
                cout << "Enter the Name : ";
                getline(cin, updateatt.name);
                cout << "Enter the Phone : ";
                cin >> updateatt.phone;
                cout << "Enter the email : ";
                cin >> updateatt.email;
                cout << "Special request(y/n) :";
                cin >> updateatt.special_request;

                // Write the updated details to the temporary file
                tempFile << "ID: " << updateatt.aid << endl;
                tempFile << "Name: " << updateatt.name << endl;
                tempFile << "Phone: " << updateatt.phone << endl;
                tempFile << "Email: " << updateatt.email << endl;
                tempFile << "Special Request: " << updateatt.special_request << endl;

                // Skip the old details in the input file
                for (int i = 0; i < 5; i++) {
                    getline(inputFile, line);
                }
            }
            else {
                // Copy the current line to the temporary file
                tempFile << line << endl;
            }
        }

        inputFile.close();
        tempFile.close();

        // Rename the temporary file to the original file
        if (attendeeFound && remove("E:\\attendee.txt") == 0 && rename("E:\\temp.txt", "E:\\attendee.txt") == 0) {
            cout << "Attendee with ID " << uid << " updated successfully!" << endl;
        }
        else {
            cout << "Attendee with ID " << uid << " not found. No changes were made." << endl;
        }
    }
    else {
        cout << "Error in opening the file." << endl;
    }

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void Attendee::removeAttendee()
{
    int rid;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    cout << "\t\t------* Remove Attendee *-------" << endl;
    cout << endl << endl;
    cout << "Enter the ID of the Attendee you want to remove: ";
    rid = Utility::GetNumberFromUser(3);
    ifstream inputfile("E:\\attendee.txt");
    if (inputfile.is_open())
    {
        ofstream outputfile("E:\\temp_attendee.txt");
        if (outputfile.is_open())
        {
            string line;
            bool attendeefound = false; // Initialize the flag
            size_t pos;
            while (getline(inputfile, line))
            {
                pos = line.find("ID: " + to_string(rid));
                if (pos != string::npos)
                {
                    attendeefound = true; // Set the flag when attendee is found
                    for (int i = 0; i < 6; i++)
                    {
                        getline(inputfile, line);
                    }
                }
                else
                {
                    outputfile << line << endl;
                }
            }
            inputfile.close();
            outputfile.close();
            if (attendeefound)
            {
                remove("E:\\attendee.txt"); // Remove the original file
                rename("E:\\temp_attendee.txt", "E:\\attendee.txt"); // Rename the temporary file
                cout << "Attendee with ID " << rid << " removed successfully..!!" << endl;
            }
            else
            {
                remove("E:\\temp_attendee.txt"); // Remove the temporary file
                cout << "Attendee with ID " << rid << " not found. No changes have been made." << endl;
            }
        }
        else
        {
            inputfile.close();
            cout << "Error in creating the temporary file.." << endl;
        }
    }
    else
    {
        cout << "Error in opening the file.." << endl;
    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}


//Ticket Collection
class ticketcollection {
private:
    static int idcount;
    static const int max_size = 100;
    Ticket tickets[max_size];
    int count;
public:
    ticketcollection()
    {
        count = 0;
    }
    void addticket(Ticket& tic)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        if (count < max_size)
        {
            tic.tid = ++idcount;
            tickets[count] = tic;
            count++;
            ofstream write;
            write.open("E:\\ticket.txt", ios::app);
            if (!write.is_open())
            {
                cout << "Error in opening the file.." << endl;
                return;
            }
            else
            {
                for (int i = 0; i < count; i++)
                {
                    write << "ID: " << tickets[i].tid << endl;
                    write << "Type: " << tickets[i].type << endl;
                    write << "Price: " << tickets[i].price << endl;
                    write << "Expiry Date: " << tickets[i].d.dd << "/" << tickets[i].d.mm << "/" << tickets[i].d.yyyy << endl;
                }
                cout << "Data Saved Successfully..." << endl;
                write.close();
            }
        }
        else
        {
            cout << "There is not enough space for storing the tickets..." << endl;
        }
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }

};
int ticketcollection::idcount = 0;
void Ticket::addTicket() {

    ticketcollection tc;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    cout << "\t\t------* Ticket Details *------" << endl;
    cout << endl << endl;
    cout << "------------------\n" << endl;
    cout << "Enter the ticket type: ";
    type = Utility::GetStringFromUser(8);
    cout << "Enter the price of the ticket: ";
    price = Utility::GetNumberFromUser(12);
    cout << "Enter the expiry date: ";
    cin >> d.dd >> d.mm >> d.yyyy;
    tc.addticket(*this);

}

void Ticket::viewTicket()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    ifstream read;
    read.open("E:\\ticket.txt");
    if (!read.is_open())
    {
        cout << "Error in opening the file...!!" << endl;
        return;
    }
    else
    {
        cout << "\t\t------* Organizer List *-------" << endl;
        cout << endl << endl;
        string line;
        while (getline(read, line))
        {
            if (line.find("ID: " + tid) != string::npos)
            {
                cout << line << "   ";   //1
                getline(read, line);
                cout << line << "   ";  // 2
                getline(read, line);
                cout << line << "   ";//3
                getline(read, line);
                cout << line << "   ";//4
                getline(read, line);

                cout << endl;
            }
        }
    }
    read.close();
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void Ticket::searchTicket()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    cout << "\t\t-----* Search *-------" << endl;
    cout << endl << endl;
    int id;
    cout << "Enter the ID : ";
    cin >> id;
    ifstream read;
    read.open("E:\\ticket.txt");
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
                cout << "\t\t------* Ticket Details *------" << endl;
                cout << endl << endl;
                for (int i = 0; i < 5; i++)
                {
                    getline(read, data);
                    cout << data << "|  ";
                }
            }
        }
        read.close();
    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}
void Ticket::updateTicket()
{
    int uid;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    cout << "\t\t------* Update Ticket *-------" << endl;
    cout << endl << endl;

    cout << "Enter the ID of the ticket you want to update: ";
    cin >> uid;
    cin.ignore(); // Ignore newline character left in the buffer

    ifstream inputFile("E:\\ticket.txt");
    ofstream tempFile("E:\\temp2.txt", ios::out); // Create a temporary file to store updated data

    if (inputFile.is_open() && tempFile.is_open()) {
        string line;
        bool ticketFound = false;

        while (getline(inputFile, line)) {
            if (line.find("ID: " + to_string(uid)) != string::npos) {
                ticketFound = true;
                cout << "\n";
                cout << "\t\t-----* Current Ticket Details *-------" << endl;
                cout << endl << endl;
                for (int i = 0; i < 6; i++) {
                    // Print and skip current attendee details
                    cout << line << "| ";
                    getline(inputFile, line);
                }
                cout << "\n---------------------------" << endl;

                // Prompt the user to update the attendee details
                cout << "\t\t-----* Enter New Ticket Details *-------" << endl;
                cout << endl << endl;
                Ticket updatetic;
                updatetic.tid = uid;
                cout << "Enter the ticket type: ";
                updatetic.type = Utility::GetStringFromUser(8);
                cout << "Enter the price of the ticket: ";
                updatetic.price = Utility::GetNumberFromUser(12);
                cout << "Enter the expiry date: ";
                cin >> updatetic.d.dd >> updatetic.d.mm >> updatetic.d.yyyy;


                // Write the updated details to the temporary file
                tempFile << "ID: " << updatetic.tid << endl;
                tempFile << "Type: " << updatetic.type << endl;
                tempFile << "Price: " << updatetic.price << endl;
                tempFile << "Expiry Date: " << updatetic.d.dd << "/" << updatetic.d.mm << "/" << updatetic.d.yyyy << endl;


                // Skip the old details in the input file
                for (int i = 0; i < 5; i++) {
                    getline(inputFile, line);
                }
            }
            else {
                // Copy the current line to the temporary file
                tempFile << line << endl;
            }
        }

        inputFile.close();
        tempFile.close();

        // Rename the temporary file to the original file
        if (ticketFound && remove("E:\\ticket.txt") == 0 && rename("E:\\temp2.txt", "E:\\ticket.txt") == 0) {
            cout << "Ticket with ID " << uid << " updated successfully!" << endl;
        }
        else {
            cout << "Attendee with ID " << uid << " not found. No changes were made." << endl;
        }
    }
    else {
        cout << "Error in opening the file." << endl;
    }

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void Ticket::cancelTicket()
{
    int rid;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    cout << "\t\t------* Remove Ticket *-------" << endl;
    cout << endl << endl;
    cout << "Enter the ID of the Ticket you want to remove: ";
    rid = Utility::GetNumberFromUser(3);
    ifstream inputfile("E:\\ticket.txt");
    if (inputfile.is_open())
    {
        ofstream outputfile("E:\\temp_ticket.txt");
        if (outputfile.is_open())
        {
            string line;
            bool ticketfound = false; // Initialize the flag
            size_t pos;
            while (getline(inputfile, line))
            {
                pos = line.find("ID: " + to_string(rid));
                if (pos != string::npos)
                {
                    ticketfound = true; // Set the flag when attendee is found
                    for (int i = 0; i < 6; i++)
                    {
                        getline(inputfile, line);
                    }
                }
                else
                {
                    outputfile << line << endl;
                }
            }
            inputfile.close();
            outputfile.close();
            if (ticketfound)
            {
                remove("E:\\ticket.txt"); // Remove the original file
                rename("E:\\temp_ticket.txt", "E:\\ticket.txt"); // Rename the temporary file
                cout << "Attendee with ID " << rid << " removed successfully..!!" << endl;
            }
            else
            {
                remove("E:\\temp_ticket.txt"); // Remove the temporary file
                cout << "Ticket with ID " << rid << " not found. No changes have been made." << endl;
            }
        }
        else
        {
            inputfile.close();
            cout << "Error in creating the temporary file.." << endl;
        }
    }
    else
    {
        cout << "Error in opening the file.." << endl;
    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
class timecollection {
private:
    static int idcount;
    static const int max_size = 100;
    Schedule schedules[max_size];
    int count;
public:
    timecollection()
    {
        count = 0;
    }
    void addtime(Schedule& sch)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        if (count < max_size)
        {
            sch.sid = ++idcount;
            schedules[count] = sch;
            count++;
            ofstream write;
            write.open("E:\\sch.txt", ios::app);
            if (!write.is_open())
            {
                cout << "Error in opening the file...!!!" << endl;
                return;
            }
            else
            {
                for (int i = 0; i < count; i++)
                {
                    write << "ID: " << schedules[i].sid << endl;
                    write << "Starting: " << schedules[i].starting_time.hh << " : " << schedules[i].starting_time.min << " : " << schedules[i].starting_time.lev << endl;
                    write << "Duration: " << schedules[i].duration.hh << " : " << schedules[i].duration.min << " : " << schedules[i].duration.lev << endl;
                    write << "Cermony: " << schedules[i].ceremony.hh << " : " << schedules[i].ceremony.min << " : " << schedules[i].ceremony.lev << endl;
                    write << "Venue: " << schedules[i].venue_time.hh << " : " << schedules[i].venue_time.min << " : " << schedules[i].venue_time.lev << endl;
                    write << "End: " << schedules[i].ending_time.hh << " : " << schedules[i].ending_time.min << " : " << schedules[i].ending_time.lev << endl;
                }
                cout << "Data Saved Successfully.." << endl;
                write.close();
            }
        }
        else
        {
            cout << "There is no enought space to accomodate the Schedules.." << endl;
        }
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
};
int timecollection::idcount = 0;
void Schedule::addTime()
{
    timecollection sch;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    cout << "\t\t------* Ticket Details *------" << endl;
    cout << endl << endl;
    cout << "------------------\n" << endl;
    cout << "Enter the starting time: ";
    cin >> starting_time.hh >> starting_time.min >> starting_time.lev;
    cout << "Enter the Duration time: ";
    cin >> duration.hh >> duration.min >> duration.lev;
    cout << "Enter the ceremony time: ";
    cin >> ceremony.hh >> ceremony.min >> ceremony.lev;
    cout << "Enter the venue time: ";
    cin >> venue_time.hh >> venue_time.min >> venue_time.lev;
    cout << "Enter the ending time: ";
    cin >> ending_time.hh >> ending_time.min >> ending_time.lev;
    sch.addtime(*this);


}
void Schedule::viewTime()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    ifstream read;
    read.open("E:\\sch.txt");
    if (!read.is_open())
    {
        cout << "Error in opening the file.." << endl;
    }
    else
    {
        cout << "\t\t------* Schedule List *-------" << endl;
        cout << endl << endl;
        string line;
        while (getline(read, line))
        {
            if (line.find("ID: " + sid) != string::npos)
            {
                cout << line << "|  ";   //1
                getline(read, line);
                cout << line << "|  ";  // 2
                getline(read, line);
                cout << line << "|  ";//3
                getline(read, line);
                cout << line << "|  ";//4
                getline(read, line);
                cout << line << "|  ";//4
                getline(read, line);
                cout << line << "|  ";//4
                getline(read, line);
                cout << endl;
            }
        }

    }
    read.close();
    cout << endl;
}
void Schedule::searchTime()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    cout << "\t\t-----* Search *-------" << endl;
    cout << endl << endl;
    int id;
    cout << "Enter the ID: ";
    cin >> id;
    ifstream read;
    read.open("E:\\sch.txt");
    if (!read.is_open())
    {
        cout << "Error in opening the file.." << endl;
        return;
    }
    else
    {
        string line;
        while (getline(read, line))
        {
            if (line.find("ID: " + id) != string::npos)
            {
                cout << "\t\t------* Schedule Details *------" << endl;
                cout << endl << endl;
                for (int i = 0; i < 5; i++)
                {
                    getline(read, line);
                    cout << line << "|  ";
                }
            }
        }
    }
    read.close();
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}
void Schedule::updateTime()
{
    int uid;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    cout << "\t\t------* Update Schedule *-------" << endl;
    cout << endl << endl;

    cout << "Enter the ID of the schedule you want to update: ";
    cin >> uid;
    cin.ignore(); // Ignore newline character left in the buffer

    ifstream inputFile("E:\\sch.txt");
    ofstream tempFile("E:\\temp3.txt", ios::out); // Create a temporary file to store updated data

    if (inputFile.is_open() && tempFile.is_open()) {
        string line;
        bool scheduleFound = false;

        while (getline(inputFile, line)) {
            if (line.find("ID: " + to_string(uid)) != string::npos) {
                scheduleFound = true;
                cout << "\n";
                cout << "\t\t-----* Current Ticket Details *-------" << endl;
                cout << endl << endl;
                for (int i = 0; i < 7; i++) {
                    // Print and skip current attendee details
                    cout << line << "| ";
                    getline(inputFile, line);
                }
                cout << "\n---------------------------" << endl;

                // Prompt the user to update the attendee details
                cout << "\t\t-----* Enter New Schedule Details *-------" << endl;
                cout << endl << endl;
                Schedule updatesch;
                updatesch.sid;

                cout << "Enter the starting time: ";
                cin >> updatesch.starting_time.hh >> updatesch.starting_time.min >> updatesch.starting_time.lev;
                cout << "Enter the Duration time: ";
                cin >> updatesch.duration.hh >> updatesch.duration.min >> updatesch.duration.lev;
                cout << "Enter the ceremony time: ";
                cin >> updatesch.ceremony.hh >> updatesch.ceremony.min >> updatesch.ceremony.lev;
                cout << "Enter the venue time: ";
                cin >> updatesch.venue_time.hh >> updatesch.venue_time.min >> updatesch.venue_time.lev;
                cout << "Enter the ending time: ";
                cin >> updatesch.ending_time.hh >> updatesch.ending_time.min >> updatesch.ending_time.lev;

                // Write the updated details to the temporary file

                tempFile << "ID: " << updatesch.sid << endl;
                tempFile << "Starting: " << updatesch.starting_time.hh << " : " << updatesch.starting_time.min << " : " << updatesch.starting_time.lev << endl;
                tempFile << "Duration: " << updatesch.duration.hh << " : " << updatesch.duration.min << " : " << updatesch.duration.lev << endl;
                tempFile << "Cermony: " << updatesch.ceremony.hh << " : " << updatesch.ceremony.min << " : " << updatesch.ceremony.lev << endl;
                tempFile << "Venue: " << updatesch.venue_time.hh << " : " << updatesch.venue_time.min << " : " << updatesch.venue_time.lev << endl;
                tempFile << "End: " << updatesch.ending_time.hh << " : " << updatesch.ending_time.min << " : " << updatesch.ending_time.lev << endl;

                // Skip the old details in the input file
                for (int i = 0; i < 7; i++) {
                    getline(inputFile, line);
                }
            }
            else {
                // Copy the current line to the temporary file
                tempFile << line << endl;
            }
        }

        inputFile.close();
        tempFile.close();

        // Rename the temporary file to the original file
        if (scheduleFound && remove("E:\\sch.txt") == 0 && rename("E:\\temp3.txt", "E:\\sch.txt") == 0) {
            cout << "Schedule with ID " << uid << " updated successfully!" << endl;
        }
        else {
            cout << "Schedule with ID " << uid << " not found. No changes were made." << endl;
        }
    }
    else {
        cout << "Error in opening the file." << endl;
    }

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void Schedule::removeTime() {
    int rid;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    cout << "\t\t------* Remove Schedule *-------" << endl;
    cout << endl << endl;
    cout << "Enter the ID of the Schedule you want to remove: ";
    rid = Utility::GetNumberFromUser(3);

    ifstream inputfile("E:\\sch.txt");
    if (inputfile.is_open()) {
        ofstream outputfile("E:\\tem.txt");
        if (outputfile.is_open()) {
            string line;
            bool schedulefound = false; // Initialize the flag
            size_t pos;
            while (getline(inputfile, line)) {
                pos = line.find("ID: " + to_string(rid));
                if (pos != string::npos) {
                    schedulefound = true; // Set the flag when schedule is found
                    //cout << "Found schedule with ID: " << rid << endl; // Debugging output
                    //for (int i = 0; i < 6; i++) {
                        //getline(inputfile, line);
                        //cout << "Skipped line: " << line << endl; // Debugging output
                    //}
                }
                else {
                    outputfile << line << endl;
                }
            }
            inputfile.close();
            outputfile.close();
            if (schedulefound) {
                remove("E:\\sch.txt"); // Remove the original file
                rename("E:\\tem.txt", "E:\\sch.txt"); // Rename the temporary file
                cout << "Schedule with ID " << rid << " removed successfully..!!" << endl;
            }
            else {
                remove("E:\\tem.txt"); // Remove the temporary file
                cout << "Schedule with ID " << rid << " not found. No changes have been made." << endl;
            }
        }
        else {
            inputfile.close();
            cout << "Error in creating the temporary file.." << endl;
        }
    }
    else {
        cout << "Error in opening the file.." << endl;
    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
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
        cout << "\t\t\t\t\t\t\tEVENT MANAGEMENT MENU";
        cout << "\n\n\n\n";
        cout << "\t\t\t\t\t1. ADD EVENT\n" << endl;
        cout << "\t\t\t\t\t2. CHECK EVENT\n" << endl;
        cout << "\t\t\t\t\t3. SEARCH EVENT\n" << endl;
        cout << "\t\t\t\t\t4. REMOVE EVENT\n" << endl;
        cout << "\t\t\t\t\t5. UPDATE EVENT\n" << endl;
        cout << "\t\t\t\t\t0. GO BACK\n\n" << endl;
        cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
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
            system("cls");
            eventObj.removeEvent();
            system("pause");
            system("cls");
            break;
        case 5:
            system("cls");
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
    EventCollection e;
    organizercollection c;
    Event_Organizer organizerObj;
    do
    {
        EventCollection e;
        organizercollection o;
        system("CLS");
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);

        cout << "\t\t\t\t\t\t\tEVENT ORGANIZER MENU";
        cout << "\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t1. ADD ORGANIZER\n" << endl;
        cout << "\t\t\t\t\t\t2. VIEW ORGANIZER\n" << endl;
        cout << "\t\t\t\t\t\t3. SEARCH ORGANIZER\n" << endl;
        cout << "\t\t\t\t\t\t4. UPDATE ORGANIZER\n" << endl;
        cout << "\t\t\t\t\t\t5. REMOVE ORGANIZER\n" << endl;
        cout << "\t\t\t\t\t\t0. GO BACK\n" << endl;

        cout << "\t\t\t\t\t\tENTER YOUR CHOICE: ";
        organizerChoice = Utility::GetNumberFromUser(1);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

        switch (organizerChoice)
        {
        case 1:
            system("cls");
            organizerObj.addOrganizer(e);
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
        cout << "\t\t\t\t\t\t\t\t\tATTENDEE MENU";
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t1. ADD ATTENDEE\n" << endl;
        cout << "\t\t\t\t\t\t\t\t2. VIEW ATTENDEE\n" << endl;
        cout << "\t\t\t\t\t\t\t\t3. SEARCH ATTENDEE\n" << endl;
        cout << "\t\t\t\t\t\t\t\t4. REMOVE ATTENDEE\n" << endl;
        cout << "\t\t\t\t\t\t\t\t5. UPDATE ATTENDEE\n" << endl;
        cout << "\t\t\t\t\t\t\t\t0. GO BACK\n\n" << endl;
        cout << "\t\t\t\t\t\t\t\tENTER YOUR CHOICE: ";
        attendeeChoice = Utility::GetNumberFromUser(1);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        switch (attendeeChoice)
        {
        case 1:
            system("cls");
            attendeeObj.addAttendee();
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            attendeeObj.viewAttendee();
            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");
            attendeeObj.searchAttendee();
            system("pause");
            system("cls");
            break;
        case 4:
            system("cls");
            attendeeObj.removeAttendee();
            system("pause");
            system("cls");
            break;
        case 5:
            system("cls");
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
        cout << "\t\t\t\t\t\t\t\t\tTICKET MENU";
        cout << "\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t1. NEW TICKET\n" << endl;
        cout << "\t\t\t\t\t\t\t\t2. VIEW TICKET\n" << endl;
        cout << "\t\t\t\t\t\t\t\t3. SEARCH TICKET\n" << endl;
        cout << "\t\t\t\t\t\t\t\t4. UPDATE TICKET\n" << endl;
        cout << "\t\t\t\t\t\t\t\t5. CANCEL TICKET\n" << endl;
        cout << "\t\t\t\t\t\t\t\t0. GO BACK\n" << endl;
        cout << "\t\t\t\t\t\t\t\tENTER YOUR CHOICE: ";
        ticketChoice = Utility::GetNumberFromUser(1);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        switch (ticketChoice)
        {
        case 1:
            system("cls");
            ticketObj.addTicket();
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            ticketObj.viewTicket();
            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");
            ticketObj.searchTicket();
            system("pause");
            system("cls");
            break;
        case 4:
            system("cls");
            ticketObj.updateTicket();
            system("pause");
            system("cls");
            break;
        case 5:
            system("cls");
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
        cout << "\t\t\t\t\t\t\t\t\tSCHEDULE MENU";
        cout << "\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t1. ADD TIME\n" << endl;
        cout << "\t\t\t\t\t\t\t\t2. VIEW TIME\n" << endl;
        cout << "\t\t\t\t\t\t\t\t3. UPDATE TIME\n" << endl;
        cout << "\t\t\t\t\t\t\t\t4. SEARCH TIME\n" << endl;
        cout << "\t\t\t\t\t\t\t\t5. REMOVE TIME\n" << endl;
        cout << "\t\t\t\t\t\t\t\t0. GO BACK\n" << endl;
        cout << "\t\t\t\t\t\t\t\tENTER YOUR CHOICE: ";
        scheduleChoice = Utility::GetNumberFromUser(1);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        switch (scheduleChoice)
        {
        case 1:
            system("cls");
            scheduleObj.addTime();
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            scheduleObj.viewTime();
            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");
            scheduleObj.updateTime();
            system("pause");
            system("cls");
            break;
        case 4:
            system("cls");
            scheduleObj.searchTime();
            system("pause");
            system("cls");
            break;
        case 5:
            system("cls");
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

                //showData();

                Event_Management e;
                Event_Organizer E;
                Attendee a;
                Ticket t;
                Schedule s;
                int choice;


                string title = "Event Registration by Ali Hassan";
                string menu = "MAIN MENU";

                cout << "\t\t\t\t\t\t******************************************" << endl;
                cout << "\t\t\t\t\t\t*                                        *" << endl;
                cout << "\t\t\t\t\t\t*    " << title << "    *" << endl;
                cout << "\t\t\t\t\t\t*                                        *" << endl;
                cout << "\t\t\t\t\t\t******************************************" << endl;
                cout << endl << endl;
                system("pause");
                system("CLS");

                do
                {
                    system("CLS");
                    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
                    cout << endl;

                    cout << "\t\t\t\t\t\t" << menu << "\t\t   " << endl;
                    cout << "\n\n\n\n\n";
                    cout << " \t\t\t\t\t\t1. EVENT\n" << endl;
                    cout << " \t\t\t\t\t\t2. ORGANIZER\n" << endl;
                    cout << " \t\t\t\t\t\t3. ATTENDEE\n" << endl;
                    cout << " \t\t\t\t\t\t4. TICKET\n" << endl;
                    cout << " \t\t\t\t\t\t5. SCHEDULE\n" << endl;
                    cout << " \t\t\t\t\t\t0. EXIT\n" << endl;
                    cout << " \t\t\t\t\t\tENTER YOUR CHOICE: ";
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
