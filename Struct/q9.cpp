#include<iostream>
using namespace std;

struct book
{
	int bid;
	char name[30];
	int price;
	
};
struct order
{
	int orderid;
	book bk[5];
	
};
int main()
{

order od;
cout<<"Enter the order id : "<<endl;
cin>>od.orderid;
cout<<"Enter the details of the Five books : "<<endl;
for (int i = 0 ; i < 5 ; i++)
{
	 cout<<"Book Id : "<<endl;
	 cin>>od.bk[i].bid;
	 cout<<"Book Number : "<<endl;
	 gets(od.bk[i].name);
	 cout<<"Book Price : "<<endl;
	 cin>>od.bk[i].price;
}
cout<<"Order details : "<<endl;
cout<<"Order id : "<<od.orderid<<endl;
cout<<"Book ID \t Book Name \t Book Price : "<<endl;
for (int i = 0 ; i < 5 ; i++)
{
	cout<<od.bk[i].bid<<"\t"<<od.bk[i].name<<"\t"<<od.bk[i].price<<endl;
}

	
	
	
	
	
	return(0);
}
