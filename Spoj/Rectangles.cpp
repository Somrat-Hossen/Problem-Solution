#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
 int num,n,rev=0,rev1,sum,tc,res=0,sq,cnt=0;
   cin>>n;
   if(n==1){puts("1");return 0;}

       for(int i=9;i<=n;i++)
       {
           sq=sqrt(i);
           for(int  j=3;j<=sq;j++)
           {
               if((i%j==0))
               {
                 res+=2;
               }
           }
       }
     cout<<res/2+n+n/2-1<<endl;



    return 0;
}

