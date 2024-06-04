#include<iostream>
#include<cstdlib>

#include<sstream>
#include<fstream>
#include<vector>
#include<memory>
#include<string.h>
#include<windows.h>

using namespace std;
/*void display1()
{
   HANDLE color= GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE size= GetStdHandle(STD_OUTPUT_HANDLE);
int k;
char arr[]={'E','N','C','O','D','E','D',' ','B','Y',':',' ','E','M','A','N',' ','R','A','Z','I'};
 cout<<"\n\t";
 for(int i=0;i<21;i++)
 {
    k>9 ? k=0:k++;
    if(k==0)
    {
        SetConsoleTextAttribute(color,1);


    }
    else
    {
    SetConsoleTextAttribute(color,k);
    }
    cout<<arr[i];
    Sleep(200);
}
system("cls");
}
void display()
{
HANDLE color= GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE size= GetStdHandle(STD_OUTPUT_HANDLE);
int k;
char arr[]={'H','O','T','E','L',' ','R','E','S','E','R','V','A','T','I','O','N',' ','S','Y','S','T','E','M'};
 cout<<"\n\t";
 for(int i=0;i<24;i++)
 {
    k>9 ? k=0:k++;
    if(k==0)
    {
        SetConsoleTextAttribute(color,1);


    }
    else
    {
    SetConsoleTextAttribute(color,k);
    }
    cout<<arr[i];
    Sleep(200);
}
//system("cls");
}*/

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
        ofstream WriteFile("C:\\Users\\Razi\\Desktop\\cpp\\hotel.txt", ios::app);
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

        ifstream ReadFile("C:\\Users\\Razi\\Desktop\\cpp\\hotel.txt");
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
            ofstream WriteFile("C:\\Users\\Razi\\Desktop\\cpp\\hotel.txt");
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
                ofstream WriteFile("C:\\Users\\Razi\\Desktop\\cpp\\hotel.txt");
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
            hotelptr->editHotel();
            system("pause");
            system("cls");
            break;
        }
        case 3:
        {
            hotelptr->SearchHotel();
            system("pause");
            system("cls");
            break;
        }
        case 4:
        {
            hotelptr->viewHotelsFromFile();
            system("pause");
            system("cls");
            break;
        }

        case 5:
        {
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
    string emp_dept;
    double emp_salary;
    static int count;
    int hotel_id;
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


            cout << "Enter Employee Department: ";
            getline(cin, emp_dept);

            cout << "Employee Address: ";
            getline(cin, address);



            WriteDatatoFile();
        }

    }

    void WriteDatatoFile()
    {
        ofstream WriteFile("C:\\Users\\Razi\\Desktop\\cpp\\Employee.txt", ios::app);
        if (!WriteFile.is_open())
        {
            cout << "FILE IS NOT OPENED" << endl;
            return;
        }
        else
        {

            WriteFile << "ID:" <<hotel_id << "E_ID:" << emp_id << "  Name:" << name << "  Dob:" << DOB.dd << "-" << DOB.mm << "-" << DOB.yyyy << "  Salary:" << emp_salary << "  Dept:" << emp_dept << "  Address:" << address << endl;

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
    void addEmployee(const HotelCollection& hotelCollection) {
        int hotelId;
        cout << "Enter the hotel id for which you want to add an employee: ";
        cin >> hotelId;

        // Search for the hotel with the given ID in the HotelCollection's hotels vector
        int associatedHotelIndex = -1; // Index of the associated hotel
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
        employees.push_back(emp);
    }


    void WriteDatatoFile()
    {
        for (auto& employee : employees)
        {
            employee.WriteDatatoFile();
        }

    }
    void viewEmployeesFromFile() {

        ifstream ReadFile("C:\\Users\\Razi\\Desktop\\cpp\\Employee.txt");
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
                ofstream WriteFile("C:\\Users\\Razi\\Desktop\\cpp\\Employee.txt");
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
                    cout << "Hotel with ID " << id << " not found." << endl;
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
            ofstream WriteFile("C:\\Users\\Razi\\Desktop\\cpp\\Employee.txt");
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
        HotelCollection hc;
        cin >> employeechoice;
        system("cls");
        switch (employeechoice)
        {
        case 1:
        {
            do
            {
                empptr->addEmployee(hc);
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
void DisplayMainMenu()
{
    int choice;
    do
    {
        cout << R"(
  _   _       _         _    _             
|  \/  |     (_)       |  \/  |                 
| .  . | _ _ _ _ _   | .  . | _ _ __  _   _ 
| |\/| |/ ` | | ' \  | |\/| |/ _ \ '_ \| | | |
| |  | | (| | | | | | | |  | |  _/ | | | |_| |
\_|  |/\,||| || \|  |/\_|| ||\,|
                                               
                                                         
       )" << endl;
        cout << "\n\t\t1. HOTEL" << endl;
        cout << "\n\t\t2. EMPLOYEE" << endl;

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


            Hotel::HotelMenu();
            break;
        }
        case 2:
        {

            Employee::EmployeeMenu();
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
    //display();
    //display1();
    system("pause");




    int choice1;
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
        cout << "Do you want login for login y/ n" << endl;
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