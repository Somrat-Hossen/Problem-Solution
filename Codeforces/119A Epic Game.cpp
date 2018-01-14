#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,x,y;

    cin>>a>>b>>n;
 while(1)
  {
    x=__gcd(a,n);
    n=n-x;
    if (n<=0)
     {
     cout<<"0"<<endl;
     return 0;
     }
    y=__gcd(b,n);
    n=n-y;
     if(n<=0)
     {
     cout<<"1"<<endl;
     return 0;
     }
   }

 return 0;
 }
