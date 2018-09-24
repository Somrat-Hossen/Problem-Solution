#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

int main()
 {
     int n,sum=0,mx=INT_MIN,m,res,x;
     cin>>n>>m;
     sum+=m;
     for(int i=0;i<n;i++)
     {
         cin>>x;
         sum+=x;
         mx=max(mx,x);
     }
     res=sum/n;
     if(sum%n) res++;

     cout<<max(res,mx)<<" "<<mx+m<<endl;

    return 0;
  }

