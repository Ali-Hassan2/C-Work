#include<iostream>
#include<conio.h>
using namespace std;
class start{
    private:
    string name;
    unsigned int age;
    public:
    start(string name , unsigned age)
    {
        this -> name = name;
        this -> age = age;
    }
    start(const start &s)
    {
        name  = s.name;
        age = s.age;
    }
    void display()
    {
        cout<<"The name is : "<<name <<endl;
        cout<<"The age is : "<<age<<endl;
    }

};                  
int main()
{
     start s("Ali Hassan" , 16);
     start s2 = s;
     s.display();
     cout<<endl;
     cout<<":::::::::::"<<endl;
     s2.display();
     cout<<endl;
getch();
return (0);
}