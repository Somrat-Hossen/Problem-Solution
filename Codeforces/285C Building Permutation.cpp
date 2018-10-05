#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

 typedef unsigned int ui;
 typedef unsigned long long int ull;
 int ar[30000005],i,n,x;
  ull res;

int main()
 {
     cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
  sort(ar,ar+n);

  for(i=0;i<n;i++)
    {
        x=(abs((ar[i])-(i+1)));
        res+=x;
    }

  cout<<res<<endl;
    return 0;
  }
