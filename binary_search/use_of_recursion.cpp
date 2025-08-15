#include<iostream>
#include<vector>
using namespace std ;
int binarySearch(vector<int>vec,int target,int start,int end)
{
    if(start<=end)
    {
        int mid = start + (end-start)/2;
        if(vec[mid]<target)
        {
            return binarySearch(vec,target,mid+1,end);
        }
        else if(vec[mid]>target)
        {
            return binarySearch(vec,target,start,mid-1);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
   vector<int>vec={-1,0,3,4,5,9};
   int n=vec.size();
   int start=0;
   int end=n-1;
   int target;
   cout<<"enter target: ";
   cin>>target;

   int ans=binarySearch(vec,target,start,end);
   cout<<"ans is: "<<ans;
}
