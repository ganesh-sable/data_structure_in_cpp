#include<iostream>
using namespace std ;
int main()
{
    int isprime=1;
    int n;
    cin>>n;
    int i=2;
    while(i<n)
    {
     if(n%i==0)
    {
        isprime=0;
        cout<<"the number "<< n <<" is not prime"<<endl;
        break;
    }
    if(isprime)
    {
        cout<<"the number "<< n <<" is prime"<<endl;
        break;
    }
    i++;
    
   }

}
