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

        cout<<"---information added successfully---"<<endl;
        cout<<endl;
    }

    void show()
    {
        cout<<"id is: "<<id<<endl;
        cout<<"enter name: "<<name<<endl;
        cout<<"enter discription: "<<discription<<endl; 
        cout<<endl;
    }
};
int main()
{
    project ob;
    int a;
    while(true)
    {
    cout<<"1. add information"<<endl;
    cout<<"2. show above information"<<endl;
    cout<<"3. exit "<<endl;
    cout<<"enter key upto(1-3): ";
    cin>>a;
   
    if(a==1)
    {
        ob.enter();
    }
    else if(a==2)
    {
        ob.show();
    }
    else
    {
        cout<<"exit the loop";
        break;
    }
}
    return 0;
}