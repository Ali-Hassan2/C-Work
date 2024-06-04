#include<iostream>
using namespace std;
struct player
{
	int dis;
	int min;
	int sec;
	
};


int main()
{
	player p1 , p2;
	float time1 , time2;
	
	cout<<"Enter the distance covered by the player 1 : "<<endl;
	cin>>p1.dis;
	cout<<"Enter the Minutes and Seconds taken by player 1 :"<<endl;
	cin>>p1.min>>p1.sec;
	
	cout<<"Enter the distance coverd by the player 2 : "<<endl;
	cin>>p2.dis;
	cout<<"Enter the Minutes and Seconds covered by the player 2 : "<<endl;
	cin>>p2.min>>p2.sec;
	
	time1 = (p1.min * 60 + p1.sec)/p1.dis;
	time2 = (p2.min * 60 + p2.sec)/p2.dis;
	
	cout<<"The records for the winner player are as follow : "<<endl;
	if(time1<time2)
	{
		cout<<"Distance is : "<<p1.dis<<" Miles.."<<endl;
		cout<<p1.min<<" Minutes "<<'\n'<<p1.sec<<" Seconds.."<<endl;
	}
	else
	{
		cout<<"Distance is : "<<p2.dis<<" Miles.."<<endl;
		cout<<p2.min<<" Minutes "<<'\n'<<p2.sec<<" Seconds.."<<endl;
	}
	
	
	return(0);
}
