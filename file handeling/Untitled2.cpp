#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream write("E:\/test.txt");
    // now i want to write something in the file so i have to use (write<<)
    
    write<<"I'm studing yt courses from yt..."<<endl;
    
    return(0);
}
