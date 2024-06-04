#include<iostream>


using namespace std;

void findthepairs(int nums[], int n, int target)
{
   for(int i= 0; i < n-1 ; i++ )
   {
      // incremented

      for(int j= i + 1; j < n ; j++) 
      {
         if(nums[i] + nums[j] == target)
         {
            cout<<"The sum exits.[ "<<nums[i]<<" , "<<nums[j]<<"]"<<endl;
         }
      }
   }
}

int main()
{
   int nums[] = {1,2,3,4,5,6,7,8,9};
   int tar;

   cout<<"Enter the target : "<<endl;
   cin>>tar;
   int n;
   n=sizeof(nums)/(nums[0]);
   findthepairs(nums, n,tar);


   return 0;
}