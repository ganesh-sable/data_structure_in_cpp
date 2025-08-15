#include<iostream>
#include<string>
using namespace std;
class student
{
  public:
  int roll_no;
  string name;

  student()
  {
    cout<<"enter roll number: ";
    cin>>roll_no;

    cout<<"enter student name: ";
    cin>>name;
  }
  ~student()
  {
    cout<<"enter roll number: ";
    cout<<"enter student name: ";
  }

  void show()
  {
    cout<<"the roll number is: "<<roll_no<<endl;
    cout<<"the name of student is: "<<name;
  }
};
int main()
{
    student ob;
    ob. show();
    return 0;
}