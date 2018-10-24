#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int k,root,cnt=0;
bool prime(ll n)
{
    cnt=0;

    if(n<2) return 0;
    if(n==2) return 1;
    else if(!(n & 1)) return 0;
    else
    {
        root=sqrt(n)+1;
        for(k=3;k<=root;k+=2)
        {
            if(n%k==0)
            {
                cnt++;
                break;
            }
        }
        if(cnt) return 0;
        else return 1;

    }


}

int main()
{
    int tc;
    ll a,b,i,j;
    scanf("%lld",&tc);
    for(i=1;i<=tc;i++)
    {
        cin>>a>>b;
        for(j=a;j<=b;j++)
        {
            if(prime(j))
            {
                printf("%lld\n",j);
            }
            if(j==b)printf("\n");
        }
    }

    return 0;
}
