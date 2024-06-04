#include<iostream>
#include<conio.h>
using namespace std;
class point{
    private:
    int x;
    int y;
    public:
    point(int x , int y)
    {
        this -> x = x;
        this -> y = y;
    }
    point(const point &p)
    {
        x = p.x;
        y = p.y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }

};                
int main()
{
     point p(1,2);
     point p1 = p;
     cout<<"X = "<<p.getx();
     cout<<endl;
     cout<<"Y = "<<p.gety();
     cout<<endl;
     cout<<":::::::::::::"<<endl;
     cout<<"X = "<<p1.getx();
     cout<<endl;
     cout<<"Y = "<<p1.gety();
     cout<<endl;
     return 0;
getch();
return (0);
}