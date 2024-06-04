//Program human nationality
#include<iostream>
#include<string>
using namespace std;
class Human{
	private:
		string name;
		string nationality;
		unsigned short age;
		char gender;
		public:
			//Overloaded constructor
			Human(string name , string nationality , unsigned short age , char gender)
			{
				this -> name = name;
				this -> nationality = nationality;
				this -> age = age;
				this -> gender = gender;
			}
			Human();
			void display();
};
Human :: Human()
{
	cout<<" Enter the Name : ";
	getline(cin , name);
//	cin.ignore();
	cout<<" Enter the Nationality : ";
	getline(cin , nationality);
	cout<<" Enter the Age : ";
	cin>>age;
	cout<<" Enter the Gender : ";
	cin>>gender;
}
void Human :: display()
{
	cout<<" Name : "<<name<<endl;
	cout<<" Nationality : "<<nationality<<endl;
	cout<<" Age : "<<age<<endl;
	cout<<" Gender : "<<gender<<endl;
}
int main()
{
	
	Human h("Ali Hassan" , "Pakistan" , 19 , 'M');
	h.display();
	cout<<endl;
	cout<<"\n============="<<endl;
	Human h2;
	cout<<endl;
	cout<<"\n============="<<endl;
	h2.display();
	return 0;
} 