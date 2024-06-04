#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;



enum GENDER
{
    MALE, FEMALE
};


class Person {
protected:
    char NIC[15];
public:
    char Name[50];
    long MobileNo;
    char Email[100];
    GENDER gen;

    Person();

    ~Person();

    string GetUserName();

    string GetNIC();

    void SetNIC(string nic);

};


Person::Person()
{
//    strcpy_s(NIC, "0000-0000000-0");

    Name[0] = 'N';
    Name[1] = 'o';
    Name[2] = ' ';
    Name[3] = 'N';
    Name[4] = 'a';
    Name[5] = 'm';
    Name[6] = 'e';

    //strcpy_s(Name, "No Name");
//    strcpy_s(Email, "abc@def.com");
//    gen = GENDER::MALE;
    //cout << "Person constructor called\n";
}

Person::~Person()
{
    //cout << "Person destructor called\n";
}

string Person::GetUserName()
{
    if (gen == MALE)
        return Name;// +NIC + "M";
    else
        return Name;// +NIC + "F";
}

string Person::GetNIC()
{
    return NIC;
}

void Person::SetNIC(string nic)
{
    strcpy_s(NIC, nic.c_str());
}




class Patient : public Person
{
public:

    int  PID;
    char Desease[100];
    Patient()
    {
        strcpy_s(Name, "PatientName");
        //cout <<"Patient constructor called\n";
    }

    ~Patient()
    { 
        //cout << "Patient destructor called\n";
    }

    void DisplayInfo()
    {
        cout << PID << "\t-\t" << Name << "\t-\t" << Desease << "\t-\t" << gen << endl;
    }

    static void ShowMenu()
    {
        cout << "1. Add new patient\n";
        cout << "2. List all patient\n";
        cout << "3. Search patient by ID\n";
        cout << "4. Return to main\n";
    }

};

class Staff : public Person
{
public:
    int  SID;
public:
    Staff()
    {
        //NIC = "123";
        //cout << "Staff constructor called.\n";
    }
    void SetStaffID(int sid)
    {
        SID = sid;
    }
};


class Doctor : public Staff
{

public:  
    char Specialization[50];  

    void DisplayInfo()
    {
        cout << SID << "\t-\t" << Name << "\t-\t" << Specialization << endl;
    }

    Doctor()
    {
        strcpy_s(Specialization, "Arthopadic");
        //cout << "Doctor constructor called\n";
    }

    ~Doctor()
    {

        //cout << "Doctor Destructor called\n";
    }
  
};


class Nurse : public Staff
{

public:
    int    ExpMonth;
    Nurse()
    {
        cout << "Nurse constructor called\n";
    }

    ~Nurse()
    {
        cout << "Nurse destructor called\n";
    }

};


///    Google     what is inheritance  
///    ChatGPT    i want to learn inheritance using c++
///    Book       Chapter Inheritance ()
///               
///             
///    Home works ......
///    Assignment 01 ...   95
///    Class code ......
/// 
///    Subjective 30 40 percent
///    Coding     70 60 per     

class Date
{
public:
    int mm, dd, yy;
    void SetDate(int d, int m, int y)
    {
        dd = d;
        mm = m;
        yy = y;
    }
    Date()
    {
        //cout << "Date constructor....\n";
    }

    ~Date()
    {
        //cout << "Date Destructor....\n";
    }
};

class Appointment
{
public:
    int  AppointmentID;
    //Date AppointmentDate;
    bool IsContinue;
    int  Number;
    Patient* ptrPatient;
    Doctor* ptrDoctor;
    Nurse* ptrStaff;

    Appointment()
    {
        AppointmentID = 0;
        Number = 0;
        IsContinue = false;
        ptrPatient = NULL;
        ptrDoctor = NULL;
        ptrStaff = NULL;
        //cout << "Constructor Appointment\n";
    }

    void DisplayInfo()
    {
        if (ptrPatient != NULL)
        {
            cout << AppointmentID << "\t-\t" << ptrPatient->Name << "\t-\t" << ptrDoctor->Name << "\t-\t" << Number << endl;
        }
    }


    ~Appointment()
    {
       // cout << "Destructor Appointment\n";
    }

};

class PrescribMed
{
public:
    string MedicinName;
    int    Potency;
    string   doze; // 1/2 + 1/2 + 1/2
};

class Prescription
{
public:
    int PresID;
    Date date;
    int PrePrescriptionID;
    Patient* ptrPatient;           // Aggregation
    Doctor* ptrDoctor;             // Aggregation
    int medCount;
    PrescribMed listMedicins[10];  // Composition

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

            if (ch>='0' && ch<='9')
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




class PatientCollection
{
public:
    Patient arrPatient[100];
    int pCount = 0;

    void ManagePatients()
    {
       

        int  choice = 0;
        do {
            Patient::ShowMenu();
            cout << "Enter choice:";
         
            //cin >> choice;

            choice = Utility::GetNumberFromUser(4);

            switch (choice)
            {
            case 1:
                // Creating a new value
                cout << "----- New Patient -----\n";
                AddNewPatient();
                break;
            case 2:
                if (pCount <= 0)
                {
                    cout << "----- List is empty -----\n";
                    break;
                }

                for (int i = 0; i < pCount; i++)
                {
                    arrPatient[i].DisplayInfo();
                }
                break;
            case 3:
            {
                cout << "sch by ID:";
                int id = -1;
                cin >> id;
                int indx = FindPatintByID(id);
                if (indx >= 0)
                    arrPatient[indx].DisplayInfo();
                else
                    cout << "Patint not found";

            }
            break;
            case 4:                
                break;
            default:
                cout << "Invalid option, try again...\n";
                break;
            }


        } while (choice != 4);


    }


    int FindPatintByID(int id)
    {
        
        for (int i = 0; i < pCount; i++)
        {
            if (arrPatient[i].PID == id)
            {
                return i;
            }
        }
        return -1;
    
    }

    void AddNewPatient()
    {
        arrPatient[pCount].PID = pCount + 1;
        cout << "Enter patient Name:";
        cin >> arrPatient[pCount].Name;

        cout << "Enter desease name:";
        cin >> arrPatient[pCount].Desease;
        // adding value in collection and counter is incremented
        pCount++;
    }

    void WriteDataToFile(string filePath)
    {
        ofstream fileWriter;
        fileWriter.open(filePath);
        if (!fileWriter)
        {
            cout << "File open error\n";
        }
        else
        {
         
            for (int i = 0; i < pCount; i++)
            {
               // fileWriter << arrPatient[i].PID << ","
               //     << arrPatient[i].Name << ","
               //     << arrPatient[i].Desease << ","
               //     << arrPatient[i].gen<<"\n";

                fileWriter.write((char*) &arrPatient[i], sizeof(Patient));


            }

            fileWriter.close();


        }

    }

    void ReadDataFromFile(string filePath)
    {
        ifstream fileReader;
        fileReader.open(filePath);
        if (!fileReader)
        {
            cout << "File open error\n";
        }
        else
        {

            while (1)
            {
               
                fileReader.read((char*)&arrPatient[pCount], sizeof(Patient));
                if (fileReader.eof())
                    break;
                pCount++;


            }

            fileReader.close();


        }

    }

};

class DoctorCollection
{
public:
    Doctor arrDoctor[100];
    int pCount = 0;

    void ShowMenu()
    {
        cout << "1. Add new Doctor\n";
        cout << "2. List all Doctors\n";
        cout << "3. Search Doctor by ID\n";
        cout << "4. Return to main\n";
    }

    void ManageDoctors()
    {


        int  choice = 0;
        do {
            ShowMenu();
            cout << "Enter choice:";

            //cin >> choice;

            choice = Utility::GetNumberFromUser(4);

            switch (choice)
            {
            case 1:
                // Creating a new value
                cout << "----- New Doctor -----\n";
                AddNewDoctor();
                break;
            case 2:
                if (pCount <= 0)
                {
                    cout << "----- List is empty -----\n";
                    break;
                }

                for (int i = 0; i < pCount; i++)
                {
                    arrDoctor[i].DisplayInfo();
                }
                break;
            case 3:
            {
                cout << "sch by ID:";
                int id = -1;
                cin >> id;
                int indx = FindDoctorByID(id);
                if (indx >= 0)
                    arrDoctor[indx].DisplayInfo();
                else
                    cout << "Patint not found";

            }
            break;
            case 4:
                break;
            default:
                cout << "Invalid option, try again...\n";
                break;
            }


        } while (choice != 4);


    }


    int FindDoctorByID(int id)
    {

        for (int i = 0; i < pCount; i++)
        {
            if (arrDoctor[i].SID == id)
            {
                return i;
            }
        }
        return -1;

    }

    void AddNewDoctor()
    {
        arrDoctor[pCount].SID = pCount + 1;
        cout << "Enter Doctor Name:";
        cin >> arrDoctor[pCount].Name;

        cout << "Enter Specialization name:";
        cin >> arrDoctor[pCount].Specialization;
        // adding value in collection and counter is incremented
        pCount++;
    }

    void WriteDataToFile(string filePath)
    {
        ofstream fileWriter;
        fileWriter.open(filePath);
        if (!fileWriter)
        {
            cout << "File open error\n";
        }
        else
        {

            for (int i = 0; i < pCount; i++)
            {
                // fileWriter << arrDoctor[i].PID << ","
                //     << arrDoctor[i].Name << ","
                //     << arrDoctor[i].Desease << ","
                //     << arrDoctor[i].gen<<"\n";

                fileWriter.write((char*)&arrDoctor[i], sizeof(Doctor));


            }

            fileWriter.close();


        }

    }

    void ReadDataFromFile(string filePath)
    {
        ifstream fileReader;
        fileReader.open(filePath);
        if (!fileReader)
        {
            cout << "File open error\n";
        }
        else
        {

            while (1)
            {

                fileReader.read((char*)&arrDoctor[pCount], sizeof(Doctor));
                if (fileReader.eof())
                    break;
                pCount++;


            }

            fileReader.close();


        }

    }

};




class PatientStaff : public Patient, public Staff
{

};


PatientCollection pc;
DoctorCollection dc;


class AppointmentCollection
{
public:
    Appointment arrAppointment[100];
    int appCount = 0;
    



void ManageAppointments()
    {


        int  choice = 0;
        do {
            ShowMenu();
            cout << "Enter choice:";

            //cin >> choice;

            choice = Utility::GetNumberFromUser(4);

            switch (choice)
            {
            case 1:
                // Creating a new value
                cout << "----- New Appointment -----\n";
                AddNewAppointment();
                break;
            case 2:
                if (appCount <= 0)
                {
                    cout << "----- List is empty -----\n";
                    break;
                }

                for (int i = 0; i < appCount; i++)
                {
                    arrAppointment[i].DisplayInfo();
                }
                break;
            case 3:
            {
                cout << "Search by PatientID:";
                int id = -1;
                cin >> id;
                //int indx = // FindPatintByID(id);
                //if (indx >= 0)
                //    arrAppointment[indx].DisplayInfo();
                //else
                //    cout << "Patint not found";
            }
            break;
            case 4:                
                break;
            default:
                cout << "Invalid option, try again...\n";
                break;
            }


        } while (choice != 4);


    }

int GetMaxAppNumber()
{
        int maxNumber = 0;
        for (int i = 0; i < appCount; i++)
        {
            if (maxNumber < arrAppointment[i].Number)
            {
              maxNumber =  arrAppointment[i].Number;
            }
        }

        return maxNumber;
    
    }

void AddNewAppointment()
{
        arrAppointment[appCount].AppointmentID = appCount + 1;

        arrAppointment[appCount].Number = GetMaxAppNumber() + 1;

        cout << "Enter Patient ID:";
        int pid = Utility::GetNumberFromUser(4);
        int index = pc.FindPatintByID(pid);
        arrAppointment[appCount].ptrPatient =
            &pc.arrPatient[index];

        

        cout << "Enter Doctor ID:";
        int did = Utility::GetNumberFromUser(4);
        index = dc.FindDoctorByID(did);
        arrAppointment[appCount].ptrDoctor =
            &dc.arrDoctor[index];

        appCount++;
    }

void WriteDataToFile(string filePath)
    {
        ofstream fileWriter;
        fileWriter.open(filePath);
        if (!fileWriter)
        {
            cout << "File open error\n";
        }
        else
        {

            for (int i = 0; i < appCount; i++)
            {
                // fileWriter << arrAppointment[i].PID << ","
                //     << arrAppointment[i].Name << ","
                //     << arrAppointment[i].Desease << ","
                //     << arrAppointment[i].gen<<"\n";

                fileWriter.write((char*)&arrAppointment[i], sizeof(Appointment));


            }

            fileWriter.close();


        }

    }

    void ReadDataFromFile(string filePath)
    {
        ifstream fileReader;
        fileReader.open(filePath);
        if (!fileReader)
        {
            cout << "File open error\n";
        }
        else
        {

            while (1)
            {

                fileReader.read((char*)&arrAppointment[appCount], sizeof(Appointment));
                if (fileReader.eof())
                    break;
                appCount++;


            }

            fileReader.close();


        }

    }

    void ShowMenu()
    {
        cout << "1. Add new appointment\n";
        cout << "2. List all appointments\n";
        cout << "3. Search by Patient ID\n";
        cout << "4. Return to main menu\n";
    }


};



int main()
{
    AppointmentCollection ac;    
    
    pc.ReadDataFromFile("Patient.txt");
    dc.ReadDataFromFile("Doctors.txt");
    
    int  choice = 0;
    do {
        
        cout << "1. Manage Patients\n";
        cout << "2. Manage Doctors\n";
        cout << "3. Manage appointments\n";
        cout << "4. Exit\n";


        cout << "Enter choice:";

        //cin >> choice;

        choice = Utility::GetNumberFromUser(4);

        switch (choice)
        {
        case 1:
            pc.ManagePatients();
            break;
        case 2:
            dc.ManageDoctors();
            break;
        case 3:
            ac.ManageAppointments();
            break;
        case 4:
            cout << "Have a nice Day";
        break;
        default:
            cout << "Invalid option, try again...\n";
            break;
        }


    } while (choice != 4);

    
   
    //ac.WriteDataToFile("Appointments.txt");
    pc.WriteDataToFile("Patient.txt");
    dc.WriteDataToFile("Doctor.txt");
 

}
