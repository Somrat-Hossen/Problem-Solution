#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int k,root,cnt=0;


int main()
{
    int tc;
    ll n,i,j,x,res;
    scanf("%lld",&tc);
    for(i=1;i<=tc;i++)
    {
        cnt=5;res=0;
        cin>>n;
        while(true)
        {
            x=n/cnt;
            if(!x) break;
            res+=x;
            cnt*=5;
        }
       printf("%lld\n",res);
    }

    return 0;
}

