#include<bits/stdc++.h>
using namespace std;


int main()
{

   int n,i,tc,mn=INT_MAX,k,arr[20002],x;

     cin>>tc;
  while(tc--)
  {

     cin>>n>>k;
     mn=INT_MAX;

    for(i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0;i+k<=n;i++)
    {
       x=arr[i+k-1]-arr[i];
       mn=min(x,mn);
    }
    cout<<abs(mn)<<endl;


  }



  return 0;

}

