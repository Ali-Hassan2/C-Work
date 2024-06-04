#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream write;
	write.open("ali.txt");
	write << "I love me..";
	// so if i want to change the 4 with 7 so we can change the position of the 
//	pointer by using the seekp..

//	cout << write.tellp();
// you can also do it by using the beg mode
write.seekp(7 , ios :: beg);
write << "Ali Hassan"; //so basically this is the syntax of changing the numbers or text...	
	write.close(); 
	
	// tellp : returns the position of the cursor..
//	seekp : used to move lef right in the file ios :: beg,end,cur..while writing in the file

//tellg : returns the position of the cursor..
//seekg : used to move left or right while reading the file
	
	
	// for viewing i have to read the data from the file
	string st;
	ifstream read;
	read.open("ali.txt" , ios :: app);
	getline(read , st);
	cout<<st;
	read.close();
	return(0);
}

