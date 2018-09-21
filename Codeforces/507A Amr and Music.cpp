#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

 ll i,n,w,res,weight,price,cur,m,t,x,j;
 int a[105],b[55];

int main()
{

  pair<int,int>pr[105];
  cin>>n>>m;
  for(i=0;i<n;i++)
  {
      cin>>x;
      pr[i].first=x;
      pr[i].second=i+1;
  }

  sort(pr,pr+n);

 for(i=0;i<n ;i++)
  {
    if(res+pr[i].first<=m)
    {
      a[++w]=pr[i].second;
      res+=pr[i].first;
    }
    else
        break;
  }

  cout<<w<<endl;

  for(i=1;i<=w ; i++)
  {
    cout<<a[i]<<" ";
  }

    return 0;
}





