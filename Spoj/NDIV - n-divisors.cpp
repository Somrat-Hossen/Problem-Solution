#include <bits/stdc++.h>
#define mx 32000
typedef long long ll;
using namespace std;

vector<int>prime;
int mark[mx+5];

void Prime_Sieve()   ///n means sqrt(b)
{

   for(int i=4;i<=mx;i+=2) mark[i]=1;  /// 1 means composite
   for(int i=3;i*i<=mx;i+=2)
   {
      if(mark[i]==0)
      {
          for(int j=i*i;j<=mx;j+=2*i)
          {
            mark[j]=1;
          }
      }
   }


   for(int i=2;i<=mx;i++)
   {
      if(mark[i]==0) prime.push_back(i);
     // cout<<i<<" ";
   }

  /* for(int i=0;i<(int)prime.size();i++)
   {
     cout<<prime[i]<<" ";
   }*/

}





int Divisor( int l, int r, int n )
{

  int total=0;

   for(int i=l;i<=r;i++)
   {
       int x=i;
       int div=1;

         for(int j=0;prime[j]*prime[j]<=x;j++)
         {
            int cnt=1;

             while(x%prime[j]==0)
             {
                cnt++;
                x=x/prime[j];
             }
             div*=cnt;
         }
         if(x>1) div*=2;

       total=total+(div==n);

  }
 return total;

}





int main()
{
    ///freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

   int n,a,b,res;

   cin>>a>>b>>n;

   Prime_Sieve(); /// calculate upto sqrt b


   res=Divisor(a,b,n);

   cout<<res<<endl;


    return 0;
}

