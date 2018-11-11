#include<bits/stdc++.h>
#define mx 1000000
using namespace std;
typedef long long ll;

ll prime[mx+1];
int i,j,sum,sq,cnt,tc,n;

int main()
{
    prime[2]=2;
    for(i=3;i<=mx;i++)
    {
        sq=sqrt(i);cnt=0;
        for(j=2;j<=sq;j++)
        {
            if(i%j==0)
            {
                prime[i]=prime[i-1]; cnt++;
                break;
            }
        }
     if(!cnt) prime[i]=prime[i-1]+i;
    }
   /* for(i=1;i<=11;i++)
    {
        cout<<prime[i]<<" ";
    }
    */
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
       // cout<<prime[n]<<endl;
       printf("%lld\n",prime[n]);
    }

    return 0;
}
