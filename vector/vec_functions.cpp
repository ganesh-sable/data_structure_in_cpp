#include<iostream>
#include<vector>
using namespace std ;
int main()
{

  vector<int>vec={1,2,3,4};//syntyax

  cout<<"size: "<<vec.size()<<endl;//vector functions 1st:size;
  cout<<vec[0]<<endl;
  cout<<vec[1]<<endl;
  cout<<vec[2]<<endl;
  cout<<vec[3]<<endl;
  cout<<vec[4]<<endl;

  vector<int>mark ={5,7,6,8};
  mark.push_back(25);//vector function_02 push_back=  increse size after pushback;
  cout<<mark[0]<<endl;
  cout<<mark[1]<<endl;
  cout<<mark[2]<<endl;
  cout<<mark[3]<<endl;
  cout<<mark[4]<<endl;

  vector<char>fun={'a','b','c'};
  
  
  cout<<fun.front()<<endl;//vector function_04=used to print 1st value ;
  
  cout<<fun.back()<<endl;//vector function_05=used to print last value;

  cout<<fun.at(0)<<endl;//vector function_06=used to print given index value;

  fun.pop_back();//vector function_03 =pop_back=delet the last value;
  
  cout<<fun[0]<<endl;
  cout<<fun[1]<<endl;
  cout<<fun[2]<<endl;
  
  return 0;

}
