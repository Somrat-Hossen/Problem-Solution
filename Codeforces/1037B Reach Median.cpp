#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n,m,cnt=0,res=0,x,y;
    cin>>n>>m;

   ll arr[n+1];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }

  sort(arr,arr+n);
  if(arr[n/2]<m)
  {
      for(int i=n/2;i<n;i++)
      {
          if(arr[i]<m){res+=m-arr[i];}
      }
  }
 else
  {
      for(int i=n/2;i>=0;i--)
      {
          if(arr[i]>m){res+=arr[i]-m;}
      }
  }

    cout<<res<<endl;
    return 0;
}

