#include<iostream>
#include<vector>
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

        cout<<"===information added successfully==="<<endl;
        cout<<endl;
    }

    void show()
    {
        int inputId;
        cout<<"enter id:";
        cin>>inputId;
        if(inputId == this->id)
        {
            cout<<"id is: "<<id<<endl;
            cout<<"enter name: "<<name<<endl;
            cout<<"enter discription: "<<discription<<endl; 
            cout<<endl;
        }
    }
};
int main()
{
   int id;
    vector<project>vec;
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
        project ob;
        ob.enter();
        vec.push_back(ob);
    }
    else if(a==2)
    {
        project ob;
        for(int i=0;i<vec.size();i++)
        {

            vec[i].show();
        }
        
    }
    else
    {
        cout<<"===exit the loop===";
        break;
    }
}
    return 0;
}