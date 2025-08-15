#include<iostream>
using namespace std ;
int main()
{
    int a;
    cout<<&a<<endl; 

    int b=10;
    int *ptr=&b;
    cout<<"value of ptr: "<<ptr<<endl;
    cout<<"adress of b: "<<&b<<endl;
    cout<<"address ptr: "<<&ptr<<endl;

    float price=100.25;
    float *point=&price;
    cout<<"value of point:"<<point<<endl;
    cout<<"address point: "<<&point;
}
