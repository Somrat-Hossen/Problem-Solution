
#include <bits/stdc++.h>
#define mx 10000000
typedef long long ll;
using namespace std;

bool mark[mx+5];
int cnum[mx];

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

   /*
    We need to find out the total prime num between n/2 to n.First and second algo marked all
    num as composite upto n/2.
    Since we need to find total prime between n/2 to n ,so we find the total prime upto n as cumulative num
    and subtract from the total prime num of n/2;
    Therefor cnum[n2 to n]=cnum[n]-cnum[n/2].

   */
   cnum[2]=1;
   for(int i=3;i<=mx;i++)
   {
      if(mark[i]==0 && (i & 1))
      {
         cnum[i]=cnum[i-1]+1;
      }
      else cnum[i]=cnum[i-1];
   }

}


int main()
{
    ///freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

   Prime_Sieve();

   int n,a,i,b,res,tc;

    cin>>tc;
    while(tc--)
    {

       cin>>n;
       cout<<cnum[n]-cnum[n/2]<<endl;
    }


    return 0;
}

