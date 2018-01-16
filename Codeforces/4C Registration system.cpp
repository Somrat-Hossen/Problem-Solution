#include <bits/stdc++.h>
#include<iomanip>
#define PI acos(-1)
using namespace std;


int main()
{
  //freopen("in.txt","r",stdin);
  int n;
  string str;
  map<string,int>mp;
  cin>>n;

  while(n--)
  {
      cin>>str;
     if(mp[str]==0)//mp[str] means index,first contains 0
     {
       puts("OK");
       mp[str]++;
     }
     else
     {
       cout<<str<<mp[str]<<endl;
       mp[str]++;
     }
  }
    return 0;
}
