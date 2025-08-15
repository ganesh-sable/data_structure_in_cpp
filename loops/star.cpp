#include<iostream>
using namespace std ;
int main()
{
    int num;
    cin>>num;

    int i,j,k;//star=j , space=k;
    for ( i = 1; i <=num; i++)
    {
     for(k=1;k<=num-i;k++)
      {
        cout<<" ";
      }
      for(j=1;j<=i;j++)
      {
        cout<<"* ";
      }
     cout<<endl;
    }
}
