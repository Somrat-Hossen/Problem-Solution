#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

typedef  long long int ll;

int main()
{
  vector<ll>vec;
  vector<ll>::iterator it,itt;
  ll n,m,x,pos,i,start,last;

  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>x;
    vec.push_back(x);
  }
  sort(vec.begin(),vec.end());
  start=vec[0];
  last=vec[n-1];

  //cout<<start<<last<<endl;
  cin>>m;
  while(m--)
  {
      cin>>x;
      if(x<start) puts("0");
      else if(x>=last) cout<<n<<endl;
      else
      {
        it=upper_bound(vec.begin(),vec.end(),x);
        cout<<it-vec.begin()<<endl;
     }
  }

    return 0;
}

