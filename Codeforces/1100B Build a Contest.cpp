#include<bits/stdc++.h>
#define mx 100005
using namespace std;

int arr[mx],ar[mx],n,m,x,i;


int main()
{

  cin>>m>>n;
  for(i=1;i<=n;i++)
  {
      cin>>x;
      arr[x]++;
      ar[arr[x]]++;

      if(ar[arr[x]]==m) cout<<1;
      else cout<<0;

  }
   return 0;
}
