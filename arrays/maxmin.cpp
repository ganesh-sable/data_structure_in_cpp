#include<iostream>
#include<climits>
using namespace std ;

int min(int arr[],int size)
{
    int  small=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
   
}
int main()
{
   int size;
   cout<<"enter the size : "<<endl;
   cin>>size;

   int arr[size];
   cout<<"enter the array element: "<<endl;

   for(int i=0;i<size;i++)
   {
      cin>>arr[i];
   }
    cout<<"the smallest value is: "<<min(arr,size)<<endl;
}