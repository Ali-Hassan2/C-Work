// example 4 :-...Only print the last 5 characters....
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int counter;
	string data;
	ifstream file;
	file.open("ali.txt",ios::in);
	if(!file.is_open())
	{
		cout<<"File Opening Error...!!!!"<<endl;
	}
	else
	{
		while(!file.eof() && counter <= 5) 
		{
		
		data = file.get();
		counter++;
		cout<<data;
		
	}
	}
	
	return(0);
}

