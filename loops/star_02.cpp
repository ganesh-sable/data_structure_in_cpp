#include<iostream>
using namespace std ;
int main()
{
    int n=4;
   // cin>>n;
     int i,j;
    for( i=1;i<=n;i++)
    {
        for(int space=0;space<=n-i;space++)
        {
            cout<<" ";
        }
    

        for( j=n;j>=i;j--)
         {
             cout<<"* ";
         }
         cout<<endl;
    }
}
