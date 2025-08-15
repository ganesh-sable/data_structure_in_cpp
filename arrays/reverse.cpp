#include<iostream>
using namespace std ;
void  reverse_arr(int arr[],int size)
{

    for(int i=size;i>=0;i--)
    {
        arr[i]=arr[i];
       
    }
}
int main()
{
    int arr[]={2,4,6,8};
    int size=4;
    reverse_arr(arr,4);
    cout<<"the reverse array is: "<<endl;
    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}