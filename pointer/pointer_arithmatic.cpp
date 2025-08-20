#include<iostream>
using namespace std ;
int main()
{
    int a=10;
    int *ptr=&a;
    //increment , decreement
    cout<<a<<endl;
    a++;
    cout<<a<<endl;
    cout<< ptr<<endl;
    ptr++;
    cout<< ptr<<endl;

    cout<<ptr<<endl;
    ptr--;
    cout<<ptr<<endl;

    //adding , substraction
    cout<<ptr<<endl;
    ptr= ptr + 1;   //1 byte ==1 bit
    cout<<ptr<<endl;
    ptr=ptr-2;
    cout<<ptr<<endl;
}
