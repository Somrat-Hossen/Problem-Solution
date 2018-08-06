#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

int main()
 {
     unsigned long int n;
     int cnt=0,tc;
     cin>>tc;
 for(int i=1;i<=tc;i++)
  {
    cnt=0;
    cin>>n;
    while(n)
    {
     if((n&1)==1)
     {
         cnt++;
     }
      n>>=1;
    }
     if(cnt&1) printf("Case %d: %s\n",i,"odd");
     else printf("Case %d: %s\n",i,"even");
  }
    return 0;
  }

