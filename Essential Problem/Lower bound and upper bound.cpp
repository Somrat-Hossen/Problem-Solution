#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> vec;
  vector<int>::iterator it,itt;
  vec.push_back(3);
  vec.push_back(5);
  vec.push_back(7);
  vec.push_back(8);
  vec.push_back(9);


   it =lower_bound(vec.begin(),vec.end(),7);
   itt=upper_bound(vec.begin(),vec.end(),8);
   cout<<"Lower:"<<*it<<endl;
   cout<<"Upper:"<<*itt<<endl;

   cout<<"Position for lower bound:"<<distance(vec.begin(),it)<<endl;
   cout<<"Position for lower bound:"<<distance(vec.begin(),itt)<<endl;

  return 0;
}

