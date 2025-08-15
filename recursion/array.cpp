#include<iostream>
using namespace std ;
int sum(int a[],int size,int index=0)
{
    if(index==size)
    {
        return ;
    }   
    else
    {
        cout<<index<<" ";
        return sum(a,size,index+1);
    }
}

int main()
{
  int a[]={5,2,5,6,7};
  int size=5;
  sum(a,5,0);
}
