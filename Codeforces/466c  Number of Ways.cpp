#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,a,s,sum[500005],c=0,cnt=0,i;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
      cin>>a;
      sum[i]=sum[i-1]+a;
    }

    if(sum[n]%3){cout<<0;return 0;}

    s=sum[n]/3;
    for(i=1;i<n;i++)
    {
       if(sum[i]==s*2)cnt+=c;
       if(sum[i ]==s)c++;
    }

    cout<<cnt<<endl;

    return 0;
}
