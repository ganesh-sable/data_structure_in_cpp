#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=n;
    while(i>=1)
    {
        int j=n;
        while(j>=1)
        {
            cout<< j ;
            j--;
        }
        cout<< endl;
        i--;
    }
}