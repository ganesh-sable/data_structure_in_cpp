#include<iostream>
using namespace std ;
int search(int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
    if(arr[i]==8)
    {
        return i;
    }
  }
  return -1;
}
int main()
{
    int arr[]={6,3,7,8,2,4};
    int size=6;
    search(arr,6);
    cout<<search(arr,size);
}