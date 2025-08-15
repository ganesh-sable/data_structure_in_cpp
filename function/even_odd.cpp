#include<iostream>
using namespace std ;

//bool  1-even , 0--odd
bool evenodd(int a)
{
    if(a%2==0)
    {
        return 1;
    }
    else{
         return 0;
    }
}
int main()
{
    int num;
    cin>> num;
    if (evenodd(num))
    {
      cout<<"the number is even";
    }
    else
    {
        cout<<"the number is odd";
    }

}