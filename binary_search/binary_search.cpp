#include<iostream>
#include<vector>
using namespace std ;
int binarySearch(vector<int>vec,int target)
{
    int n=vec.size();
    int st=0;
    int end=n-1;
    int ans;
    while(st<=end)
    {
      int mid= st + (end - st)/2;
      if(vec[mid]<target)
      {
        st=mid+1;
      }
      else if(vec[mid]>target)
      {
        end=mid-1;
      }
      else{
        return mid;
      }
    }
   return -1;
}

int main()
{
   vector<int>vec={-1,0,3,4,5,9,12};//for odd;
   int target;
   cout<<"enter target: ";
   cin>>target;

   int ans=binarySearch(vec,target);
   cout<<"ans is: "<<ans;


}
