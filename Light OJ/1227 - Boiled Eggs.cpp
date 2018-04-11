#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

int main()
 {
     int n,p,q,cnt=0,sum=0,x,tc;
     cin>>tc;
     for(int j=1;j<=tc;j++)
     {
           sum=0;cnt=0;
         cin>>n>>p>>q;
         for(int i=1;i<=n;i++)
         {
             cin>>x;
             sum+=x;
             if(sum<=q and cnt<p) cnt++;

         }
        printf("Case %d: %d\n",j,cnt);
     }

    return 0;
  }
