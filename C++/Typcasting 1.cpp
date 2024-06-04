#include<iostream>
using namespace std;
int main()
{
	//here i declare avariable of integer data type. 
	int students;
	cout<<"Enter the amount of students :";
	cin>>students;
	//here i declare integer variable and give its value
	int calreq;
	cout<<"Enter the calories required for each student :";
	cin>>calreq;
	//here i declare another integer variable
	int numcal;
	cout<<"Enter the number of calories in each pound of nuts :";
	cin>>numcal;
	//here i will declare a variable in which can perform our calculation so that the value of our 
	//output can be stored in it.
	int nuts;
	nuts=calreq/numcal;//here i use division operator so that calories for each student / number of calories 
	int dried ;          //number of calories are in the per pound of nuts
	dried= nuts / 0.70;       //here dried fruit have calories 0.70 less thennuts so i will divide the total
	//number of nuts by 0.7 so that i can acheive my value for dried fruits. 
	cout<<"The amount of nuts required for students is : "<<nuts<<" pounds."<<endl;
	cout<<"The amount of dried fruit required for students is : "<<dried<<" pounds."<<endl;
	return 0;
	
	 
}