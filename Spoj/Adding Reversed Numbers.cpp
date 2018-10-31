#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ll num,n,rev=0,rev1,sum,tc,res;
    cin>>tc;
    while(tc--)
    {
        rev=res=rev1=0;
        cin>>num>>n;
        while(num)
        {
          rev=rev*10+num%10;
          num/=10;
        }
        while(n)
        {
          rev1=rev1*10+n%10;
          n/=10;
        }
        sum=rev+rev1;
        while(sum)
        {
          res=res*10+sum%10;
          sum/=10;
        }
       cout<<res<<endl;
    }


    return 0;
}
