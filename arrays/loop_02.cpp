#include<iostream>
using namespace std ;
int main()
{
    int size;
    cout<<"enter the size o aaray: ";
    cin>>size;
    int marks[size];
    
    cout<<"enter the marks is: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>marks[i];
    }
     
    cout<<"print the marks : "<<endl;
     for(int i=0;i<size;i++)
    {
        cout<<marks[i]<<endl;
    }
   return 0;
}
