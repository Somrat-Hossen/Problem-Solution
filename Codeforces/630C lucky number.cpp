#include <bits/stdc++.h>
#define mx 1000000
typedef long long ll;
using namespace std;

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







int main()
{

   ll lucky[56]={0};
   ll x=1;
   int i,n;
   for(i=1;i<=55;i++)
   {
     x*=2;
     lucky[i]=lucky[i-1]+x;
   }
//   for(i=1;i<=55;i++)
//   {
//      cout<<lucky[i]<<" ";
//   }

   while(cin>>n)
   {
      cout<<lucky[n]<<endl;

   }



    return 0;
}

