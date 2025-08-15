#include<iostream>
using namespace std ;
void num(int n)
{
    int z;
    cout<<"enter z: ";
    cin>>z;
   // return ;//is used to stop function call itself
    num(n);//function call itself again and again;
}

int main()
{
    int n=5;
    num(n);

}
