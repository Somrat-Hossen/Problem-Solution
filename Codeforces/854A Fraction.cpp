#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,i;

    cin>>n;
    for(i=n>>1;i>=1;i--)
    {
        if(__gcd(i,n-i)==1)
        {
            cout<<i<<" "<<n-i<<endl; return 0;
        }
    }


    return 0;
}
