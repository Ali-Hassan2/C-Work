#include<iostream>
using namespace std;
int main(){
    int lcm,feet,inches,yards;
    cout<<"Enter in length cm :: ";
    cin>>lcm;
    yards=lcm/91.44;
    lcm=lcm%91;
    feet=lcm/30.48;
    lcm=lcm%30;
    inches=lcm/2.54;
    lcm=lcm%2;
    cout<<"The length is :: "<<yards<<"  "<<feet<<"  "<<inches<<endl;
    return 0;
}