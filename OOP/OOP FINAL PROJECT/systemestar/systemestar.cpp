#include<iostream>
#include<cstdlib>
#include<sstream>
#include<fstream>
#include<vector>
#include<memory>
#include<string.h>
#include<windows.h>
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define Magenta "033[35m"
#define BOLD    "\033[1m"
#define White   "\x1b[47m" 
#define Cyan    "\x1b[46m" 
using namespace std;
void display1()
{
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
    HANDLE size = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 0;
    char arr[] = { 'E','N','C','O','D','E','D',' ','B','Y',':',' ','E','M','A','N',' ','R','A','Z','I' };
    cout << "\n\t";
    for (int i = 0; i < 21; i++)
    {
        k > 9 ? k = 0 : k++;
        if (k == 0)
        {
            SetConsoleTextAttribute(color, 1);


        }
        else
        {
            SetConsoleTextAttribute(color, k);
        }
        cout << arr[i];
        Sleep(200);
    }
    system("cls");
}
void display()
{
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
    HANDLE size = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 0;
    char arr[] = { 'H','O','T','E','L',' ','R','E','S','E','R','V','A','T','I','O','N',' ','S','Y','S','T','E','M' };
    cout << "\n\t";
    for (int i = 0; i < 24; i++)
    {
        k > 9 ? k = 0 : k++;
        if (k == 0)
        {
            SetConsoleTextAttribute(color, 1);


        }
        else
        {
            SetConsoleTextAttribute(color, k);
        }
        cout << arr[i];
        Sleep(200);
    }
    //system("cls");
}

void registerUser()
{
    string username, password;

    cout << "Enter a username: ";
    cin >> username;
    cout << endl;
    cout << "Enter a password: ";
    cin >> password; cout << endl;

    // Open the file in append mode to store the new user credentials
    std::ofstream file("C:\\Users\\Razi\\Desktop\\cpp\\user.txt", ios::app);
    file << username << " " << password << endl;
    file.close();
    cout << "Registration successful!" << std::endl;
}
bool loginUser()
{
    string username, password;

    cout << "Enter your username: ";
    cin >> username;
    cout << endl;
    cout << "Enter your password: ";
    cin >> password;
    cout << endl;
    ifstream file("C:\\Users\\Razi\\Desktop\\cpp\\user.txt");
    string storedusername, storedPassword;

    while (file >> storedusername >> storedPassword)
    {
        if (username == storedusername && password == storedPassword)
        {
            return true;
        }
    }

    return false;
}
class date
{
public:
    int mm;
    int dd;
    int yyyy;
public:
    date() :mm(0), dd(0), yyyy(0)
    {
    }
};
class Time
{
public:
    int h;
    int m;
    int s;
public:
    Time() :h(0), m(0), s(0)
    {

    }
};
class Person
{
public:
    string name;
    date DOB;
    string address;
public:
    //date d;
    Person()
    {
    }
    void setName(string Name)
    {
        name = Name;
    }
    string getName()
    {
        return name;
    }
    void setDOB(date dob)
    {
        DOB = dob;
    }
    date getDOB()
    {
        return DOB;
    }
    void setAddress(string Address)
    {
        address = Address;
    }
    string getAddress()
    {
        return address;
    }


};

class Hotel
{
public:
    int hotel_id;

    string hotel_name;
    string hotel_type;
    string hotel_address;
    double hotel_rent;
public:
    static int count;
    static void HotelMenu();
    Hotel()
    {
        hotel_id = 0;
        hotel_rent = 0;
        hotel_name = '\0';
        hotel_type = '\0';
        hotel_address = '\0';

    }
    void addHotel()
    {

        hotel_id = ++count;
        cout << "Hotel Id: ";
        cout << hotel_id;
        cin.ignore();

        string var;
        while (true)
        {
            cout << "Hotel Rent: ";
            getline(cin, var);
            stringstream ss(var);
            if (!(ss >> hotel_rent) || !(ss.eof()))
            {
                cout << "Invalid! Please enter a numeric value." << endl;
                continue;
            }
            else
                break;
        }
        cout << "Hotel Name: ";
        getline(cin, hotel_name);

        cout << "Hotel Type: ";
        getline(cin, hotel_type);

        cout << "Hotel Address: ";
        getline(cin, hotel_address);

        cout << "Hotel Added Successfully" << endl;
        WriteDatatoFile();
    }



    void WriteDatatoFile()
    {
        ofstream WriteFile("E:\\hotel.txt", ios::app);
        if (!WriteFile.is_open())
        {
            cout << "FILE IS NOT OPENED" << endl;
            return;
        }
        else
        {

            WriteFile << "ID: " << hotel_id << "   Name: " << hotel_name << "   Rent: " << hotel_rent << "   Type: " << hotel_type << "   Address: " << hotel_address << endl;


        }
        cout << "Data has wriiten successully" << endl;
        WriteFile.close();
    }


    void SearchHotel()
    {
        cout << "Search found" << endl;
        cout << "-------------------------------------------------------------------" << endl;
        cout << "|" << "ID: " << hotel_id << "   Name: " << hotel_name << "   Rent: " << hotel_rent << "   Type: " << hotel_type << "   Address: " << hotel_address << "         |" << endl;
        cout << "-------------------------------------------------------------------" << endl;

    }


};
int Hotel::count = 0;
class HotelCollection {

public:

    vector<Hotel> hotels;

    unique_ptr <Hotel> h = make_unique <Hotel>();
public:
    void addHotel() {

        h->addHotel();
        hotels.push_back(*h);
    }


    void viewHotelsFromFile() {

        ifstream ReadFile("E:\\hotel.txt");
        if (!ReadFile.is_open())
        {
            cout << "FILE IS NOT OPENED" << endl;
            return;
        }
        else
        {

            cout << "-------------------------------------------------------------------" << endl;
            cout << "|" << "\t\t\tHOTELS LIST\t\t\t " << "         |" << endl;
            cout << "-------------------------------------------------------------------" << endl;
            string line;
            while (getline(ReadFile, line))
            {
                if (hotels.empty())
                {
                    cout << "List is empty" << endl;
                    break;
                }

                if (line.find("ID: ") != string::npos)
                {

                    cout << line << " " << endl;

                }
            }

        }

        ReadFile.close();
    }

    void SearchHotel()
    {
        int searchId;
        cout << "Enter the Id you Want To Search " << endl;
        cin >> searchId;
        bool found = false;

        for (auto& hotel : hotels) {

            if (searchId == hotel.hotel_id)
            {
                hotel.SearchHotel();
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Hotel with id " << searchId << " not found" << endl;
        }

    }
    void deleteHotel()
    {
        int id;
        cout << "Enter the ID of the hotel you want to delete: ";
        cin >> id;

        int deleteIndex = -1;
        for (size_t i = 0; i < hotels.size(); i++) {
            if (hotels[i].hotel_id == id) {
                deleteIndex = i;
                break;
            }
        }

        if (deleteIndex != -1) {
            hotels.erase(hotels.begin() + deleteIndex); // Remove the specific hotel record from the vector
            cout << "Hotel with id :" << id << " has been deleted" << endl;
            // file updation after removing the record
            ofstream WriteFile("E:\\hotel.txt");
            if (!WriteFile.is_open()) {
                cout << "FILE IS NOT OPENED" << endl;
                return;
            }

            for (auto& hotel : hotels) {

                WriteFile << "ID: " << hotel.hotel_id << "   Name: " << hotel.hotel_name << "   Rent: " << hotel.hotel_rent << "   Type: " << hotel.hotel_type << "   Address: " << hotel.hotel_address << endl;
            }

            WriteFile.close();
        }
        else {
            cout << "Hotel with ID " << id << " not found." << endl;
        }
    }


    void editHotel()
    {
        int id;
        cout << "Enter the ID you want to update: ";
        cin >> id;

        bool found = false;
        for (auto& hotel : hotels) {
            if (id == hotel.hotel_id)
            {
                cout << "Editing Hotel with ID " << id << ":" << endl;
                hotel.hotel_id = id;
                cout << "Hotel ID: " << hotel.hotel_id << endl;
                cin.ignore();
                string var;
                while (true)
                {
                    cout << "Hotel Rent: ";
                    getline(cin, var);
                    stringstream ss(var);
                    if (!(ss >> hotel.hotel_rent) || !(ss.eof()))
                    {
                        cout << "Invalid! Please enter a numeric value." << endl;
                        continue;
                    }
                    else
                        break;
                }
                cout << "Hotel Name: ";
                getline(cin, hotel.hotel_name);

                cout << "Hotel Type: ";
                getline(cin, hotel.hotel_type);

                cout << "Hotel Address: ";
                getline(cin, hotel.hotel_address);

                // File updation after editing the record
                ofstream WriteFile("E:\\hotel.txt");
                if (!WriteFile.is_open())
                {
                    cout << "FILE IS NOT OPENED" << endl;
                    return;
                }

                for (const auto& hotel : hotels)
                {
                    WriteFile << "ID: " << hotel.hotel_id << "   Name: " << hotel.hotel_name << "   Rent: " << hotel.hotel_rent << "   Type: " << hotel.hotel_type << "   Address: " << hotel.hotel_address << endl;
                }

                WriteFile.close();


                break;
            }

            if (!found)
            {
                cout << "Hotel with ID " << id << " not found." << endl;
            }
        }
    }
    void display()
    {
        cout << " ID: " << h->hotel_id << " Name: " << h->hotel_name << " Rent: " << h->hotel_rent << " Address: " << h->hotel_address << " Type: " << h->hotel_type << endl;
    }

};
void Hotel::HotelMenu()
{
    char choice;
    unique_ptr <HotelCollection> hotelptr = make_unique <HotelCollection>();
    Hotel h;
    int hotelchoice;
    do
    {
        cout << R"(
                                                     
                       ||  _ _|  _  |   |\/|  _  ._      
                       | | () | (/_ |   |  | (/_ | | |_| 
                                     
                                     
             )" << endl;

        cout << "\n\t\t1. ADD HOTEL" << endl;
        cout << "\n\t\t2. EDIT HOTEL" << endl;
        cout << "\n\t\t3. SEARCH HOTEL" << endl;
        cout << "\n\t\t4. VIEW HOTEL " << endl;
        cout << "\n\t\t5. DELETE HOTEL" << endl;
        cout << "\n\t\t0. EXIT" << endl;

        string var;
        while (true)
        {
            getline(cin, var);
            stringstream ss(var);
            if (var.empty())
            {
                continue;
            }
            if (!(ss >> hotelchoice) || !(ss.eof()))
            {

                cout << "Invalid! Please enter a numeric value." << endl;
                continue;
            }
            break;
        }
        system("cls");
        switch (hotelchoice)
        {

        case 1:
        {
            do
            {
                cout << White;
                hotelptr->addHotel();
                cout << "Do you want to add more record (y/n)";
                cin >> choice;
                cin.ignore();
                system("cls");
            } while (choice == 'y' || choice == 'Y');
            break;
        }
        case 2:
        {
            cout << White;
            hotelptr->editHotel();
            system("pause");
            system("cls");
            break;
        }
        case 3:
        {
            cout << White;
            hotelptr->SearchHotel();
            system("pause");
            system("cls");
            break;
        }
        case 4:
        {
            cout << White;
            hotelptr->viewHotelsFromFile();
            system("pause");
            system("cls");
            break;
        }

        case 5:
        {
            cout << White;
            hotelptr->deleteHotel();
            system("pause");
            system("cls");
            break;
        }
        case 0:
            break;
        default:
            cout << "\nINVALID CHOICE!" << endl;
            system("pause");
            system("cls");
            break;
        }
    } while (hotelchoice != 0);

}
class Employee :public Person
{
public:
    int emp_id;
    int hotel_id;
    string emp_dept;
    double emp_salary;
    static int count;
    Hotel* h;
public:
    Employee()
    {
        DOB.dd = 0;
        DOB.mm = 0;
        DOB.yyyy = 0;
        emp_id = 0;
        emp_salary = 0;
        emp_dept = "";

    }

    static void EmployeeMenu();
    void addEmployee()
    {



        emp_id = ++count;
        cout << " Employee ID: ";
        cout << emp_id << endl;
        cin.ignore();



        cout << "Employee Name: ";
        getline(cin, name);


        cout << "Employee DOB: ";
        cin >> DOB.dd >> DOB.mm >> DOB.yyyy;
        cin.ignore();
        cout << endl;

        string var;
        while (true)
        {
            cout << "Employee Salary: ";
            getline(cin, var);

            stringstream ss(var);
            if (!(ss >> emp_salary) || !(ss.eof()))
            {
                cout << "Invalid! Please enter a numeric value." << endl;
                continue;
            }
            else
                break;
        }



        cout << "Enter Employee Department: ";
        getline(cin, emp_dept);

        cout << "Employee Address: ";
        getline(cin, address);


        WriteDatatoFile();
    }


    void WriteDatatoFile()
    {
        ofstream WriteFile("E:\\emp.txt", ios::app);
        if (!WriteFile.is_open())
        {
            cout << "FILE IS NOT OPENED" << endl;
            return;
        }
        else
        {

            WriteFile << "ID:" << emp_id << "  Name:" << name << "  Dob:" << DOB.dd << "-" << DOB.mm << "-" << DOB.yyyy << "  Salary:" << emp_salary << "  Dept:" << emp_dept << "  Address:" << address << endl;

        }
        cout << "Data has wriiten successully" << endl;
        WriteFile.close();
    }


    void SearchEmployee()
    {
        cout << "Search found" << endl;
        cout << "-------------------------------------------------------------------" << endl;
        cout << "ID:" << emp_id << "  Name:" << name << "  Dob:" << DOB.dd << "-" << DOB.mm << "-" << DOB.yyyy << "  Salary:" << emp_salary << "  Dept:" << emp_dept << "  Address:" << address << endl;
        cout << "-------------------------------------------------------------------" << endl;

    }


};
class EmlpoyeeCollection
{
public:


    vector<Employee>employees;

    unique_ptr <Employee> emp = make_unique <Employee>();

    unique_ptr <HotelCollection> hc = make_unique <HotelCollection>();

    void addEmployee() {
        int hotelId;

        hc->display();

        cout << "Enter the hotel id for which you want to add an employee: ";
        cin >> hotelId;

        // ... Add employee information ...

        emp->hotel_id = hotelId; // Set the hotel ID for the employee
        employees.push_back(*emp);

        // Search for the hotel with the given ID in the HotelCollection's hotels vector
       /*int associatedHotelIndex = -1; // Index of the associated hotel
        for (size_t i = 0; i < hotelCollection.hotels.size(); ++i) {
            if (hotelId == hotelCollection.hotels[i].hotel_id) {
                associatedHotelIndex = i;
                break;
            }
        }

        if (associatedHotelIndex == -1) {
            cout << "Hotel with ID " << hotelId << " not found." << endl;
            return;
        }

        Employee emp;
        emp.hotel_id = hotelId;
        // Set other properties of the employee as needed
        // For example:
        cout << "Enter employee name: ";
        cin.ignore();
        getline(cin, emp.name);

        // Add the employee to the employees vector
        employees.push_back(emp);*/
    }

    void WriteDatatoFile()
    {
        for (auto& employee : employees)
        {
            employee.WriteDatatoFile();
        }

    }
    void viewEmployeesFromFile() {

        ifstream ReadFile("E:\\emp.txt");
        if (!ReadFile.is_open())
        {
            cout << "FILE IS NOT OPENED" << endl;
            return;
        }
        else
        {

            cout << "-------------------------------------------------------------------" << endl;
            cout << "|" << "\t\t\tEMPLOYEES LIST\t\t\t " << "         |" << endl;
            cout << "-------------------------------------------------------------------" << endl;
            string line;
            while (getline(ReadFile, line))
            {
                if (employees.empty())
                {
                    cout << "List is empty" << endl;
                    break;
                }

                if (line.find("ID:") != string::npos)
                {

                    cout << line << " " << endl;

                }
            }

        }

        ReadFile.close();
    }



    void SearchEmployee()
    {
        int searchId;
        cout << "Enter the Id you Want To Search " << endl;
        cin >> searchId;
        bool found = false;
        if (employees.empty())
        {
            cout << "NO RECORD FOUND" << endl;
        }
        for (auto& employee : employees) {
            if (searchId == employee.emp_id)
            {
                employee.SearchEmployee();
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Invalid id!" << endl;
        }


    }
    void editEmployee()
    {
        int id;
        cout << "Enter the ID you want to update: ";
        cin >> id;

        bool found = false;
        for (auto& employee : employees) {
            if (id == employee.emp_id)
            {
                cout << "Editing Employee with ID " << id << ":" << endl;
                employee.emp_id = id;
                cout << "Employee ID: " << employee.emp_id << endl;
                cin.ignore();
                string var;
                while (true)
                {
                    cout << "Employee salary: ";
                    getline(cin, var);
                    stringstream ss(var);
                    if (!(ss >> employee.emp_salary) || !(ss.eof()))
                    {
                        cout << "Invalid! Please enter a numeric value." << endl;
                        continue;
                    }
                    else
                        break;
                }
                cout << "Employee Name: ";
                getline(cin, employee.name);
                cin.ignore();

                cout << "Empoyee DOB(dd-mm-yyyy): ";
                cin >> employee.DOB.dd >> employee.DOB.mm >> employee.DOB.yyyy;
                cin.ignore();
                cout << endl;

                cout << "Employee Department: ";
                getline(cin, employee.emp_dept);

                cout << "Employee Address: ";
                getline(cin, employee.address);

                // File updation after editing the record
                ofstream WriteFile("E:\\emp.txt");
                if (!WriteFile.is_open())
                {
                    cout << "FILE IS NOT OPENED" << endl;
                    return;
                }

                for (const auto& employee : employees)
                {
                    WriteFile << "ID:" << employee.emp_id << "  Name:" << employee.name << "  Dob:" << employee.DOB.dd << "-" << employee.DOB.mm << "-" << employee.DOB.yyyy << "  Salary:" << employee.emp_salary << "  Dept:" << employee.emp_dept << "  Address:" << employee.address << endl;
                }

                WriteFile.close();


                break;

                if (!found)
                {
                    cout << "Employee with ID " << id << " not found." << endl;
                }
            }
        }
    }
    void deleteEmployee()
    {
        int id;
        cout << "Enter the ID  you want to delete: ";
        cin >> id;

        int deleteIndex = -1;
        for (size_t i = 0; i < employees.size(); i++) {
            if (employees[i].emp_id == id) {
                deleteIndex = i;
                break;
            }
        }

        if (deleteIndex != -1) {
            employees.erase(employees.begin() + deleteIndex); // Remove the specific hotel record from the vector
            cout << "Employee with id :" << id << " has been deleted" << endl;
            // file updation after removing the record
            ofstream WriteFile("E:\\emp.txt");
            if (!WriteFile.is_open()) {
                cout << "FILE IS NOT OPENED" << endl;
                return;
            }

            for (auto& employee : employees) {

                WriteFile << "ID:" << employee.emp_id << "  Name:" << employee.name << "  Dob:" << employee.DOB.dd << "-" << employee.DOB.mm << "-" << employee.DOB.yyyy << "  Salary:" << employee.emp_salary << "  Dept:" << employee.emp_dept << "  Address:" << employee.address << endl;
            }

            WriteFile.close();
        }
        else {
            cout << "Employee with ID " << id << " not found." << endl;
        }
    }

};
int Employee::count = 0;
void Employee::EmployeeMenu()
{
    int employeechoice;
    char choice;
    unique_ptr <EmlpoyeeCollection> empptr = make_unique <EmlpoyeeCollection>();
    do
    {
        cout << R"(
                 _                                               
                |_ ._ _  ._  |  _      _   _    |\/|  _  ._      
                |_ | | | |) | () \/ (/_ (/_   |  | (/_ | | |_| 
                         |         /                             

                )" << endl;
        cout << "\n\t\t1. ADD EMPLOYEE" << endl;
        cout << "\n\t\t2. EDIT EMPLOYEE" << endl;
        cout << "\n\t\t3. SEARCH EMPLOYEE" << endl;
        cout << "\n\t\t4. VIEW EMPLOYEE " << endl;
        cout << "\n\t\t5. DELETE EMPLOYEE" << endl;
        cout << "\n\t\t0. BACK TO MENU" << endl;

        cin >> employeechoice;
        //  HotelCollection hc;
        system("cls");
        switch (employeechoice)
        {
        case 1:
        {
            do
            {
                empptr->addEmployee();
                cout << "Do you want to add more record (y/n)";
                cin >> choice;
                cin.ignore();
                system("cls");
            } while (choice == 'y' || choice == 'Y');
            break;
        }
        case 2:
        {
            empptr->editEmployee();
            system("pause");
            system("cls");
            break;
        }
        case 3:
        {
            empptr->SearchEmployee();
            system("pause");
            system("cls");
            break;
        }
        case 4:
        {
            empptr->viewEmployeesFromFile();
            system("pause");
            system("cls");
            break;
        }
        case 5:
        {
            empptr->deleteEmployee();
            system("pause");
            system("cls");
            break;
        }
        case 0:
            break;
        default:
            cout << "\nINVALID CHOICE!" << endl;
            system("pause");
            system("cls");
            break;
        }
    } while (employeechoice != 0);
}
class Room
{
public:
    int room_id;
    double room_rent;
    string room_category;
    string room_description;
    static int count;
    bool is_availabe;
public:
    Room()
    {
        room_id = 0;
        room_rent = 0;
        room_category = '\0';
        room_description = '\0';
    }
    static void RoomMenu();

    void addRoom()
    {

        room_id = ++count;
        cout << "Room ID: ";
        cout << room_id;
        cout << endl;
        cin.ignore();


        string var;
        while (true)
        {
            cout << "Room rent: ";
            getline(cin, var);

            stringstream ss(var);
            if (!(ss >> room_rent) || !(ss.eof()))
            {
                cout << "Invalid! Please enter a numeric value." << endl;
                continue;
            }
            else
                break;

        }
        cout << "Enter Room description: ";
        getline(cin, room_description);

        cout << "Enter Room Category : ";
        getline(cin, room_category);

        WriteDatatoFile();

    }
    void WriteDatatoFile()
    {
        ofstream WriteFile("E:\\room.txt", ios::app);
        if (!WriteFile.is_open())
        {
            cout << "FILE IS NOT OPENED" << endl;
            return;
        }
        else
        {
            WriteFile << "ID:" << room_id << "  rent:" << room_rent << "  Category:" << room_category << "  Description:" << room_description << endl;
        }
        cout << "Data has writen successully" << endl;
        WriteFile.close();
    }

    void SearchRoom()
    {
        cout << "-------------------------------------------------------------------" << endl;
        cout << "ID:" << room_id << "  rent:" << room_rent << "  Category:" << room_category << "  Description:" << room_description << endl;
        cout << "-------------------------------------------------------------------" << endl;
    }



};
int Room::count = 0;
class RoomCollection
{
public:
    unique_ptr <Room> roomptr = make_unique <Room>();
    vector<Room>rooms;

    void addRoom()
    {
        roomptr->addRoom();
        rooms.push_back(*roomptr);
    }

    void viewRoomFromFile()
    {
        ifstream ReadFile("E:\\room.txt",ios::app);
        if (!ReadFile.is_open())
        {
            cout << "FILE IS NOT OPENED" << endl;
            return;
        }
        else
        {

            cout << "-------------------------------------------------------------------" << endl;
            cout << "|" << "\t\t\tROOMS LIST\t\t\t " << "         |" << endl;
            cout << "-------------------------------------------------------------------" << endl;
            string line;
            while (getline(ReadFile, line))
            {
                if (rooms.empty())
                {
                    cout << "List is empty" << endl;
                    break;
                }

                if (line.find("ID:") != string::npos)
                {

                    cout << line << " " << endl;

                }
            }

        }

        ReadFile.close();

    }

    void SearchRoom()
    {
        int searchId;
        cout << "Enter the Id you Want To Search " << endl;
        cin >> searchId;
        bool found = false;
        if (rooms.empty())
        {
            cout << "NO RECORD FOUND" << endl;
        }
        for (auto& room : rooms) {
            if (searchId == room.room_id)
            {
                room.SearchRoom();
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Invalid id!" << endl;
        }
    }

    void editRoom()
    {
        int id;
        cout << "Enter the ID you want to update: ";
        cin >> id;

        bool found = false;
        for (auto& room : rooms) {
            if (id == room.room_id)
            {
                cout << "Editing Room with ID " << id << ":" << endl;
                room.room_id = id;
                cout << "Room ID: " << room.room_id << endl;
                cin.ignore();
                string var;
                while (true)
                {
                    cout << "Room Rent: ";
                    getline(cin, var);
                    stringstream ss(var);
                    if (!(ss >> room.room_rent) || !(ss.eof()))
                    {
                        cout << "Invalid! Please enter a numeric value." << endl;
                        continue;
                    }
                    else
                        break;
                }
                cout << "Room Category: ";
                getline(cin, room.room_category);
                cin.ignore();

                cout << "Room Description: ";
                getline(cin, room.room_description);
                cin.ignore();


                // File updation after editing the record
                ofstream WriteFile("E:\\room.txt");
                if (!WriteFile.is_open())
                {
                    cout << "FILE IS NOT OPENED" << endl;
                    return;
                }

                for (const auto& room : rooms)
                {
                    WriteFile << "ID:" << room.room_id << "  rent:" << room.room_rent << "  Category:" << room.room_category << "  Description:" << room.room_description << endl;
                }

                WriteFile.close();


                break;

                if (!found)
                {
                    cout << "Room with ID " << id << " not found." << endl;
                }
            }
        }
    }

    void deleteRoom()
    {
        int id;
        cout << "Enter the ID  you want to delete: ";
        cin >> id;

        int deleteIndex = -1;
        for (size_t i = 0; i < rooms.size(); i++) {
            if (rooms[i].room_id == id) {
                deleteIndex = i;
                break;
            }
        }

        if (deleteIndex != -1) {
            rooms.erase(rooms.begin() + deleteIndex); // Remove the specific room record from the vector
            cout << "Employee with id :" << id << " has been deleted" << endl;
            // file updation after removing the record
            ofstream WriteFile("E:\\room.txt");
            if (!WriteFile.is_open()) {
                cout << "FILE IS NOT OPENED" << endl;
                return;
            }

            for (auto& room : rooms) {

                WriteFile << "ID:" << room.room_id << "  rent:" << room.room_rent << "  Category:" << room.room_category << "  Description:" << room.room_description << endl;
            }

            WriteFile.close();
        }
        else {
            cout << "Room with ID " << id << " not found." << endl;
        }
    }

};
void Room::RoomMenu()
{
    int roomchoice;
    char choice;
    unique_ptr <RoomCollection> roomptr = make_unique <RoomCollection>();
    do
    {
        cout << R"(
            _                                   
           |)  _   _  . _    |\/|  _  ._      
           | \ () () | | |   |  | (/_ | | |_| 
                                      
            )" << endl;
        cout << "\n\t\t1. ADD ROOM" << endl;
        cout << "\n\t\t2. EDIT ROOM" << endl;
        cout << "\n\t\t3. SEARCH ROOM" << endl;
        cout << "\n\t\t4. VIEW ROOM " << endl;
        cout << "\n\t\t5. DELETE ROOM" << endl;
        cout << "\n\t\t0. BACK TO MENU" << endl;

        cin >> roomchoice;
        system("cls");
        switch (roomchoice)
        {
        case 1:
        {
            do
            {

                roomptr->addRoom();
                cout << "Do you want to add more record (y/n)";
                cin >> choice;
                cin.ignore();
                system("cls");
            } while (choice == 'y' || choice == 'Y');
            break;
        }
        case 2:
        {

            roomptr->editRoom();
            system("pause");
            system("cls");
            break;
        }
        case 3:
        {

            roomptr->SearchRoom();
            system("pause");
            system("cls");
            break;
        }
        case 4:
        {
            roomptr->viewRoomFromFile();
            system("pause");
            system("cls");
            break;
        }

        case 5:
        {

            roomptr->deleteRoom();
            system("pause");
            system("cls");
            break;
        }
        case 0:
            break;
        default:
            cout << "\nINVALID CHOICE!" << endl;
            system("pause");
            system("cls");
            break;
        }
    } while (roomchoice != 0);

}
class Payment
{
public:
    int payment_id;
    double payment_amount;
    date payment_date;
    Time payment_time;
    static int count;

public:
    Payment()
    {
        payment_id = 0;
        payment_amount = 0;
    }
    static void PaymentMenu();
    void addPayment()
    {

        payment_id = ++count;
        cout << "Payment id: ";
        cout << payment_id << endl;
        cin.ignore();

        string var;
        while (true)
        {
            cout << "Payment Amount: ";
            getline(cin, var);
            stringstream ss(var);
            if (!(ss >> payment_amount) || !(ss.eof()))
            {
                cout << "Invalid! Please enter numeric value." << endl;
                continue;
            }
            else
                break;
        }


        cout << "Payment Date: " << endl;
        cin >> payment_date.dd >> payment_date.mm >> payment_date.yyyy;
        cout << endl;

        cout << "Payment Time: " << endl;
        cin >> payment_time.h >> payment_time.m >> payment_time.s;


        cout << "PAyment Added Successfully" << endl;

        WriteDatatoFile();
    }


    void WriteDatatoFile()
    {
        ofstream WriteFile("E:\\pay.txt", ios::app);
        if (!WriteFile.is_open())
        {
            cout << "FILE IS NOT OPENED" << endl;
            return;
        }
        else
        {
            WriteFile << "ID:" << payment_id << "  Date:" << payment_date.dd << "-" << payment_date.mm << "-" << payment_date.yyyy << "  Time:" << payment_time.h << ":" << payment_time.m << ":" << payment_time.s << endl;
        }
        cout << "Data has written successully" << endl;
        WriteFile.close();
    }

    void viewPayment()
    {

        cout << "-------------------------------------------------------------------" << endl;
        cout << "ID:" << payment_id << "  Date:" << payment_date.dd << "-" << payment_date.mm << "-" << payment_date.yyyy << "  Time:" << payment_time.h << ":" << payment_time.m << ":" << payment_time.s << endl;
        cout << "-------------------------------------------------------------------" << endl;
    }
    void SearchPayment()
    {
        cout << "-------------------------------------------------------------------" << endl;
        cout << "ID:" << payment_id << "  Date:" << payment_date.dd << "-" << payment_date.mm << "-" << payment_date.yyyy << "  Time:" << payment_time.h << ":" << payment_time.m << ":" << payment_time.s << endl;
        cout << "-------------------------------------------------------------------" << endl;
    }

};
int Payment::count = 0;
class PaymentCollection
{
public:
    vector<Payment> payments;
    unique_ptr<Payment>paymentptr = make_unique<Payment>();
    void addPayment()
    {
        paymentptr->addPayment();
        payments.push_back(*paymentptr);
    }
    void viewPaymentsFromFile()
    {

        ifstream ReadFile("E:\\pay.txt");
        if (!ReadFile.is_open())
        {
            cout << "FILE IS NOT OPENED" << endl;
            return;
        }
        else
        {

            cout << "-------------------------------------------------------------------" << endl;
            cout << "|" << "\t\t\tPAYMENTSS LIST\t\t\t " << "         |" << endl;
            cout << "-------------------------------------------------------------------" << endl;
            string line;
            while (getline(ReadFile, line))
            {
                if (payments.empty())
                {
                    cout << "List is empty" << endl;
                    break;
                }

                if (line.find("ID:") != string::npos)
                {

                    cout << line << " " << endl;

                }
            }
        }
    }

    void SearchPayment()
    {
        int searchId;
        cout << "Enter the Id you Want To Search " << endl;
        cin >> searchId;
        bool found;
        if (payments.empty())
        {
            cout << "NO RECORD FOUND" << endl;
        }
        for (auto& payment : payments) {
            if (searchId == payment.payment_id)
            {
                payment.SearchPayment();
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Invalid id!" << endl;
        }
    }

    void editPayment()
    {
        int id;
        cout << "Enter the ID you want to update: ";
        cin >> id;

        bool found = false;
        for (auto& payment : payments) {
            if (id == payment.payment_id)
            {
                cout << "Editing Payment with ID " << id << ":" << endl;
                payment.payment_id;
                cout << "Payment ID: " << payment.payment_id << endl;

                cout << "Payment Date(dd-mm-yyyy): ";
                cin >> payment.payment_date.dd >> payment.payment_date.mm >> payment.payment_date.yyyy;
                cout << endl;

                cout << "Booking Time(h:m:s): ";
                cin >> payment.payment_time.h >> payment.payment_time.m >> payment.payment_time.s;
                cout << endl;

                // File updation after editing the record
                ofstream WriteFile("E:\\pay.txt");
                if (!WriteFile.is_open())
                {
                    cout << "FILE IS NOT OPENED" << endl;
                    return;
                }

                for (const auto& payment : payments)
                {
                    WriteFile << "ID:" << payment.payment_id << "  Date:" << payment.payment_date.dd << "-" << payment.payment_date.mm << "-" << payment.payment_date.yyyy << "  Time:" << payment.payment_time.h << ":" << payment.payment_time.m << ":" << payment.payment_time.s << endl;
                }

                WriteFile.close();


                break;

                if (!found)
                {
                    cout << "Payment with ID " << id << " not found." << endl;
                }
            }
        }
    }

    void deletePayment()
    {
        int id;
        cout << "Enter the ID  you want to delete: ";
        cin >> id;

        int deleteIndex = -1;
        for (size_t i = 0; i < payments.size(); i++) {
            if (payments[i].payment_id == id) {
                deleteIndex = i;
                break;
            }
        }

        if (deleteIndex != -1) {
            payments.erase(payments.begin() + deleteIndex); // Remove the specific booking record from the vector
            cout << "Payment with id :" << id << " has been deleted" << endl;
            // file updation after removing the record
            ofstream WriteFile("E:\\pay.txt");
            if (!WriteFile.is_open()) {
                cout << "FILE IS NOT OPENED" << endl;
                return;
            }

            for (auto& payment : payments) {

                WriteFile << "ID:" << payment.payment_id << "  Date:" << payment.payment_date.dd << "-" << payment.payment_date.mm << "-" << payment.payment_date.yyyy << "  Time:" << payment.payment_time.h << ":" << payment.payment_time.m << ":" << payment.payment_time.s << endl;
            }

            WriteFile.close();
        }
        else {
            cout << "Payment with ID " << id << " not found." << endl;
        }
    }

};
void Payment::PaymentMenu()
{
    int paymentchoice;
    char choice;
    unique_ptr <PaymentCollection> paymentptr = make_unique<PaymentCollection>();
    do
    {
        cout << R"(

                     _                                            
                    |) _.    . _   _  ._ |   |\/|  _  ._      
                    |  (| \/ | | | (/ | | |_   |  | (/_ | | |_| 
                           /                                      
                )" << endl;
        cout << "\n\t\t1. ADD PAYMENT" << endl;
        cout << "\n\t\t2. EDIT PAYMENT" << endl;
        cout << "\n\t\t3. SEARCH PAYMENT" << endl;
        cout << "\n\t\t4. VIEW PAYMENT " << endl;
        cout << "\n\t\t5. DELETE PAYMENT" << endl;
        cout << "\n\t\t0. BACK TO MENU" << endl;

        cin >> paymentchoice;
        system("cls");
        switch (paymentchoice)
        {
        case 1:
        {
            do
            {
                paymentptr->addPayment();
                cout << "Do you want to add more record (y/n)";
                cin >> choice;
                cin.ignore();
                system("cls");
            } while (choice == 'y' || choice == 'Y');
            break;
        }
        case 2:
        {
            paymentptr->editPayment();
            system("pause");
            system("cls");
            break;
        }
        case 3:
        {
            paymentptr->SearchPayment();
            system("pause");
            system("cls");
            break;
        }
        case 4:
        {
            paymentptr->viewPaymentsFromFile();
            system("pause");
            system("cls");
            break;
        }
        case 5:
        {
            paymentptr->deletePayment();
            system("pause");
            system("cls");
            break;
        }
        case 0:
            break;
        default:
            cout << "\nINVALID CHOICE!" << endl;
            system("pause");
            system("cls");
            break;
        }
    } while (paymentchoice != 0);

}
class Customer :public Person
{
public:
    int customer_id;
    date customer_dob;
    string customer_address;
    string customer_email;
    static int count;
public:
    Customer()
    {

        customer_id = 0;
        customer_address = "";
        customer_email = "";

    }
    int getCustomerID()
    {
        return customer_id;
    }



    string getCustomerAddress()
    {
        return customer_address;
    }

    string getCustomerEmail()
    {
        return customer_email;
    }


    void setCustomerEmail(string email)
    {
        customer_email = email;
    }

    void setCustomerAddress(string address)
    {
        customer_address = address;
    }

    void setCustomerId(int id) {
        customer_id = id;
    }
    static void CustomerMenu();
    void addCustomer()
    {
        customer_id = ++count;
        cout << "Enter Customer ID: ";
        cout << customer_id << endl;
        cin.ignore();

        cout << "Enter name :";
        getline(cin, name);
        cin.ignore();

        cout << "Enter DOB(dd-mm-yyyy):";
        cin >> DOB.dd >> DOB.mm >> DOB.yyyy;
        cin.ignore();
        cout << endl;


        cout << "Enter Customer Email: ";
        getline(cin, customer_email);
        cin.ignore();

        cout << "Enter Customer address:";
        getline(cin, customer_address);

        WriteDatatoFile();
    }
    void WriteDatatoFile()
    {

        ofstream WriteFile("E:\\cus.txt", ios::app);
        if (!WriteFile.is_open())
        {
            cout << "FILE IS NOT OPENED" << endl;
            return;
        }
        else
        {

            WriteFile << "ID:" << customer_id << "  Name:" << name << "  DOB:" << DOB.dd << "-" << DOB.mm << "-" << DOB.yyyy << "  Email:" << customer_email << "  Address:" << customer_address << endl;

        }
        cout << "Data has wriiten successully" << endl;
        WriteFile.close();
    }
    void viewCustomer()
    {

        cout << "-------------------------------------------------------------------" << endl;
        cout << "ID:" << getCustomerID() << "  Name:" << getName() << "  DOB:" << DOB.dd << "-" << DOB.mm << "-" << DOB.yyyy << "  Email:" << getCustomerEmail() << "  Address:" << getCustomerAddress() << endl;
        cout << "-------------------------------------------------------------------" << endl;
    }

    void SearchCustomer()
    {
        cout << "Search found!" << endl;
        cout << "-------------------------------------------------------------------" << endl;
        cout << "ID:" << getCustomerID() << "  Name:" << getName() << "  DOB:" << DOB.dd << "-" << DOB.mm << "-" << DOB.yyyy << "  Email:" << getCustomerEmail() << "  Address:" << getCustomerAddress() << endl;
        cout << "-------------------------------------------------------------------" << endl;
    }


};
int Customer::count = 0;
class CustomerCollection
{

public:
    vector<Customer> customers;
    unique_ptr<Customer>customerptr = make_unique<Customer>();
    void addCustomer()
    {
        customerptr->addCustomer();
        customers.push_back(*customerptr);
    }
    void viewCustomersFromFile()
    {

        ifstream ReadFile("E:\\cus.txt");
        if (!ReadFile.is_open())
        {
            cout << "FILE IS NOT OPENED" << endl;
            return;
        }
        else
        {

            cout << "-------------------------------------------------------------------" << endl;
            cout << "|" << "\t\t\tCUSTOMERS LIST\t\t\t " << "         |" << endl;
            cout << "-------------------------------------------------------------------" << endl;
            string line;
            while (getline(ReadFile, line))
            {
                if (customers.empty())
                {
                    cout << "List is empty" << endl;
                    break;
                }

                if (line.find("ID:") != string::npos)
                {

                    cout << line << " " << endl;

                }
            }
        }
    }
    void SearchCustomer()
    {
        int searchId;
        cout << "Enter the Id you Want To Search " << endl;
        cin >> searchId;
        bool found = false;
        if (customers.empty())
        {
            cout << "NO RECORD FOUND" << endl;
        }
        for (auto& customer : customers) {
            if (searchId == customer.getCustomerID())
            {
                customer.SearchCustomer();
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Invalid id!" << endl;
        }
    }

    void editCustomer()
    {
        int id;
        cout << "Enter the ID you want to update: ";
        cin >> id;

        bool found = false;
        for (auto& customer : customers) {
            if (id == customer.customer_id)
            {
                cout << "Editing Customer with ID " << id << ":" << endl;
                customer.customer_id;
                cout << "Customer ID: " << customer.customer_id << endl;

                cout << "Customer Name: ";
                getline(cin, customer.name);
                cin.ignore();

                cout << "Customer DOB(dd-mm-yyyy):";
                cin >> customer.DOB.dd >> customer.DOB.mm >> customer.DOB.yyyy;
                cin.ignore();
                cout << endl;


                cout << " Customer Email: ";
                getline(cin, customer.customer_email);
                cin.ignore();

                cout << " Customer address:";
                getline(cin, customer.customer_address);

                // File updation after editing the record
                ofstream WriteFile("E:\\cus.txt");
                if (!WriteFile.is_open())
                {
                    cout << "FILE IS NOT OPENED" << endl;
                    return;
                }

                for (const auto& customer : customers)
                {

                    WriteFile << "ID:" << customer.customer_id << "  Name:" << customer.name << "  DOB:" << customer.DOB.dd << "-" << customer.DOB.mm << "-" << customer.DOB.yyyy << "  Email:" << customer.customer_email << "  Address:" << customer.customer_address << endl;
                }

                WriteFile.close();


                break;

                if (!found)
                {
                    cout << "Customer with ID " << id << " not found." << endl;
                }
            }
        }
    }

    void deleteCustomer()
    {
        int id;
        cout << "Enter the ID  you want to delete: ";
        cin >> id;

        int deleteIndex = -1;
        for (size_t i = 0; i < customers.size(); i++) {
            if (customers[i].customer_id == id) {
                deleteIndex = i;
                break;
            }
        }

        if (deleteIndex != -1) {
            customers.erase(customers.begin() + deleteIndex); // Remove the specific customer record from the vector
            cout << "Customer with id :" << id << " has been deleted" << endl;
            // file updation after removing the record
            ofstream WriteFile("E:\\cus.txt");
            if (!WriteFile.is_open()) {
                cout << "FILE IS NOT OPENED" << endl;
                return;
            }

            for (auto& customer : customers) {

                WriteFile << "ID:" << customer.customer_id << "  Name:" << customer.name << "  DOB:" << customer.DOB.dd << "-" << customer.DOB.mm << "-" << customer.DOB.yyyy << "  Email:" << customer.customer_email << "  Address:" << customer.customer_address << endl;
            }

            WriteFile.close();
        }
        else {
            cout << "Customer with ID " << id << " not found." << endl;
        }
    }
};
void Customer::CustomerMenu()
{
    int customerchoice;
    char choice;
    unique_ptr <CustomerCollection> customerptr = make_unique <CustomerCollection>();
    do
    {

        cout << R"(
                       _                                                
                     /       _ |  _  ._ _   _  ._   |\/|  _  ._      
                     \_ || _>  | () | | | (/ |    |  | (/_ | | |_| 
                                                   
                                                              
                )" << endl;
        cout << "\n\t\t1. ADD CUSTOMER" << endl;
        cout << "\n\t\t2. EDIT CUSTOMER" << endl;
        cout << "\n\t\t3. SEARCH CUSTOMER" << endl;
        cout << "\n\t\t4. VIEW CUSTOMER " << endl;
        cout << "\n\t\t5. DELETE CUSTOMER" << endl;
        cout << "\n\t\t0. EXIT" << endl;

        cin >> customerchoice;
        system("cls");
        switch (customerchoice)
        {
        case 1:
        {
            do
            {
                customerptr->addCustomer();
                cout << "Do you want to add more record (y/n)";
                cin >> choice;
                cin.ignore();
                system("cls");
            } while (choice == 'y' || choice == 'Y');
            break;
        }
        case 2:
        {
            customerptr->editCustomer();
            system("pause");
            system("cls");
            break;
        }
        case 3:
        {
            customerptr->SearchCustomer();
            system("pause");
            system("cls");
            break;
        }
        case 4:
        {
            customerptr->viewCustomersFromFile();
            system("pause");
            system("cls");
            break;
        }
        case 5:
        {
            customerptr->deleteCustomer();
            system("pause");
            system("cls");
            break;
        }
        case 0:
            break;
        default:
            cout << "\nINVALID CHOICE!" << endl;
            system("pause");
            system("cls");
            break;
        }
    } while (customerchoice != 0);
}
class Booking
{
public:

    int booking_id;
    date d;
    Time t;
    static int count;
public:
    Booking()
    {
        booking_id = 0;

    }
    static void BookingMenu();
    void addBooking()
    {
        booking_id = ++count;
        cout << "Booking Id: ";
        cout << booking_id << endl;


        cout << "Booking Date(dd-mm-yyyy): ";
        cin >> d.dd >> d.mm >> d.yyyy;
        cout << endl;
        cin.ignore();

        cout << "Booking Time(h:m:s): ";
        cin >> t.h >> t.m >> t.s;
        cout << endl;
        cin.ignore();



        cout << "Booking Added Successfully" << endl;
        WriteDatatoFile();
    }

    void WriteDatatoFile()
    {
        ofstream WriteFile("E:\\book.txt", ios::app);
        if (!WriteFile.is_open())
        {
            cout << "FILE IS NOT OPENED" << endl;
            return;
        }
        else
        {
            WriteFile << "ID:" << booking_id << "  Date:" << d.dd << "-" << d.mm << "-" << d.yyyy << "  Time:" << t.h << ":" << t.m << ":" << t.s << endl;
        }
        cout << "Data has wriiten successully" << endl;
        WriteFile.close();
    }
    void viewBooking() {

        cout << "-------------------------------------------------------------------" << endl;
        cout << "ID:" << booking_id << "  Date:" << d.dd << "-" << d.mm << "-" << d.yyyy << "  Time:" << t.h << ":" << t.m << ":" << t.s << endl;
        cout << "-------------------------------------------------------------------" << endl;

    }
    void SearchBooking()
    {
        cout << "search found" << endl;
        cout << "-------------------------------------------------------------------" << endl;
        cout << "ID:" << booking_id << "  Date:" << d.dd << "-" << d.mm << "-" << d.yyyy << "  Time:" << t.h << ":" << t.m << ":" << t.s << endl;
        cout << "-------------------------------------------------------------------" << endl;

    }


};
int Booking::count = 0;
class BookingCollection
{
public:
    date d;
    Time t;

    vector<Booking> bookings;
    unique_ptr<Booking>bookingptr = make_unique<Booking>();

public:

    void addBooking() {

        bookingptr->addBooking();
        bookings.push_back(*bookingptr);

    }

    void WriteDatatoFile()
    {
        for (auto& booking : bookings)
        {
            booking.WriteDatatoFile();
        }
    }
    void viewBookingsFromFile()
    {
        ifstream ReadFile("E:\\book.txt");
        if (!ReadFile.is_open())
        {
            cout << "FILE IS NOT OPENED" << endl;
            return;
        }
        else
        {

            cout << "-------------------------------------------------------------------" << endl;
            cout << "|" << "\t\t\tBOOKINGSS LIST\t\t\t " << "         |" << endl;
            cout << "-------------------------------------------------------------------" << endl;
            string line;
            while (getline(ReadFile, line))
            {
                if (bookings.empty())
                {
                    cout << "List is empty" << endl;
                    break;
                }

                if (line.find("ID:") != string::npos)
                {

                    cout << line << " " << endl;

                }
            }

        }

        ReadFile.close();

    }
    void SearchBooking()
    {
        int searchId;
        cout << "Enter the Id you Want To Search " << endl;
        cin >> searchId;
        bool found = false;
        if (bookings.empty())
        {
            cout << "NO RECORD FOUND" << endl;
        }
        for (auto& booking : bookings) {
            if (searchId == booking.booking_id)
            {
                booking.SearchBooking();
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "invalid id!" << endl;
        }

    }

    void editBooking()
    {
        int id;
        cout << "Enter the ID you want to update: ";
        cin >> id;

        bool found = false;
        for (auto& booking : bookings) {
            if (id == booking.booking_id)
            {
                cout << "Editing Booking with ID " << id << ":" << endl;
                booking.booking_id;
                cout << "Booking ID: " << booking.booking_id << endl;

                cout << "Booking Date(dd-mm-yyyy): ";
                cin >> booking.d.dd >> booking.d.mm >> booking.d.yyyy;
                cout << endl;

                cout << "Booking Time(h:m:s): ";
                cin >> booking.t.h >> booking.t.m >> booking.t.s;
                cout << endl;

                // File updation after editing the record
                ofstream WriteFile("E:\\book.txt");
                if (!WriteFile.is_open())
                {
                    cout << "FILE IS NOT OPENED" << endl;
                    return;
                }

                for (const auto& booking : bookings)
                {
                    WriteFile << "ID:" << booking.booking_id << "  Date:" << d.dd << "-" << d.mm << "-" << d.yyyy << "  Time:" << t.h << ":" << t.m << ":" << t.s << endl;
                }

                WriteFile.close();


                break;

                if (!found)
                {
                    cout << "Booking with ID " << id << " not found." << endl;
                }
            }
        }
    }

    void deleteBooking()
    {
        int id;
        cout << "Enter the ID  you want to delete: ";
        cin >> id;

        int deleteIndex = -1;
        for (size_t i = 0; i < bookings.size(); i++) {
            if (bookings[i].booking_id == id) {
                deleteIndex = i;
                break;
            }
        }

        if (deleteIndex != -1) {
            bookings.erase(bookings.begin() + deleteIndex); // Remove the specific booking record from the vector
            cout << "Booking with id :" << id << " has been deleted" << endl;
            // file updation after removing the record
            ofstream WriteFile("E:\\book.txt");
            if (!WriteFile.is_open()) {
                cout << "FILE IS NOT OPENED" << endl;
                return;
            }

            for (auto& booking : bookings) {

                WriteFile << "ID:" << booking.booking_id << "  Date:" << booking.d.dd << "-" << booking.d.mm << "-" << booking.d.yyyy << "  Time:" << booking.t.h << ":" << booking.t.m << ":" << booking.t.s << endl;
            }

            WriteFile.close();
        }
        else {
            cout << "Booking with ID " << id << " not found." << endl;
        }
    }
};
void Booking::BookingMenu()
{
    system("cls");
    int bookingchoice;

    unique_ptr<BookingCollection> bookingptr = make_unique<BookingCollection>();
    do
    {

        cout << R"(
                                                                                   
       _                                          
      |)  _   _  |  o .   _    |\/|  _  ._      
      |) () () |< | | | (|   |  | (/_ | | |_| 
                            _|                    
                                                         
       )" << endl;
        cout << "\n\t\t1. ADD BOOKING" << endl;
        cout << "\n\t\t2. EDIT BOOKING" << endl;
        cout << "\n\t\t3. SEARCH BOOKING" << endl;
        cout << "\n\t\t4. VIEW BOOKING " << endl;
        cout << "\n\t\t5. DELETE BOOKING" << endl;
        cout << "\n\t\t0. BACK TO MAIN" << endl;
        cin >> bookingchoice;
        system("cls");
        switch (bookingchoice)
        {
        case 1:
        {
            bookingptr->addBooking();
            system("pause");
            system("cls");
            break;
        }
        case 2:
        {
            bookingptr->editBooking();
            system("pause");
            system("cls");
            break;
        }
        case 3:
        {
            bookingptr->SearchBooking();
            system("pause");
            system("cls");
            break;
        }
        case 4:
        {
            bookingptr->viewBookingsFromFile();
            for (auto& b : bookingptr->bookings) {
                b.viewBooking();
            }
            system("pause");
            system("cls");
            break;
        }
        case 5:
        {
            bookingptr->deleteBooking();
            system("pause");
            system("cls");
            break;
        }
        case 0:
            break;
        default:
            cout << "\nINVALID CHOICE!" << endl;
            system("pause");
            system("cls");
            break;
        }
    } while (bookingchoice != 0);

}
void DisplayMainMenu()
{
    int choice;
    do
    {
        cout << R"(
                   _    _       _         _    _             
                  |  \/  |     (_)       |  \/  |                 
                  | .  . | _ _ _ _ _   | .  . | _ _ __  _   _ 
                  | |\/| |/ ` | | ' \  | |\/| |/ _ \ '_ \| | | |
                  | |  | | (| | | | | | | |  | |  _/ | | | |_| |
                  \_|  |/\,||| || \|  |/\_|| ||\,|
                                               
                                                         
       )" << endl;
        cout << "\n\t\t1. HOTEL" << endl;
        cout << "\n\t\t2. EMPLOYEE" << endl;
        cout << "\n\t\t3. ROOM" << endl;
        cout << "\n\t\t4. PAYMENT" << endl;
        cout << "\n\t\t5. CUSTOMER" << endl;
        cout << "\n\t\t6. BOOKING" << endl;
        cout << "\n\t\t0. EXIT" << endl;
        string var;
        while (true)
        {
            getline(cin, var);
            stringstream ss(var);
            if (var.empty())
            {
                continue;
            }
            if (!(ss >> choice) || !(ss.eof()))
            {

                cout << "Invalid! Please enter a numeric value." << endl;

            }
            break;
        }
        system("cls");
        switch (choice)
        {
        case 1:
        {

            cout << RED << BOLD;
            Hotel::HotelMenu();
            break;
        }
        case 2:
        {
            cout << GREEN << BOLD;
            Employee::EmployeeMenu();
            break;
        }
        case 3:
        {
            cout << YELLOW << BOLD;
            Room::RoomMenu();
            break;
        }
        case 4:
        {
            cout << RED << BOLD;
            Payment::PaymentMenu();
            break;
        }
        case 5:
        {
            cout << GREEN << BOLD;
            Customer::CustomerMenu();
            break;
        }
        case 6:
        {
            cout << YELLOW << BOLD;
            Booking::BookingMenu();
            break;
        }
        case 0:
            exit(0);
        default:
            cout << "\nINVALID CHOICE!" << endl;
            system("pause");
            system("cls");
            break;
        }
    } while (choice != 0);
    
    return;
}
int main()
{
    display();
    display1();
    system("pause");

    cout << BLUE << BOLD;

    cout << R"(

 ||      ||` '||'''| ' ||     .|'''', .|''''|, '||\   /||` '||''''| 
 ||      ||   ||   .   ||     ||      ||    ||  ||\\.//||   ||   .  
 ||  /\  ||   ||'''|   ||     ||      ||    ||  ||     ||   ||'''|  
  \\//\\//    ||       ||     ||      ||    ||  ||     ||   ||      
   \/  \/    .||...| . ||...| `|....' `|....|' .||     ||. .||....| 
                                                                   
                                                       
    )" << endl;


    int choice1;
    cout << BLUE;
    cout << R"(
        

         _______________
        |_______________|                                              .
        |                                             |
        |            1.  Register                     |
        |            2.  Login                        |
        |                                             |
        |_______________|

    )" << endl;
    cin >> choice1;

    if (choice1 == 1)
    {
        registerUser();
        char choice;
        cout << "Do you want for login y/ n" << endl;
        cin >> choice;
        if (choice == 'Y' || (choice == 'y'))
        {
            system("cls");
            loginUser();
            cout << "LOgin Successful!" << endl;
            system("pause");
            system("cls");
            DisplayMainMenu();
        }
    }
    else if (choice1 == 2)
    {
        if (loginUser())
        {
            cout << "Login successful!" << std::endl;
            system("pause");
            system("cls");
            DisplayMainMenu();
        }
        else
        {
            cout << "Invalid username or password. Please try again." << endl;
            system("pause");
            system("cls");
        }
    }
    else
    {
        cout << "Invalid choice. Exiting..." << endl;
    }

}