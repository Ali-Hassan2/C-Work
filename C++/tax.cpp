#include<iostream>
using namespace std;
int main()
{
    int ori,y,str,st,permark,sellingprice,final;
    cout<<"Enter original price."<<endl;
    cin>>ori;
    cout<<"Enter markupprice price."<<endl;
    cin>>y;
    cout<<"Enter sale tax rate  price."<<endl;
    cin>>str;
    permark=(ori/y)*100;
    sellingprice=ori+y;
    st=sellingprice*str/100;
    final=sellingprice+st;
    cout<<"The selling price is : "<<sellingprice<<endl;
    cout<<"The final price is : "<<final<<endl;
    return 0;

}