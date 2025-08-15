#include<iostream>
using namespace std ;
void fun(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int array[15]={2,7};
    int n=5;
    fun(array, 15);

    char ch[5]={'a','b','c','d','e'};
    for(int i=0;i<5;i++)
    {
        cout<< ch[i]<<" ";
    }
    
    return 0;
}
