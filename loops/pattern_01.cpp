#include<iostream>
using namespace std;
int main()
{
    
    int n;
    cout<< "enter value of n: ";
    cin>> n ;

    int i=1;
    
    while (i<=n)
    {
        int j=5;
        while (j>=i)
        {
            cout<<"*";
            j--;
        }
        cout << endl;
        i++;
    }
    

}