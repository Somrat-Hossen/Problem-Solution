#include<bits/stdc++.h>

using namespace std;

int main()
{
 int n,m,cnt=0,res=0,x,y;

 cin>>n>>m;

    if(n>m)
    {
      cout<<n-m<<endl;return 0;
    }

    while(m>n)
    {
      if(m & 1)
       {
          m++;
       }
      else
      {
         m/=2;
      }

      res++;
    }
  cout<<abs(res+n-m)<<endl;

 return 0;

}
