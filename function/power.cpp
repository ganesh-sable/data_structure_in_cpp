#include<iostream>
using namespace std ;
int main()
{
   int num,pow;
   cout<<"enter the number and power: ";
   cin>>num>>pow;
   
   int ans=1;
   for(int i=1;i<=pow;i++)
   {
    ans=ans*num;
   }
   cout<<"the answer is: "<<ans<<endl;

}
