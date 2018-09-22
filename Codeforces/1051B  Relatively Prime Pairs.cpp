#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

 ll i,n,w,res,weight,price,cur,m,t,x,j,k;
 int a[55],b[55];

int main()
{
  cin>>n>>m;
  k=(m-n+1)/2;
  puts("YES");

  for(i=1,j=n;i<=k;j+=2,i++)
  {
    cout<<j<<" "<<j+1<<endl;
  }


 return 0;
}






