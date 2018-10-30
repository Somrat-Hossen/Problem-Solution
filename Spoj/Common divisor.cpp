#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>
#define mxx 1000000

using namespace std;

vector<int>divisor[1000005];

 int n,i,j,m,sq,gcd,cnt=0,tc;

int main()
 {

   scanf("%d",&tc);
   while(tc--)
   {
        cnt=0;
        scanf("%d%d",&n,&m);

        gcd=__gcd(n,m);
        sq=sqrt(gcd);

      for(i=1;i<=sq;i++)
      {
         if(gcd%i==0)
         {
             if(i*i==gcd) cnt++;
             else cnt+=2;
         }
       }
      printf("%d\n",cnt);
    }


    return 0;
  }


