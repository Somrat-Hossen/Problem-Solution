#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll res,x,cnt,i,j,ans;
int dp[1000002];

int main()
{

  dp[1]=1;

  for(i=2;i<=1000000-1;i++)
  {
      x=i;
      cnt=0;

      while(x!=1 && x>=i)   ///we calculated value for less than i ,so we do not need to calculate further ,as dp subproblem.
      {
         if(x & 1) x=3*x+1;
         else x/=2;
         cnt++;
      }
      dp[i]=cnt+dp[x];

      if(res<dp[i])
      {
         res=dp[i];
         ans=i;
      }
      //res=max(res,cnt);
  }
  cout<<res<<" "<<ans<<endl;

  return 0;
}
