#include<iostream>
using namespace std ;
void pass(int *ptr)   //pass by reference by pointers
{
    *ptr=20;
}
int main()
{
  int a=10;
  pass(&a);
  cout<<"the value is: "<<a;
}
