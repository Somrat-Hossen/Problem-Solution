#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int n;
   ll x,y,mx=INT_MIN;

    cin>>n;
   for(int i=1;i<=n;i++)
   {
       cin>>x>>y;
       mx=max(mx,x+y);
   }

   cout<<mx<<endl;
    return 0;
}
