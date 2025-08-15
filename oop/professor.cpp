#include<iostream>
#include<string>
using namespace std;
 class professor
 {
    public:
    int id;
    string name;

    professor(int i,string n)
    {
      id=i;
      name=n;
    }
 
    void show()
    {
        cout<<"the id of professor is: "<<id<<endl;
        cout<<"the name of professor is: "<<name;
    }
 };

 int main()
 {
    int i;
    cout<<"enter id: ";
    cin>>i;
    
    string n;
    cout<<"enter name: ";
    cin>>n;
    
    professor ob(i,n);
    ob. show();
    return 0;
 }