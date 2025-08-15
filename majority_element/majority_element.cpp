//brute force
#include<iostream>
#include<vector>
using namespace std ;
int majorityElement(vector<int>num ,int n)
{

   for(int value: num)
   {
    int fre=0;
    for(int ele: num)
    {
       if(ele == value)
       {
        fre++;
       }
    }
       if(fre>n/2)
       {
       return value;
       }
   }
   return -1;
}
   

int main()
{  
    vector<int>num={1,5,3,5,6,6,6};
    int n=num.size();

    int ans=majorityElement(num,n);
    cout<<"majority element is: "<<ans;
}
