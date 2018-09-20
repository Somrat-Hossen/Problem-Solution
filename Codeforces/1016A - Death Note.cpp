#include<bits/stdc++.h>

using namespace std;


int main()
{
   int n,x=0,i,m,t;
   cin>>n>>m;
   for(i=0;i<n;i++)
   {
       cin>>t;
       cout<<((t+x)/m)<<" ";
       x=(t+x)%m;
   }

    return 0;
}



