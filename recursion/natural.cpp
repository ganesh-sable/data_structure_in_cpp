#include<iostream>
using namespace std ;
int  natural(int n)
{
    if(n==1)
    {
        cout<<n<<" ";
        return 1;
    }
    else
    {
        cout<<n<<" ";
        return natural(n-1);
    }
}

int main()
{
    int n;
    cin>>n;
    natural(n);
  
}
