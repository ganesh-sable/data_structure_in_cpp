#include<iostream>
#include<string>
using namespace std ;
class FD
{
    public:
    int amount;
    float time;
    int rate;

    FD(int a,int t,int r)
    {
      amount=a;
      time=t;
      rate=r;
    }
    
    void show()
    {
      float year=time/12;
      cout<<year<<endl;
      float intrest=(amount*year*rate)/100;
      cout<<"simple intrest is: "<<intrest<<endl;
      rate = (amount/100)*rate;
      cout<<rate<<endl;
      float total=amount+intrest;
      cout<<"total amount is: "<<total<<endl;

    }

};
int main()
{
  FD ob(10000,13,8);
  ob. show();
  return 0;
}
