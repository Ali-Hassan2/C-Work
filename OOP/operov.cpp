#include<iostream>
#include<conio.h>
using namespace std;
class vcount{
    private:
    int value;
    public:
    vcount() : value(2) {}

    void operator++(void)
    {
        ++value;
    }
    void display()
    {
        cout<<"The value is : "<<value<<endl;
    }
};                   
int main()
{
    vcount c;
    ++c;
    c.display();
    
     
getch();
return (0);
}
