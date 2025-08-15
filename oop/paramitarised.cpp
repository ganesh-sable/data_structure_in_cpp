#include<iostream>
using namespace std;
class Area
{
    public:
    int length;
    int hight;
    Area (int l,int h)
    {
        length = l;
        hight = h;
    }
    void show()
    {
        int area = hight * length;
        cout<<"the area of wall is: "<<area;
    }
};

int main()
{
    int l;
    cout<<"enter lenght: ";
    cin>>l;

    int h;
    cout<<"enter hight: ";
    cin>>h;

    Area ob(l,h);
    ob. show();
    return 0;
}
