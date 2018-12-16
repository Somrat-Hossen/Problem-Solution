#include <bits/stdc++.h>
#define mx 1000000
typedef long long ll;
using namespace std;

vector<int>divisor(mx+1,0);

 int n,i,j,m,x,y,z,res;

int main()
{

  cin>>n>>m;

  while(n>0 && m>0 && n+m>2)
  {
      if(n<m)
      {
          m-=2;
          n--;
      }

      else
      {
         m--;n-=2;
      }
    res++;
  }

  cout<<res<<endl;

    return 0;
}
