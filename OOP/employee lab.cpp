#include <iostream>
using namespace std;
class date
{
public:
    int dd;
    int mm;
    int yyyy;
};
class employee
{
public:
    string name;
    string email;
    string nic;
    int mobile;
    date dob;

    employee()
    {
        name = "Ali";
        email = "alihassan@ahw.com";
        nic = "12121212";
        dob.dd = 01;
        dob.mm = 03;
        dob.yyyy = 2004;
        mobile = 2323;
    }
    employee(string name, string email, string nic, int mobile, date dob)
    {
        this->name = name;
        this->email = email;
        this->nic = nic;
        this->mobile = mobile;
        this->dob = dob;
    }
    // there is the no one common way by wich we can calculate the salary thats why it will become the virtual function
    virtual double calcsalary() = 0;
};
class permanent : public employee
{
public:
    int scale;
    float percentage[5];
    float basicsalary[5];
    int i;
    void setvalues()
    {
        for (i = 0; i < 5; i++)
        {
            cout << "Enter the percentage of the " << i + 1 << " : " << endl;
            cin >> percentage[i];
            cout << "Enter the basic salary of the " << i + 1 << " : " << endl;
            cin >> basicsalary[i];
        }
    }
    permanent(string name, string email, string nic, int mobile, date dob, int scale) : employee(name, email, nic, mobile, dob)
    {
        this->scale = scale;
    }
    double calcsalary()
    {
        return basicsalary[scale - 1] + percentage[scale - 1] * basicsalary[scale - 1];
    }
};
class contractual : public employee
{
public:
    int sallary;
    contractual(string name, string email, string nic, int mobile, date dob, int sallary) : employee(name, email, nic, mobile, dob)
    {
        this->sallary = sallary;
    }
    double calcsalary()
    {
        return sallary;
    }
};
class dailywages : public employee
{
public:
    int perhourrate;
    int workinghrs;
    dailywages(string name, string email, string nic, int mobile, date dob, int perhourrate, int workinghours) : employee(name, email, nic, mobile, dob)
    {
        this->perhourrate = perhourrate;
        this->workinghrs = workinghours;
    }
    double calcsalary()
    {
        return workinghrs * perhourrate;
    }
};

int main()
{
    date now = {01, 03, 4444};
    employee *employee[4] = {0};
    employee[0] = new permanent("Ali", "ali@", "232323", 23232, now, 17);
    employee[1] = new contractual("Hassan", "waris", "232323", 8998, now, 923849);
    employee[2] = new dailywages("ALi Hassna", "Ali Hassan@", "23233", 132323, now, 23, 7);
    double totalsalary = 0;
    for (int i = 0; i < 3; i++)
    {
        totalsalary += employee[i]->calcsalary();
    }
    cout << totalsalary;
    return 0;
}