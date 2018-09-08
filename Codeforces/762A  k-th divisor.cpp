#include<bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ll n,m,c=0,i,x,res=0,j=0;
    set<ll>st;
    set<ll>::iterator it;

  cin>>n>>m;

    for(i=1;i*i<=n;i++)
    {
     if(n%i==0)
     {
         st.insert(i);
         st.insert(n/i);
     }
    }
    if(st.size()<m){puts("-1"); return 0;}
    j=1;

    for(it=st.begin();it!=st.end();it++)
    {
        if(j==m)
        {
         cout<<*it;
         return 0;
        }
        j++;
    }
    return 0;
}





