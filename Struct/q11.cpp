#include<iostream>
using namespace std;
struct alibhai{


	int rollno[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	string name[15] = {"Katakai","Kio","TYYY","Ali" , "Hassan" , "Ahmed" , "Bilal" , "Ali2","Hassan2","Faheem" , "sabir", "Jan","Fazir","Hashir","Fati"};
	int age[15] = {18, 18, 18 , 19 , 18, 18, 18, 18 ,19 ,19 ,19,20,20,18,18};
	
};

int main()
{
	alibhai ali;
	for (int i = 0 ; i < 15 ; i++)
	{
		cout<<"The name of the student "<<i+1<<" : "<<ali.name[i]<<endl<<endl;
		cout<<"The roll no of the student"<<i+1<<" : "<<ali.rollno[i]<<endl<<endl;
		cout<<"The age of the students is   "<<i+1<<" : "<<ali.age[i]<<endl<<endl;
	}
	cout<<endl<<endl;
}
