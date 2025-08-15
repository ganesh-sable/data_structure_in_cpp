#include<iostream>
#include<vector>
using namespace std ;
int main()
{
  vector<int>vec={1,2,5,3,2,1,3};
  int ans=0;
  for(int value: vec)
  {
    ans=(ans^value);
  }
  cout<<ans;
}
