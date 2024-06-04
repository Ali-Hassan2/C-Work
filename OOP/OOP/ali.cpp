#include<iostream>
#include<string>
using namespace std;
class Inventory
{
    private:
   int Item_ID;
   int Expiration_Date;
   string Item_Name;
   int Item_Price;
   string Item_Quantity;
    public:
   void setID(int id)
   {
     if(Item_ID > 0)
     {
        Item_ID = id;
     }
   }
   int getID()
   {
    return Item_ID;
   }
      void setExpiry(int ex)
   {
    if(ex > 0)
    {
    Expiration_Date = ex;
    }
   }
   int getExpiry()
   {
    return Expiration_Date;
   }
void setName(string name)
{
    Item_Name = name;
}
string getName()
{
    return Item_Name;
}
void setPrice(int pr)
{
   Item_Price = pr;
}
int getprice()
{
    return Item_Price;
}
void setquantity(string qu)
{
   Item_Quantity = qu;
}
string getquantity()
{
    return Item_Quantity;
}

};
int main()
{

Inventory i;
i.setID(123);
i.setName("Ali Hassan");
i.setExpiry(26032023);
i.setPrice(45000);
i.setquantity("5kg");
cout<<"The ID of the Item is : "<<i.getID();
cout<<endl;
cout<<"The Name of the Item is : "<<i.getName();
cout<<endl;
cout<<"The Expiry of the Item is : "<<i.getExpiry();
cout<<endl;
cout<<"The Price of the Item is : "<<i.getprice();
cout<<endl;
cout<<"The Quantity of the Item is : "<<i.getquantity();
cout<<endl;
cout<<endl;


    return 0;
}