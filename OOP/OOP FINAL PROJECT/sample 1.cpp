#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Event_Organizer;
class person
{
public:
    string name;
    string email;
    int phone;
    //GENDER gen;
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

class Event_Management {
public:
    int eid;
    string name;
    Time t;
    Date d;
    string location;
    string type;
    string description;
    Event_Organizer organizer;

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
    
public:
    Event_Organizer()
    {
        oid = 0;
        registration_number = 0;
    }
    ~Event_Organizer() {
    }
    static void eventorganizermenu();
    void addOrganizer();
    void viewOrganizer();
    void searchOrganizer();
    void updateOrganizer();
    void removeOrganizer();
};
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

    Event_Organizer getOrganizerByID(int organizerID) {
        for (int i = 0; i < count; i++) {
            if (orgs[i].oid == organizerID) {
                return orgs[i];
            }
        }

        return Event_Organizer();
    }

};
int EventCollection::idcount = 0;

EventCollection eventCollection;
// int EventCollection::idcount = eventCollection.getLastAssignedEventID() + 1;
void Event_Management::addEvent() {
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

    // Get the ID of the organizer
    int organizerID;
    cout << "Enter the ID of the organizer: ";
    cin >> organizerID;

    // Get the organizer from the organizer collection
    Event_Organizer organizer = organizerCollection.getOrganizerByID(organizerID);

    // Set the organizer for the event
    this->organizer = organizer;

    eventCollection.addEvent(*this);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

int main() {

    int choice;
    do {
        cout << "--------------------* Event Management System *--------------------" << endl;
        cout << "1. Event Management" << endl;
        cout << "2. Event Organizer" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                event_managementmenu();
                break;
            case 2:
                eventorganizermenu();
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 3);

    return 0;
}

