#include<iostream>
using namespace std ;
int function(int z)
{
    int n;
    if(z==n)
    {
        cout<<z<<" ";
        return z;
    }
    else{
        cout<<z<<" ";
        return function(z+1);
    }
}

int main()
{
  int z;
  cin>>z;
  int n;
  cin>>n;
  function(z);
   
}
