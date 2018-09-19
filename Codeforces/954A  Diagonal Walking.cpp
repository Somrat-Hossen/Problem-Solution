#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,i,cnt=0;
    string st;
    cin>>n>>st;
    for(i=0;i<n;i++)
    {
        if((st[i]=='R' && st[i+1]=='U')||(st[i]=='U' && st[i+1]=='R'))
        {
            cnt++;
            i+=1;
        }
        else
            continue;
    }

    cout<<n-cnt<<endl;
   // cout<<cnt;

    return 0;
}

