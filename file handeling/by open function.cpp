#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream write;
	write.open("Hy.txt",ios :: in)
	{
		write << "Hello Brother How are you..."<<endl;
	}

return 0;
}

