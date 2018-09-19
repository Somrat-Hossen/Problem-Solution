#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ar[1005];
    int n,i,s,a,b,c,d;

   cin>>n;
    for(i=1;i<=n;i++)
    {
      cin>>a>>b>>c>>d;
      ar[i]=a+b+c+d;
    }
    s=ar[1];
    sort(ar,ar+n,greater<int>());
    for(i=1;i<=n;i++)
    {
      if(ar[i]==s)
      {
          cout<<i<<endl;return 0;
      }
    }


    return 0;
}



