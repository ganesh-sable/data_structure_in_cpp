//kadane's Algorithim

#include<iostream>
#include<climits>
using namespace std ;
int main()
{
    int n=7;
    int a[]={3,-4,5,4,-1,7,-8};
    
    int maxsum=INT_MIN;
    for(int i;i<n;i++)
    {
        int cs=cs+a[i];
        maxsum=max(cs,maxsum);
        if(cs<0)
        {
            cs=0;
        }
    }
  cout<<"maximum sum is: "<<maxsum;
}
