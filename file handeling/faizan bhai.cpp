#include<iostream>
using namespace std;
void us(void);
void au(void);
void eu(void);
void menu()
{
	int choice;
	cout<<"1.For Us Dollors...!!"<<endl;
	cout<<"2.For Aus currency...!!"<<endl;
	cout<<"3.For Euros..!!"<<endl;
	cout<<"4.Press for exit..!!"<<endl;
	cout<<"PLease Enter the choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				us();
			}
			case 2:
				{
					au();
				}
				case 3:
					{
						eu();
					}
					case 4:
						{
							exit(0);
						
						}
						default:
							{
								cout<<"Please Enter the Valid Choice...!!!"<<endl;
							}
	}
	
}

int main()
{
	menu();
	return 0;
}

int money;

void us(void)
{
	
}
void au(void)
{
	
}
void eu(void)
{
	
}
