#include<iostream>
using namespace std ;
int main()
{
    int a;
    cout<<"enter the value of a is : "<<endl;
    cin>>a;

     int b;
    cout<<"enter the value of b is : "<<endl;
    cin>>b;
    
    char op;
    cout<<" enter the operation : "<<endl;
    cin>>op;

    switch (op)
    {
    case '+':cout<<(a+b)<<endl;
             break;
    
     case '-':cout<<(a-b)<<endl;
             break;
     case '*':cout<<(a*b)<<endl;
             break;
     case '/':cout<<(a/b)<<endl;
             break;
    
    default:cout<<"mathematical error"<<endl;
        
    }

}
