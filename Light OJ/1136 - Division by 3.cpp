#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc,res,a,b,i,sum,cnt;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>a>>b;
        a--;
        if(b%3==2) res=(b/3)*2+1;
        else res=(b/3)*2;

        if(a%3==2) sum=(a/3)*2+1;
        else sum=(a/3)*2;
        printf("Case %d: %d\n",i,abs(res-sum));
    }


    return 0;
}

