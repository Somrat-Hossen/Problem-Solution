#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

 typedef unsigned int ui;
 typedef unsigned long long  ull;

ull div_sum(ull x)
{
    ull i,j,sq,sum=0;
    sq=sqrt(x);
    for(i=1;i<=sq;i++)
    {
        if(x%i==0)
        {
            if(i*i==x) sum+=i;
            else
            {

                sum+=i;
                sum+=x/i;
            }
        }
    }
    return sum;
}
int main()
 {
     int i,tc,div_cnt,x;
     ull n,res;
     cin>>tc;
     while(tc--)
     {
         scanf("%llu",&n);
        res =div_sum(n);
        printf("%llu\n",res-n);
     }

    return 0;
  }

