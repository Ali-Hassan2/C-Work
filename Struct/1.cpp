#include<iostream>
using namespace std;
struct bookinfo
{
     int num , pages;
     string name , author;;
     double size;
     
     
    
}abc;


int main()
{
    // select any variable with the structure datatype and structure data type is basically a user defined datatype;
    bookinfo s;
    cout<<"Enter the number of the book : "<<endl;
    cin>>abc.num;
    cout<<"Enter the pages of the book : "<<endl;
    cin>>abc.pages;
    cout<<"Enter the name of the book : "<<endl;
    cin>>abc.name;
    cout<<"Enter the size of the book : "<<endl;
    cin>>abc.size;
    cout<<"Enter the Author name of the book  : "<<endl;
    cin>>abc.author;


    return(0);
}