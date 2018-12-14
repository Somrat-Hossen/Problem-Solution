#include <bits/stdc++.h>
#define mx 1000000
typedef long long ll;
using namespace std;

vector<int>divisor(mx+1,0);

 ll n,i,j,m,x,y,z;

int main()
{

   int tc;
   cin>>tc;

   while(tc--)
  {
      cin>>n>>m;
      x=((n-m)&((m-1)/2));

      cout<<((x)?0:1)<<endl;


   }

    return 0;
}

