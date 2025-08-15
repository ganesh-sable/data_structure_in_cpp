#include<iostream>
using namespace std ;
void pass(int &b)  // pass by reference using alias
{
   b=20;  //& is the symbol of alias
}
int main()
{
    int a=10;
    pass(a);
    cout<<"the value is: "<<a<<endl;

}
