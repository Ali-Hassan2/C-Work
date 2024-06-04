#include<iostream>
#include<fstream>
using namespace std;
int main()
{
//	ofstream write("Hiladalana.txt");
//	write<<"Gadari krty hain thari ben k chodo.."<<endl;
//	write<<"kya haal hai mera kiu hila dala na..."<<endl;
//now i want to read data..

// create an string variable and store the data in the file to the string variable and 
//print it...
string st;
ifstream read ("abc.txt");
getline(read , st);

cout<<st;

	
	return(0);
}
