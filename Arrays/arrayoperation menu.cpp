#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;

// int arr[];
const int MAX_SIZE = 100;
void instl(int arr[] , int n);
void insts(int arr[] , int n);
void search(int arr[] , int n);
void dell(int arr[] , int n);
void dells(int arr[] , int n);


int main()
{
    int n = 0;
int arr[MAX_SIZE];

       int choice;
    // cout<<"\t\t\t --------------------------------------\n"<<endl;
    // cout<<"\t\t\t|                                      |\n"<<endl;
    // cout<<"\t\t\t|        OPERATIONS ON ARRAYS          |\n"<<endl;
    // cout<<"\t\t\t|                                      |\n"<<endl;
    // cout<<"\t\t\t --------------------------------------\n"<<endl;
    cout<<"\t\t\t\t------------WELCOME---------------\n\n"<<endl;
    cout<<"\t\t\t-Press 1. For inserting an element in the array from Start : \n"<<endl;
    cout<<"\t\t\t-Press 2. For inserting an element in the array from Last : \n"<<endl;
    cout<<"\t\t\t-Press 3. For searching the element in the array : \n"<<endl;
    cout<<"\t\t\t-Press 4. For Deleting an element in the array from start : \n"<<endl;
    cout<<"\t\t\t-Press 5. For Deleting an element in the array from last : \n"<<endl;
    cout<<"\t\t\t-Press 6. For Exit...!!\n"<<endl;
    cout<<"\t\t\t---------------------------------------------------------\n"<<endl;
    cout<<"\t\t\tEnter the choice : ";
    cin>>choice;

    switch(choice)
    {
        case 1:
        {
            system ("cls");
            insts(arr , n);
break;
        }
        case 2:
        {
            system ("cls");
            instl(arr , n);
            break;
        }
        case 3:
        {
            system ("cls");
            search(arr , n);
            break;
        }
        case 4:
        {
            system ("cls");
            dell(arr , n);
            break;
        }
        case 5:
        {
            system ("cls");
           dells(arr , n);
            break;
        }
        case 6:
    {
        cout<<"THANK YPU FOR VISITING US !!!!"<<endl;
        exit(0);
    }
    default:
    {
        cout<<"Please Enter the valid choice."<<endl; 
    }
        
    
        } 


     


getch();
return (0);
}

void instl(int arr[] , int n)
{
    // int size ;
    // cout<<"Enter the size of the array : "<<endl;
    // cin>>size;
    // int arr[size];
    // int n = 0 ;
    // int s = -1 ;
    // for (int i = 0 ; i < size ; i++)
    // {
    //     cout<<"Enter the ( "<<i+1<<" ) number : "<<endl;
    //     cin>>arr[i];

    // }
    // cout<<"For inserting element from the start in the array is : "<<endl;
    // cin>>n;
    // int temp = s;
    // for (int i = s - 1 ; i >= 0 ; i--)
    // {
    //     arr[temp] = arr[i];
    //     temp--;

    // }
    // int control = 0 ;
    // bool flag = true ;
    // arr[0] = n ;
    // int x;
    // for (int i = 0 ; i <= s ; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
system("CLS");
//   int n ; 
  int num2;
  cout<<"Enter the size of the array : "<<endl;
  cin>>n;
   arr[n];
  for (int i = 0 ; i < n ; i++)
  {
    cout<<"Enter the ("<<i+1<<" ) number : "<<endl;
    cin>>arr[i];

  }
  cout<<"\n============================================\n"<<endl;
  cout<<"Enter the new value which you want to insert : "<<endl;
  cout<<"==============================================\n"<<endl;
  cin>>num2;
  arr[n] = num2;
  n++;

  cout<<"The updated new array is : "<<endl;
  for (int i = 0 ; i < n ; i++)
  {
    cout<<arr[i]<<" ";
  }







}
void insts(int arr[] , int n)
{
    // int n;
    cout<<"\n----------------------------\n"<<endl;
    cout<<"Enter the Size of the array : "<<endl;
    cin>>n;

// int arr[n];
int val;
// int n = sizeof(arr) / sizeof(arr[0]);
// cout<<"\nThe Original array is : "<<endl;
for(int i=0;i<n;i++)
{
    cout<<"\n---------------------------------\n"<<endl;
    cout<<"\nEnter the ( "<<i+1<<" ) number : "<<endl;
    cin>>arr[i];
    // cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"\n-------------------------------------\n"<<endl;
cout<<"Enter the Value did you want to insert at the start : "<<endl;
cin>>val;
int new_arr[n+1];
new_arr[0] = val;
for (int i=0;i<n;i++)
{
    new_arr[i+1] = arr[i];
}
for(int i = 0;i<n+1;i++)
{
    arr[i]=new_arr[i];
}
cout<<"\n--------------------------------------------\n"<<endl;
cout<<"The new array is : \n"<<endl;
cout<<"\n----------------------------------------------"<<endl;
for(int i = 0 ; i < n+1 ; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}





void search(int arr[] , int n)
{
    // int n;
    cout<<"\n----------------------------\n"<<endl;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    // int arr[n];
    for (int i = 0 ; i < n ; i++)
    {
        cout<<"Enter the ( "<<i+1<<" ) number : "<<endl;
        cin>>arr[i];
    }
    int val , cnt = 0;
    cout<<"\nEnter the number which you want to search : "<<endl;
    cin>>val;

    for (int i = 0 ; i <  n ; i++ )
    {
        if(val == arr[i])
        {
           cnt = 1;
            cout<<"Present.";
            break;
        }
    }
if(cnt != 1)
{
    cout<<"Not Present."<<endl;
}

}
void dell(int arr[] , int n)
{
    system("cls");

cout<<"Enter the size of the array : "<<endl;
cin>>n;

cout<<"=======================================\n"<<endl;
// cout<<"The Original array is : "<<endl;
for(int i = 0 ; i < n ; i++)
{
    cout<<"\nEnter the ( "<<i+1<<" ) number : "<<endl;
    cin>>arr[i];
}

for (int i = 0 ; i < n - 1 ; i++)
{
    arr[i] = arr[i+1];

}
n--;
cout<<"\n----------------------------"<<endl;
cout<<"\nThe Updated Array is : "<<endl;
for (int i = 0 ; i < n ; i++)
{
    cout<<"\n========================"<<endl;
    cout<<arr[i]<<" ";
    cout<<"\n========================"<<endl;
}
}
void dells(int arr[] , int n)
{
system("CLS");

cout<<"Enter the size of the array : "<<endl;
cin>>n;
cout<<"\n============================"<<endl;
for (int i = 0 ; i < n ; i++)
{
    cout<<"Enter the ( "<<i+1<<" ) number : "<<endl;
    cin>>arr[i];
}
cout<<endl;
n--;

cout<<"\n=========================="<<endl;
cout<<"The array after the deleting the last element is : "<<endl;
for(int i = 0 ; i < n ; i++)
{
    cout<<"\n====================="<<endl;
    cout<<arr[i]<<" ";
}


}