#include<bits/stdc++.h>
using namespace std;

long long int n,a,b,c,s,x,y,z,res;
int main()
{
    cin>>a>>b>>c;

      while(a--)
      {
          cin>>x>>y;
          res+=(x-s)/c;
          s=x+y;
      }

      cout<<res+((b-s)/c)<<endl;
    return 0;
}
