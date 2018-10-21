#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long int ull;

int main()
{
    ull a,b,res=1;
    cin>>a>>b;
    for(ull i=a+1;i<=b;i++)
    {
        res*=i;
        res%=10;
        if(!res) break;
    }

    cout<<res<<endl;

    return 0;
}
