#include<iostream>
using namespace std;
int main()
{
  int size=4;
  
  int arr[]={2,15,11,7};
  int target;
  cout<<"enter target: ";
  cin>>target;

  for(int i=0;i<size;i++)
  {
   for(int j=1;j<size;j++)
    {
      
      if(arr[i]+arr[j]==target)
      {
        cout<<i<<" "<<j;
        return arr[i,j];
      }
    }
  
  }
   
}

