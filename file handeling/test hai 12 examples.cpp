//some examples...
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string data;
	ifstream file;
	file.open("test.txt",ios::in);
	// now i have to apply a condition to check wether the file is open or not
	if(!file.is_open())
	{
		cout<<"File opening error..!!!"<<endl;
	}
	else
	{
		while(!file.eof())
		{
		  // so the eof stands for the end of the file so thats why i used it
//		  taky jab tak data hatm nhi hojata loop chalta jaye..
		// so this function is use to get the data at which the cursor is...
//		data = file.get();
getline(file,data);
		// for displaying the data in the one line use the getline..
		// so basically it will only store the one character so if i want to get the 
//		full data in the file i have to use a loop until the file data is end...
		cout<<data<<endl;
	}
}
	return(0);
}
