//Brute force Approach

#include<iostream>
#include<climits>
using namespace std ;
int main()
{
    int n=6;
    int arr[]={1,2,3,4,5,6};

    int maxSum=INT_MIN;//cs=current sum;
    for(int st=0;st<n;st++)
    {
        int cs =0;

       for(int end=st;end<n;end++)
       {
        cs = cs + arr[end];
        maxSum =max(cs,maxSum);
       }
    }
  cout<<"max subarray sum= "<<maxSum;
}
