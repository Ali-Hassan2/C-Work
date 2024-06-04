//program to print  positive  negatives and increment them
#include<iostream>

using namespace std;
int main()
{
    int numbers;
    int posv=0,negv=0,zerov=0;
    cout<<"Enter the numbers (0 to stop) : ";
    while(true){
    cin>>numbers;
    if(numbers>0)
    posv++;
    else if (numbers<0)
    negv++;
    else if (numbers==0)
    zerov++;

    if(numbers==0)
    break;
    }

    cout<<"Positive counts = "<<posv<<endl;
    cout<<"Negative counts = "<<negv<<endl;
    cout<<"Zero counts = "<<zerov<<endl;
    return 0;
}