//example 3:- Print the data of the file without space......
// write the same form the previous question....
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string data;
	ifstream file;
	file.open("test.txt",ios::in);
	if(!file.is_open())
	{
		cout<<"file opening error..."<<endl;
	}
	else
	{
		while(!file.eof())
		{
			getline(file , data);
			if(data != " ")
			cout<<data;
	
	
	}
}
}
