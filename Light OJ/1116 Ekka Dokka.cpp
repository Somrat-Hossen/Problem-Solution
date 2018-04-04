#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long int  t,num,m,x=1;
    cin>>t;
    while(t--)
    {
        cin>>num;
        if(num%2!=0)
        {
           printf("Case %lld: Impossible\n",x);
           x++;
        }
 
        else
        {
        m=1;
        while(num%2==0)
        {
            m*=2;
            num/=2;
        }
        printf("Case %lld: %lld %lld\n",x,num,m);
     x++;
    }
    }
    return 0;
}
