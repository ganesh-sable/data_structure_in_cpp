#include<iostream>
using namespace std ;
int fib(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    else{
        return fib(n-1)+fib(n-1);
    }
}

int main()
{
   int n;
   cout<<"enter n: ";
   cin>>n;
   int result=fib(n);
   cout<<"result is: "<<result;
}
