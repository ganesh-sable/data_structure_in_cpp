#include<iostream>
#include<math.h>
using namespace std ;
int main()
{
  
    int n;
    cout<<"enter n: ";
    cin>>n;
    int i;
    int ans=0;
    while(n!=0)
    {
        int digit=n%10;
         ans=ans*10+digit;
        n=n/10;
        i++;
    }
    cout<<"the ans is: "<<ans;
}
