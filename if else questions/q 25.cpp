// C++  Program to count the total number of notes in a given amount. Using if-else....???
#include<iostream>
using namespace std;

int main()
{
int amount , numofnotes;
int numofvalues[7] = {200,567,345,235,666};
cout<<"Enter the amount : "<<endl;
cin>>amount;
for(int i = 0 ; i < 7 ; i++)
{
    if(amount>=numofvalues[i])
    {
        numofnotes = amount / numofvalues[i];
        cout<<numofnotes<<" Notes of "<<numofvalues[i] <<endl;
        amount = amount % numofvalues[i];

    }
}
// tery naal pyar wy
return (0);
}