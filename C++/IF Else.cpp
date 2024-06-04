//there are three control structures in c++
//Sequential Entry , Action 1  , Action 2, Action 3,by sequence
//selection structure if false or if true
//loop structur if statement true the go back and increment or decrement in and then run a continous prodess
//here i am discussing the logoic of if else statments
#include<iostream>
using namespace std;
int main(){
    //i will writing a program to discuss on age that of wich age people can buy cigrettes
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    //now i am applying if else structure
    // as if want to add one more else if in wich i will describe that if age<0 then it will execute first statment so i will use && operator.
    if((age<18)&&(age>0)){
        cout<<"You cannot buy cigrettes."<<endl;
    }
    else if (age==18){
        cout<<"It is very harmful to you at this stage."<<endl;
    }
    else if (age<1){
        cout<<"it will advise from company to avoid cigrettes."<<endl;
    }
    else{
        cout<<"You can buy cigrettes."<<endl;
    }
    return 0;
}