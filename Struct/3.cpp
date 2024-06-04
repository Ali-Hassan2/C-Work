// by passing arrays
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
struct bookinfo
{
    int num[5];
    string name[5];
    double size[5];
    

};

int main()
{
    bookinfo s;
    for (int i = 0 ; i < 5 ; i++)
    {
        cout<<"Enter the num of "<<i+1<<" the book : "<<endl;
        cin>>s.num[i];
        cout<<"\n===================================="<<endl;
        cout<<"Enter the name of "<<i+1<<" the book : "<<endl;
        cin>>s.name[i];
        cout<<"\n===================================="<<endl;
        cout<<"Enter the size of "<<i+1<<" book : "<<endl;
        cin>>s.size[i];
        cout<<"\n===================================="<<endl;
    }


     


getch();
return (0);
}