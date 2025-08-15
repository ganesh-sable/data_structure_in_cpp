#include<iostream>
using namespace std;
class Area
{
    public:
    float p;
    float r;

    Area(float a,float b)
    {
        p=a;
        r=b;
    }

    Area(Area &circle)
    {
        p=circle. p;
        r=circle. r;
    }
    
    void show()
    {
        float area = p * r * r;
        cout<<"the area of circle is: "<<area<<endl;
    }
};
int main()
{
    
    float a=3.14;

    float b;
    cout<<"enter radius: ";
    cin>>b;

    Area ob(a,b);
    Area obj=ob;
    ob. show();
    obj. show();
    return 0;
}