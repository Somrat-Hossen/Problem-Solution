#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,k,res,cnt,win,i;
int ar[1000];

int main()
{

  cin>>n>>k;
  for(i=1;i<=n;i++)
  {
    cin>>ar[i];
  }

  win=ar[1];
  for(i=2;i<=n;i++)
  {
    if(win>ar[i])
    {
    cnt++;
    if(k==cnt){cout<<win<<endl;return 0;}
    }

    else {cnt=0; win=ar[i];cnt++;}
  }
  cout<<win<<endl;

  return 0;
}
