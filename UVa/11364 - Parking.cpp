#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[25],i,tc,n,res;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        memset(ar,0,sizeof(ar));
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);

        res=abs((ar[0]-ar[n-1]))*2;
        cout<<res<<endl;
    }
    return 0;
}
