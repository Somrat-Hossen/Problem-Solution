#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 ll n,res,cnt,i,j,x,sq;

 bool prime_check(ll n)
 {
    sq=sqrt(n);
   if(n==2) return 1;
   else if(n%2==0) return 0;
   else
    {
     for(int i=2;i<=sq;i++)
     {
       if(n%i==0)
       {
         cnt++;
         break;
       }
     }
     if(cnt) return 0;
     else return 1;
   }
 }

int main()
{

  scanf("%lld",&n);
  if(n%2==0) printf("%lld\n",n/2);
  else if(prime_check(n))
  printf("1\n");
  else
  {
    while(n)
    {
        sq=sqrt(n);
        for(i=3;i<=sq;i+=2)
        {
          if(n%i==0)
          {
            n-=i; res++;
            if(n%2==0){ printf("%lld\n",res+n/2);return 0;}
           break;
          }

         }
    }
    printf("%lld\n",res);

  }


  return 0;
}
