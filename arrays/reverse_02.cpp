#include<iostream>
using namespace std;
void swap(int a[],int size)
{
  int start=0, end=size-1;
  while (start<end)
  {
    swap(a[start],a[end]);
    start++;
    end--;
  }
}

int main()
{
  int a[]={1,2,3,4,5};
  int size=5;

  swap(a,5);
  for(int i=0;i<5;i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

