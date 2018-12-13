#include <bits/stdc++.h>
#define mx 1000000
typedef unsigned long long ull;
using namespace std;

vector<int>divisor(mx+1,0);

ull n,res,start,i,j,m,x,y,tc;

int main()
{

   cin>>tc;
   while(tc--)
   {
      start=1;res=0;
         cin>>n>>m>>x;

         if(n>=x)
         {
            puts("0");
            continue;
         }

         while(1)
         {
           start*=m;
           if(start> x/n) break;
           res++;
         }
      cout<<res<<endl;
   }

    return 0;
}

