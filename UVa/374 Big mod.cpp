#include <bits/stdc++.h>
#include<iomanip>
#define PI acos(-1)
using namespace std;
typedef long long int ll;

int check(ll a,ll b,ll c)
{ll x;

  if(b==0) return 1%c;
   x=check(a,b/2,c);
  x=(x*x)%c;
  if(b%2)
   x=(x*a)%c;
  return x;
}

int main()
{
   ll n,i,x,y,z,j,len,cnt,m;
   ll a,b,c;
  while(cin>>a>>b>>c)
  {
   cout<<check(a,b,c)<<endl;
  }

   return 0;
}
