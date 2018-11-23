#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long n,k,week;
   long long tmp;
  long  double res=0;
   cin>>n>>k;
   week=n-k+1;

  vector<long long>vec(n+5,0);

  for(int i=1;i<=n;i++)
  {
    cin>>vec[i];
    vec[i]=vec[i]+vec[i-1];
  }

  for(int i=k;i<=n;i++)
  {
    tmp=vec[i]-vec[i-k];
    res=res+((double)tmp/week);
  }

   cout<<fixed<<setprecision(10)<<res<<endl;

    return 0;
  }


