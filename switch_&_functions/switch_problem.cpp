#include<iostream>
using namespace std ;
int main()
{
   int money;
   cout<<"enter the money: ";
   cin>>money;
    switch(money)
    {
        case 100: cout<<(1330/100)<<endl;
                break;
        case 50 : cout<<(1330/50)<<endl;
                break;
        case 20: cout<<(1330/20)<<endl;
                break;
        case 1: cout<<(1330/1)<<endl;
                break;        
        default: cout<<"out of block"<<endl;
                
    }
    
}
