#include<iostream>
#include<vector>
using namespace std ;
int rotated(vector<int>vec,int n,int tar)
{
    int st=0, end=n-1;
    int mid;
    while(st<=end)
    {
        mid = st+(end-st)/2;
        cout<<"mid "<<mid<<endl;
        if(vec[mid]==tar)
        {
           return mid;
        }
        else if(vec[st]<=vec[mid])      //left  sorted
        {
            cout<<"1st: "<<vec[st]<<endl;
            if(vec[st]<=tar && tar<=vec[mid])
            {
                end = mid-1;
                
            }
            else
            {
                st = mid+1;
                
            }
        }
        else //right sorted
        {
            if(vec[mid]<=tar && tar<=vec[end])
            {
                st=mid+1;
              
            }
            else
            {
                end = mid-1;
            }
        }
    }
    return -1;
}
int main()
{
  vector<int>vec={4,5,6,7,0,1,2};
  int n=vec.size();
  int tar=6;
  int result = rotated(vec,n,tar);
  cout<<"result is: "<<result;
}
