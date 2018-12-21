#include <bits/stdc++.h>
#define mx 10000
typedef long long ll;
using namespace std;
int phi[mx+2];
vector<int>divisor(mx+1,0);

 //int n,i,j,m,x,y,z;

 int bigmod(ll a,ll b,ll c)
 {
     ll x;
     if(b==0) return 1%c;
     x=bigmod(a,b/2,c);
     x=(x*x)%c;
     if(b & 1)  x=(x*a)%c;
     return x;

 }

 void Euler_totient()
{
  int i,j;
  for(i=1;i<=mx;i++){phi[i]=i;}

  for(i=2;i<=mx;i++)
  {
    if(phi[i]==i)  /// i is a prime
    {
      for(j=i;j<=mx;j+=i)
      {
       /// phi[j]=(phi[j]/i)*(i-1);
        phi[j] -= phi[j] / i;
      }
    }
  }

}





int main()
{
    ll x,y,p;

    Euler_totient();

   int tc,n,i,j;
   ll res;
   cin>>tc;

   while(tc--)
  {

       cin>>n;res=0;

         for(i=1;i<=n;i++)
         {

            res+=phi[i];

         }
         cout<<res*res<<endl;

    }






    return 0;
}

