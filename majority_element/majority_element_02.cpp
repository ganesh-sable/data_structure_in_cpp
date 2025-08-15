#include<iostream>
#include<vector>
using namespace std ;
int majorityElement(vector<int>nums,int n)
{
    //sort
    //sort(nums.begin(),nums.end());

    //frequency
    int freq=1;
    int ans=nums[0];
    for(int i=1;i<n;i++)
    {
        if(nums[i]==nums[i-1])
        {
            freq++;
        }
        else
        {
            freq=1;
            ans=nums[i];
        }
        if(freq>n/2)
        {
           return ans;
        }
    }
    return ans;
}
int main()
{
   vector<int>nums={1,1,2,2,3,3,3};
   int n=nums.size();

   int ans=majorityElement(nums,n);
   cout<<ans;
}
