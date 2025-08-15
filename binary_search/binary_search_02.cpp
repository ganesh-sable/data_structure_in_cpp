#include<iostream>
#include<vector>
using namespace std ;
int binarySearch(vector<int>vec,int target)
{
    int n=vec.size();
    int start=0; 
    int end=n-1;
    while(start<=end)
    {
       int mid = start + (end-start)/2; 
       if(vec[mid]<target)
       {
        start=mid+1;
       }
       else if(vec[mid]>target)
       {
        end=mid-1;
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
    vector<int>vec={2,3,5,6,8,4};
    int target;
    cout<<"enter target: ";
    cin>>target;

    cout<<binarySearch(vec,target);
  
}
