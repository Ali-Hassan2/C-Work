#include<iostream>
#include <string.h>
using namespace std;


void chicken();
void channy();
void daal();
//int roti();
//int coldrink();
// struct khoka
// {
// 	string name[25];
// 	string choice[25];
// };

int main()
{
	while(true)
	{
	
	
	int option;
	int choice;
	cout<<"\n=========================================\n"<<endl;
	cout<<"1.For chicken.."<<endl;
	cout<<"2.For Channy.."<<endl;
	cout<<"3.For Daal.."<<endl;
	cout<<"4.For Roti.."<<endl;
	cout<<"5.For cold drink.."<<endl;
	cout<<"6.For Exit.."<<endl;
	
	cout<<"Enter the choice : .... ";
	cin>>option;
	
	switch (option)
	{
		case 1:
			{
				system("CLS");
				chicken();
				break;
			}
			case 2:
				{
					channy();
					break;
				}
				case 3:
					{
						system("CLS");
						daal();
						break;
					}
					case 4:
						{
//							roti();
							break;
						}
						case 5:
							{
//								coldrink();
								break;
							}
							case 6:
								{
									cout<<"\nThank You for Visiting.....!!!!"<<endl;
									exit(0);
								}
							default:
								{
									cout<<"Invalid Choice...."<<endl;
								}
							
						}
							
	}
	return (0);
}
	
	
	void chicken()
	{
		int total1 = 1 , total2  = 1;
		int choice;
		int white_chicken = 500;
		int brown_plate = 400;
		int karahi = 600;
		int option;
		cout<<"1.For the white chicken.."<<endl;
		cout<<"2.For the brown chicken.."<<endl;
		cout<<"3.For the karahi chicken.."<<endl;
		cout<<"Select the choice : ";
		cin>>option;
		switch (option)
		{
			case 1:
				{
					system("CLS");
					cout<<"Enter the number of the plates : "<<endl;
					cin>>choice;
					total1 = choice*white_chicken;
					cout<<"The total amount of the chicken is : "<<total1;
					break;
				}
				case 2:
					{
						system("CLS");
						cout<<"Enter the number of the paltes : "<<endl;
						cin>>choice;
						total2 = choice*brown_plate;
						cout<<"The total amount is = "<<total2<<endl;
						break;
					}
					default:
						{
							
						}
		}
		
		
	}
void channy()
	{
		system("CLS");
		int total1 = 1;
		int total2 = 1;
		int shahichany= 200;
		int sadychany = 100;
		int choice;
		int option;
       cout<<"1.For Shahi Channy.."<<endl;
	   cout<<"2.For Sady Chany.."<<endl;
	   		cout<<"Enter the choice : "<<endl;
	   		cin>>choice;
	   		switch(choice)
	   		{
	   			case 1:
	   				{
	   					cout<<"How many plates did you want to enter : "<<endl;
	   					cin>>option;
	   					total1 = option * shahichany;
	   					cout<<"The total amount of channy is : "<<total1<<endl;
	   					break;
					   }
					   case 2:
					   	{
					   		cout<<"How many plates did you want to enter : "<<endl;
					   		cin>>option;
					   		total2 = option * sadychany;
					   		cout<<"The total amount : "<<total2<<endl;
					   		break;
						   }
			   }
	}
	void daal()
	{
		int total1 = 1; 
		int total2 = 1;
		int total3 = 1;
		int total4 = 1; 
		int shahidaal = 100;
		int specialdaal = 150;
		int sadidaal = 50;
		int mashdaal = 70;
		int option;
		char choice;
		cout<<"1.For the Shahi Daal.."<<endl;
		cout<<"2.For Special Daal.."<<endl;
		cout<<"3.For Sadi Daal.."<<endl;
		cout<<"4.For Mash Daal..."<<endl;
		cout<<"\nEnter the choice : ";
		cin>>option;
		switch(option)
		{
			case 1:
				{
					cout<<"How many plates do you want : "<<endl;
					cin>>choice;
					if (choice == 'H')
					{
						
						
							total1 = shahidaal / 2;
						cout<<"The total price is = "<<total1<<endl;
					}
					else
					{
					
					
					total1 = choice * shahidaal;
					cout<<"The total amount is : "<<total1<<endl;
					break;
				}
				}
				case 2:
					{
						cout<<"How many plates do you want : "<<endl;
						cin>>choice;
						if (choice == 'H')
						{
							total2 = specialdaal / 2;
							cout<<"The total price = "<<total2<<endl;
							
						}
						else
						{
							total2 = choice * specialdaal;
							cout<<"The total price is : "<<total2<<endl;
						}
						break;
					}
					case 3:
						{
							
						}
		}
		
	}
	int roti()
	{
		
	}
	
	int coldrink()
	{
		
	}
	
	
	
	
	
	
	

