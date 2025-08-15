#include<iostream>
#include<vector>
#include<climits>
using namespace std ;
int main()
{
  int mp=0;  //mp=max profit;

  vector<int>prise={7,1,5,3,6,4};

  int n=prise.size();

  int BB=prise[0];// BB=best buy;

 

  for(int i=1;i<n;i++)
  {
    if(prise[i] > BB)
    {
        mp= max(mp,prise[i]-BB);
       
    }
    BB = min(BB,prise[i]);
  }
cout<<"profit is:+ "<<mp<<endl;
cout<<"best buy is: "<<BB;
}
