#include<bits/stdc++.h>
using namespace std;

int ar[10000005],arr[130];
int main()
{
  int i,n,x,y;
  cin>>n;

  for(i=0;i<n;i++)
  {
     cin>>arr[i];  /// it will work for upto arr[i]<=1e+8
  }
  sort(arr,arr+n,greater<int>());
  x=arr[0];

  if(arr[0]==arr[1])
   {
       cout<<arr[0]<<" "<<arr[0]<<endl; return 0;
   }

  for(i=1;i<n;i++)
  {
     if((x%arr[i]==0) && (ar[arr[i]]==0))
     {
       ar[arr[i]]=-1;
       arr[i]=0;
     }
  }
  sort(arr,arr+n,greater<int>());
  cout<<x<<" "<<arr[1]<<endl;


   return 0;
}


