#include<iostream>
#include<string.h>
using namespace std;
class student{
    public:
    int rno;
    char name[];
    public:
    student(int rno , char nam[])
    {
        this -> rno = rno;
        strcpy(name , nam);
    }
    student(student &s)
    {
        rno = s.rno;
        strcpy(name , s.name);
    }
    void display()
    {
        cout<<"The Roll no is : "<<rno<<endl<<"And name is :"<<name<<endl;
    }
};
int main()
{
    student s(1,"AliHassan");
    s.display();
    student s2(s);
    s2.display();
return 0;
}
