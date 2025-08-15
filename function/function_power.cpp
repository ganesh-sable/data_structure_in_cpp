#include<iostream>
using namespace std ;
int power(int num,int pow)
{
  int ans=1;
  for(int i=1;i<=pow;i++)
   {
    ans=ans*num;
   }
   return ans;

}
int main()
{
    int num,pow;
   cout<<"enter the number and power: ";
   cin>>num>>pow;
   
   int answer = power(num,pow);
   cout<<"the answer is: "<<answer<<endl;
    
}
