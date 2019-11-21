#include <bits/stdc++.h>
#define mx 10000005
#define maxx 1000005
typedef long long ll;
using namespace std;

bool mark[mx];
vector<int>prime;
ll frequency[mx];
int arr[maxx];
ll csum[mx];

void Sieve()
{

   for(ll i=4;i<=mx;i+=2) mark[i]=1;
   int len=sqrt(mx);

   for(ll i=3;i<=len;i+=2)
   {
      if(!mark[i]) for(ll j=i*i;j<=mx;j+=(2*i)) mark[j]=1;
   }

   for(ll i=2;i<=mx-5;i++) if(!mark[i]) prime.emplace_back(i);
}

void Prime_factor(int n)
{
   for(ll i=0;i<n;i++)
   {
      int x=arr[i];
      for(ll j=0;prime[j]*prime[j]<=x;j++)
      {
         if(x%prime[j]==0)
         {
               while(x%prime[j]==0)
               {
                  x/=prime[j];
               }
               frequency[prime[j]]++;///count each factor once
         }
      }
      if(x>1) frequency[x]++;///if the num is prime
   }
}

void Precompute()
{
   for(ll i=2;i<=mx-5;i++)
   {
      if(!mark[i]) csum[i]=csum[i-1]+frequency[i];
      else csum[i]=csum[i-1];
   }
}






int main()
{

   ///freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

   Sieve();


   ll l,r,m,n;

   cin>>n;
   for(ll i=0;i<n;i++) cin>>arr[i];
   Prime_factor(n);
   Precompute();
  // for(int i=2;i<=10;i++) cout<<frequency[i]<<" ";
   cin>>m;

   while(m--)
   {
      cin>>l>>r;
      r=min(ll(mx-5),r);
      l=min(ll(mx-5),l);

      cout<<(csum[r]-csum[l-1])<<endl;
   }

    return 0;
}

