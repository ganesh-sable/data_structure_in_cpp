#include<iostream>
#include<math.h>
using namespace std ;
int main()
{   
    double x;
    cout<<"enter x: ";
    cin>>x;

    int n; // n is power;
    cout<<"enter n: ";
    cin>>n;

    long binform= n;
    double ans=1;

    while(binform > 0)
    {
        if(binform % 2 == 1)
        {
            ans *= x;
        }
        x *=x;
        binform /=2;   
    }
    cout<<"ans is : "<<ans;
}
