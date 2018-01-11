#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
typedef long double ll;

ll n,r,i,tmp,res;

ll fact(ll n)
{
    tmp=1;
    for(i=2;i<=n;i++)
    {
        tmp*=i;
    }
    return tmp;
}

int main ()
{
   while(1)
    {
        cin>>n>>r;
        if(n==0 && r==0)
          {
            break;
          }
       res =(fact(n))/(fact(n-r)*fact(r));
       cout<<n<<" things taken " <<r<< " at a time is "<<fixed
        <<setprecision(0)<<res<<" exactly."<<endl;
    }
  return 0;
}
