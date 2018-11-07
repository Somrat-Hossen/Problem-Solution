#include <bits/stdc++.h>
#define mx 1000000
using namespace std;

typedef  long long ll;

ll res,nom,denom, m =1000003;
ll tc,i,j,n,r;
ll fact[1000005];

ll Bigmod(ll a,ll b)
{
  if(b==0) return 1;
  ll x=Bigmod(a,b/2);
  x=(x*x)%m;
  if(b%2==1)
  x=(x *a)%m;
  return x;
}

int main()
{
     fact[0]=1;
     fact[1]=1;

     for(i=2;i<=1000000;i++)
     {
        fact[i]=(((fact[i-1])%m)*i)%m;
     }
     cin>>tc;
     for(i=1;i<=tc;i++)
     {
         cin>>n>>r;
         nom=fact[n];
         denom=(fact[r]*fact[n-r])%m;
         res=nom* Bigmod(denom,m-2);
         printf("Case %lld: %lld\n",i,res%m);
     }

    return 0;
  }
