#include<bits/stdc++.h>

using namespace std;

int main()
{

    string st;
    int n,cnt=0,i,res=0;
    cin>>n>>st;

    for(i=0;i<n;i++)
    {
        if(st[i]=='x')
        {
            cnt++;
            if(cnt>=3) res++;
        }
        else
            cnt=0;
    }

    cout<<res<<endl;

    return 0;
}
