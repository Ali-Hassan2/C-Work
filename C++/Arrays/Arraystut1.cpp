#include<iostream>
using namespace std;

int main()
{
    // here [4]"4"is optional you may not write this as your own choice
// int marks[] = { 25, 23, 21, 21};
//so here i want to show the math marks
int mathmarks[4];
mathmarks[0]=343;
mathmarks[1]=443;
mathmarks[2]=563;
mathmarks[3]=663;

cout<<"These are the math marks : "<<endl;
cout<<mathmarks[0]<<endl;
cout<<mathmarks[1]<<endl;
// you can also change the value and compiler will show you the only current value
mathmarks[2]=6666; 
cout<<mathmarks[2]<<endl; 
cout<<mathmarks[3]<<endl;
// cout<<"These are the marks : "<<endl;
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;
// so here i am going to print marks by for loop
for (int i = 0; i < 4; i++)
{
    cout<<"The marks "<<i<<"="<<mathmarks[i]<<endl;
}


return (0);
}