#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int x=-1,y,a,i,b,tc,n,curr=1, ans;
string binary;

int res[10000000];

int main()
{
    cin>>tc;
 while(tc--)
 {
        cin>>n;ans=0; curr=1;
    if((n & 1) ==0)
    {
        binary="";
        while(n)
        {
            if(n & 1)
            {
              binary+='1';
            }
          else
            { binary+='0';}
          n=n>>1;
        }
        for(int i=binary.size()-1;i>=0;i--)
        {
            ans+=curr*(binary[i]-'0');
            curr<<=1;
        }
     res[++x]=ans;
    }
    else res[++x]=n;
 }

    for(i=0;i<=x;i++)
    cout<<res[i]<<endl;


    return 0;
}



