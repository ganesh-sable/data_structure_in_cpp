#include<iostream>
using namespace std ;
int main()
{
    char ch='c';
    switch(ch)
    {
        case 1:cout<<"first"<<endl;
                break;
        case 'a':cout<<"second"<<endl;
                break;
        case 'b':cout<<"third"<<endl;
                break;
        default:cout<<"out of block"<<endl;
                
    }
    cout<<endl;
    
}