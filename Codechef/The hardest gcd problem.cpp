#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[100002];
int i,k,n,j,cnt,gcd,tc;

 int Factor(int n)
 {
    int i,mx=0;
    int sq=sqrt(n);
    for(i=2;i<=sq;i++)
    {
       if(n%i==0)
       {
          while(n%i==0)
          {
             n/=i;
          }
         mx=max(mx,i);
       }
    }
    mx=max(mx,n);

    return mx;
}

int main()
{

    cin>>tc;
     while(tc--)
     {
        cin>>n>>k;
        memset(arr,0,sizeof(arr));

        for(i=0;i<n;i++)
        {
           cin>>arr[i];
        }

       gcd=arr[0];

       for(i=1;i<n;i++)
       {
          gcd=__gcd(gcd,arr[i]);
       }

       int res=Factor(gcd);

       if(res<=k) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
     }


 return 0;
}
