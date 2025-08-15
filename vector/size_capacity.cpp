#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    vector<int>vec;
    vec.push_back(5);
    vec.push_back(4);
    vec.push_back(6);
    cout<<vec.size()<<endl;//3;
    cout<<vec.capacity();//4;
}
