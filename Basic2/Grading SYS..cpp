#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	float Perc;
	short sci, bio, che,eng, urdu;
	short Total;
	cout<<"Please Enter the marks of Sci ";
	cin>>sci;
	cout<<"Please Enter the marks of Bio ";
	cin>>bio;
	cout<<"Please Enter the marks of Che. ";
	cin>>che;
	cout<<"Please Enter the marks of Eng ";
	cin>>eng;
	cout<<"Please Enter the marks of Urdu ";
	cin>>urdu;
	
	Total= sci+ bio+ che+eng+ urdu;
	
	
	Perc=Total*100/505;
	
	if(Perc>=90)
	{
		cout<<"You obtained A+ Grade ";
	}
	else if(Perc>=80 && Perc<90)
	{
		cout<<"You obtained A+ Grade \n";
	}
	else if(Perc>=80 && Perc<90)
	{
	cout<<"You obtained A Grade \n";
    }
	else if(Perc>=70 && Perc<80)
	{
	cout<<"You obtained B Grade \n ";
    }
	else if(Perc>=60 && Perc<70)
	{
	cout<<"You obtained C Grade \n";
    }
	else if(Perc>=50 && Perc<60)
	{
	cout<<"You obtained E Grade \n";
    }
    else
    {
    	cout<<"You are Fail ";
	}

	cout<<"You Marks are = "<<Total<<"\n";
	cout<<"\n You Percentage is = "<<Perc;
	
	getch();
}
