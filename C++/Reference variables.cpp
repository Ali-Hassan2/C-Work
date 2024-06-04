#include <iostream>
using namespace std;
int main()
{
//     ********************************************************
// *****************  ********************  ***************
// ******* ********* ********* ********** ******* ********** ******
// **************************************     ********************
// *******************(Reference Variables)*********** ***************
// *******************************************************************
// // As my name is Ehtisham. 
// // My parents call me Shamo.
// // My friends call me tami.
// As my name is one so difcfernent people call me by different name.\
// as Ehtisham------>Shamo------->Tami
// So as same the function of Reference variables.
   
  float y = 578777;
  // if i want that z is assign to the value of y so i can create a new reference variable z.
  // by this way.
  //  ;  by the end of endl , cout, int, float however any type of data type.
  float & z =y;
  cout<<y<<endl;
// As variable is one as my choice to make a copy.
 // as you can see that as i run only the y it will show me the variable value.
 //Now we can check that our system works or not by doing this float & z = y;
 cout<<z<<endl;

//  As it is my choice to write return 0 or not.

 return 0;
 
}
