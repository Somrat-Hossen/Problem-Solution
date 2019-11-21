#include <bits/stdc++.h>
#define mx 1000005
typedef long long ll;
using namespace std;


 int res[10][mx];
 int f[mx];

int g(int x)
{
   if(x<10) return x;

       int prod=1;
         while(x)
         {
            if(x%10) prod*=x%10;
            x/=10;
         }
   return g(prod);
}
void Compute()
{
   for(int i=1;i<=1000000;i++)
   {
      if(i<10) f[i]=i;
      else f[i]=g(i);
   }

   //for(int i=56;i<=67;i++) cout<<f[i]<<" ";
}


void Precompute()
{
   for(int i=1;i<=1000000;i++)
   {
      (res[f[i]][i])++;
   }

   for(int i=1;i<=9;i++)
   {
      for(int j=1;j<=1000000;j++) res[i][j]+= (res[i][j-1]);
   }
}

int main()
{

   ///freopen("in.txt","r",stdin);
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);


   Compute();
   Precompute();

   int l,r,k,q;

   cin>>q;

   while(q--)
   {
       cin>>l>>r>>k;
       cout<<(res[k][r]-res[k][l-1])<<endl;

   }


    return 0;
}

