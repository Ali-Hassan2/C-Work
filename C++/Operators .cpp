 #include <iostream>

 using namespace std;
 int main(){
    //These are simply Airthmetic operators.
 int a=4,b=5;
 cout<<"The value of a+b is :"<<a+b<<endl;
 cout<<"The value of a-b is :"<<a-b<<endl;
 cout<<"The value of a*b is :"<<a*b<<endl;
 cout<<"The value of a/b is :"<<a/b<<endl;
 cout<<"The value of a%b is :"<<a%b<<endl;
 cout<<"The value of a++ is :"<<a++<<endl;
 cout<<"The value of a-- is :"<<a--<<endl;
 cout<<"The value of ++a is :"<<++a<<endl;
 cout<<"The value of --a is :"<<--a<<endl;
 // assignment operators are use to assign values to variables.
 // int a=3,b=5;
 //char d = 'd';

//  Comparision operators(to compare the values.)
cout<<"Here are the following comparision operators"<<endl;
cout<<"The value of a==b is :"<<(a==b)<<endl;
// This is not equal to symbol!=
// So this is the rule of C++ that the comparision operatrs are in Paranthesis()
cout<<"The value of a!=b is :"<<(a!=b)<<endl;
cout<<"The value of a>=b is :"<<(a>=b)<<endl;
cout<<"The value of a<=b is :"<<(a<=b)<<endl;
cout<<"The value of a>b is :"<<(a>b)<<endl;
cout<<"The value of a<b is :"<<(a<b)<<endl;

// These are logical operators:
cout<<"The value of a==b is :"<<((a==b)&&(a<b))<<endl;
// This is the AND operation.
cout<<"The value of ((a==b)||(a<b)) is :"<<((a=b)||(a<b))<<endl; 
//This is the OR operation weather the first one is true or second is true.
cout<<"The value of (!(a==b)) is :"<<(!(a==b))<<endl;
//This is the NOT operation which always answers in opposit way if output is false then it will show it True.


 }