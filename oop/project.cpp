#include<iostream>
#include<string>
using namespace std;

class project
{
    public:
    int id;
    string name;
    string discription;

   void enter()
    {
        cout<<"enter id: ";
        cin>>id;
        
        cout<<"enter name: ";
        cin>>name;

        cout<<"enter discription: ";
        cin>>discription;
    }

    void show()
    {
        cout<<"id is: "<<id<<endl;
        cout<<"enter name: "<<name<<endl;
        cout<<"enter discription: "<<discription<<endl; 
    }
};
int main()
{
    int a;
    cout<<"1. add information"<<endl;
    cout<<"2. show above information"<<endl;

    cout<<"enter key upto(1-2): ";
    cin>>a;
    project ob;
    for(int i=0;i<a;i++)
    {
    cout<<"1. add information"<<endl;
    cout<<"2. show above information"<<endl;
   
    switch (a)
    {
    case 1:
        ob.enter();
        break;
    
    
    default:
        cout<<"enter valid key"<<endl;
        break;
    }
}
    return 0;
}