#include<iostream>
using namespace std;

int main()
{
	int pas;
	 int i = 1;
	while(i<=3){
	
		cout<<"Enter password :  ";
		cin>>pas;
	if(pas==786)
	{
	cout<<"********** Welcome ***************"<<endl;
int end , start , osum = 0 , esum = 0;
cout<<"Enter a starting number : "<<endl;
cin>>start;
cout<<"Enter a ending number : "<<endl;
cin>>end;
for(int i = start ; i<=end ; i++)
{
    if (i % 2 == 0)
    {
        esum = esum+=i*i;
    }
    else 
    osum = osum+=i;
}
cout<<"The even sum is : "<<esum<<endl;
cout<<"The odd sum is : "<<osum<<endl;
break;}

else{
}
cout<<"Wrong pasword\n";

i++;
}
return (0);
}