// Write a C++ program to which reads an given integer n and prints a twin prime which has 
// the maximum size among twin primes less than or equals to n. Go to the editor
// According to wikipedia "A twin prime is a prime number that is either 2 less or 2 more than another prime number"
//  for example, either member of the twin prime pair (41, 43). In other words, a twin prime is a prime that has
//   a prime gap of two".......????????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
using namespace std;
int main()
{


     const int numprime = 10005;
     bool prime[numprime];
     for(int i = 2 ; i != numprime ; ++i)
     {
        prime[i] = true;
     }
     for(int i = 2 ; i != int (sqrt(numprime)) ; ++i)
     {
        if(prime[i])
        {
            for(int j = 2 ; i * j < numprime ; ++j)
            {
                prime[i*j] = false;
            }
        }
     }
     int n ;
      cout<<"Enter the intger : "<<endl;
      cin>>n;
      cout<<"Twin pairs is : "<<endl;
      for(int i = n ; i - 2 >= 0 ; --i)
      {
        if(prime[i] && prime [i-2]) 
        {
            cout<<i-2<<" "<<i<<endl;
            break;
        }
      }


getch();
return (0);
}