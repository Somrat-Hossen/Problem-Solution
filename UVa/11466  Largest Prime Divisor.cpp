#include <bits/stdc++.h>
#define mx 1000000

using namespace std;
typedef  long long int ll;

ll num,sq,x,i,j,cnt,len,p;
vector<ll>prime;
bool check[mx+1];
set<ll>st;
set<ll>::iterator it;

void prime_test()
{
  prime.push_back(2);
   p=sqrt(mx)+1;

 for(i=4;i<=mx;i+=2)///All even except 3 are marked.
  {
     check[i]=1;
  }
    for(int i=3;i<=mx;i+=2)///same sqrt(n)==i*i
    {
      if(check[i]==0)
      {
          prime.push_back(i); ///i means prime
          if(i<=p)  ///there is no divisor after sqrt n
          {
            for(int j=i*2;j<=mx;j+=i)
           {
              check[j]=1; ///0 means not prime
           }
          }
      }
    }
}


void prime_factor(ll num)
{
    st.clear();
    for(i=0;prime[i]*prime[i]<=num;i++)
    {
        while(num%prime[i]==0 && num)
        {
           st.insert(prime[i]);
           // printf("%lld\n",prime[i]);
            num/=prime[i];
        }
    }
    if(num>2) st.insert(num);
}


int main()
{
  prime_test();

 /* for(i=0;i<50;i++)
  {
    cout<<prime[i]<<" ";
  }*/

 while(scanf("%lld",&num)&& num!=0)
 {
   if(num<0) num*=(-1);

     prime_factor(num);
     if(st.size()>=2)
     {
       it=st.end();
       it--;
       printf("%lld\n",*it);
     }
     else printf("-1\n");
   }

  return 0;
}
