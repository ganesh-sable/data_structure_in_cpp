#include<iostream>
using namespace std ;
bool prime(int num)
{
    
    int i;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return false;
            
        }
       
    } 
    return true;
}
int main()
{
    int n;
    cin>>n;
    // bool isPrime = prime(n);
    // cout<< "IsPrime:"<<isPrime<<endl;
    if(prime(n))
    {
        cout<<"the number is  prime"<<endl;
    }
    else
    {
        cout<<"the number is not prime"<<endl;
    }
}
