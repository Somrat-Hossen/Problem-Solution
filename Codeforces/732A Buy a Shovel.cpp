#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{

  ull i,n,k,x,y,z;
  cin>>n>>k;

  for(i=1;;i++)
  {
      x=n*i;
      y=x%10; //cout<<x<<" "<<y<<endl;
      x=x-y;//cout<<x<<endl;
      if(x%10==0 and y==0)
       {
           cout<<i<<endl;return 0;
       }
       else if(y!=0 and (y-k)==0)
       {
          cout<<i<<endl;return 0;
       }
   }
  return 0;
}
