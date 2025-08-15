#include<iostream>
using namespace std;
void printcounting(int n)
{
    int i;
    for ( i = 1; i <= n; i++)
    {
       cout<<i<<endl; 
    }

}
int main()
{
  int num;
  cout<<"enter the number: "<<endl;
  cin>>num;
  printcounting(num);
  return 0;
}
