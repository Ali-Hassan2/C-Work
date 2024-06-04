#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int price;

  for (int price = 0; price < 5; price++)
  {
    cout << "Enter purchase " << price + 1 << ": ";
    cin >> price;
  }

  cout << endl;
  cout << "Purchase history: " << endl;

  for (int price = 0; price < 5; price++)
  {
    if (price >= 20000)
    {
      cout << "Purchase " <<price << ", Discount: 20%, Payable: " <<(price * 80) / 100  << endl;
    }
    else if (price >= 10000)
    {
      cout << "Purchase " <<price << ", Discount: 10%, Payable: " <<(price * 90) / 100  << endl;
    }
    else if (price >= 5000)
    {
      cout << "Purchase " <<price << ", Discount: 5%, Payable: " <<(price * 95) / 100  << endl;
    }
    else
    {
      cout << "Purchase " <<price << ", Discount: 0%, Payable: " << price << " Note: You have a change to win a ticket for Dubai" << endl;
    }
}
getch();
}
