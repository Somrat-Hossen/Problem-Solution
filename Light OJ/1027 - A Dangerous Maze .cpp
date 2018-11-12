
#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

 typedef unsigned int ui;
 typedef unsigned long long int ull;

int main()
 {
     int res,tc,i,j,cnt=0,pos,neg,gcd,n;
     cin>>tc;getchar();
     for(i=1;i<=tc;i++)
     {
         pos=neg=0;res=0;
         cin>>n;
        while(n--)
         {
             cin>>j;
             if(j>=0) pos++;
             else neg++;
             res+=abs(j);
         }
         getchar();
         cout<<"Case "<<i<<": ";
         if(pos==0) puts("inf");
         else{

            gcd=__gcd(res,pos);
            res=res/gcd;
            pos=pos/gcd;
            cout<<res<<"/"<<pos<<endl;
         }
     }

    return 0;
  }
