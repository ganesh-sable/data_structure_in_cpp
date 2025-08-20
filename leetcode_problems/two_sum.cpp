#include<iostream>
#include<vector>
using namespace std ;
int sum(vector<int>&nums,int target)
{
    int n=nums.size();
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        if(nums[i]+nums[j]==target)
        {
            return {i,j};
        }
        i++;
        j--
    }
}
int main()
{

}
