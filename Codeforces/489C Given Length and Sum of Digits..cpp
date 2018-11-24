#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;


int main()
{
  int n,m,i,j,x,tmp;
  string mn,mx;

  cin>>n>>m;
  if(m==0)
  {
    if(n==1) puts("0 0");
    else puts("-1 -1");
  }
  else if(m>9*n) puts("-1 -1");

  else
  {
    for(i=0;i<n;i++)
    {
       tmp=min(9,m);
       mx+= tmp+'0';
       m-=tmp;
    }
  //  cout<<mx<<endl;
    mn=mx;

    sort(mn.begin(),mn.end());
    if(mn[0]=='0')
    {
      mn[0]='1';
      for(i=1;i<mn.size();i++)
      {
        if(mn[i]!='0')
        {
          tmp=mn[i]-'0';  ///it mn[0]=0 then it change to 1 and decrease 1 from the next high bit
          x=i;
          break;
        }
      }
      tmp--;
      mn[x]=tmp+'0';
    }
    cout<<mn<<" "<<mx<<endl;
  }

 return 0;
}

