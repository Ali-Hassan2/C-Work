#include<iostream>
using namespace std;
int main()
{
	int rows = 8 ;
	int side;
	
	while(rows--> 0)
	{
		side = 8 ;
		if(rows % 2 != 0)
		{
			cout<<" ";
		}
		while(side--> 0) // here you can change the length of the lines....
		{
			cout<<"-";
		}
		cout<<endl;
	}
	
	
	return(0);
}
