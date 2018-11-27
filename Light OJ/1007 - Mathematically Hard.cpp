#include<bits/stdc++.h>
#define mx 5000000
using namespace std;
typedef unsigned long long ull;

int phi[mx+2];
ull sum[5000001];

void Euler_totient( )
{
  int i,j;
  for(i=2;i<=mx;i++){phi[i]=i;}

  for(i=2;i<=mx;i++)
  {
    if(phi[i]==i)  /// prime
    {
      for(j=i;j<=mx;j+=i)
      {
         phi[j] -= phi[j] / i;
      }
    }
   // cout<<i<<" "<<phi[i]<<endl;
    sum[i]=phi[i];
    sum[i]*=phi[i];
    sum[i]+=sum[i-1];
  }
}


int main()
{
  int a,b,tc;

  Euler_totient();
  scanf("%d",&tc);

  for(int i=1;i<=tc;i++)
  {
    scanf("%d%d",&a,&b);
    printf("Case %d: ",i);
   printf("%llu\n",sum[b]-sum[a-1]);
  }

   /*for(int i=2;i<=a;i++)
   {
     cout<<i<<" "<<sum[i]<<endl;
   }*/
}

