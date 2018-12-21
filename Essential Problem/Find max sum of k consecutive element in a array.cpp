#include<bits/stdc++.h>
using namespace std;


int main()
{

   int n,i,j,mx=INT_MIN,k,res=0,sum[10000],x;

   puts("Given the size of array:");
   cin>>n>>k;

    for(i=1;i<=n;i++)
    {
       cin>>x;
       sum[i]=x+sum[i-1];
    }
    for(i=1;i<=n;i++)
    {
       cout<<sum[i]<<" ";
    }

    for(i=k,j=n-k+i;i<=j;i++)
    {
       res=sum[i]-sum[i-k];
       mx=max(res,mx);

    }
    cout<<"Max of consecutive k element:"<<mx<<endl;

  return 0;

}
