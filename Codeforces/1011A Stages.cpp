#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,cnt=0,i,x,res=0;
    string str,st;
    cin>>n>>m;
    int a[n+1];
    cin>>str;
    for(i=0;i<n;i++)
    {
       a[i]=str[i]-'a'+1;
    }
    sort(a,a+n);
    x=a[0];cnt++;res+=a[0];
    for(i=1;i<n && cnt<m;i++)
    {
        if((a[i]-x)>=2)
        {
            res+=a[i];cnt++;
            x=a[i];
        }
    }

    cout<<((cnt==m)?res:-1)<<endl;
    return 0;
}
