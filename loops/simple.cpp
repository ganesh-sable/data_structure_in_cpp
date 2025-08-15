#include<iostream>
using namespace std ;
int main()
{
   cout<<"size of int is: "<<sizeof(float)<<endl;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
      char ch='A'+i-1;
      cout<<ch<<endl;
      cout<<x++;
    }
}
