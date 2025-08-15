#include<iostream>
#include<vector>
using namespace std ;
vector<int>se(vector<int>nums,int target)
{
    vector<int>ans;
    int n= nums.size();
    for(int i=0;i<n;i++)
    {
        if(nums[i]==target)
        {
            ans.push_back(i);
            return ans;
        }
    }
    return ans;

}
int main()
{
    vector<int>nums={1,2,5,7,8};
    int target;
    cout<<"enter target: ";
    cin>>target;

    vector<int>ans=se(nums,target);
    cout<<ans[0];
    return 0;

}
