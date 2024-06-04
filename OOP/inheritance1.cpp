#include<iostream>
#include<conio.h>
using namespace std;
class mamal{
    public:
    void display()
    {
        cout<<"I am the mamal"<<endl;
    }
};   
class marine_mamal : public mamal{
    public:
    void display()
    {
        cout<<"I am the mamal and also the marine mamal.."<<endl;
    }
};   
class bluewhale : public mamal ,public marine_mamal{
    public:
    void display()
    {
        cout<<"I am blue whale.."<<endl;
    }

};             
int main()
{
     mamal m;
     marine_mamal mm;
     bluewhale b;
     m.display();
     mm.display();
     b.display();
getch();
return (0);
}