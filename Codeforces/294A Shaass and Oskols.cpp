#include<bits/stdc++.h>
using namespace std;


int bird[105],remain[105];
int main()
{
  int n,x,y,l,r,shot,i;
  cin>>n;

  for(i=1;i<=n;i++)
  {
     cin>>bird[i];
  }
  cin>>shot;
  while(shot--)
  {
     cin>>x>>y;
     l=abs(y-1);
     r=abs(bird[x]-y);

     if(x==1)
     {
        bird[x]-=(l+1);
        bird[x+1]+=r;
        bird[x]-=r;
     }

     else if(x==n)
     {
        bird[x-1]+=l;
        bird[x]-=(l+1);
        bird[x]-=r;
     }
     else
     {
        bird[x-1]+=l;
        bird[x]-=(l+1);
        bird[x+1]+=r;
        bird[x]-=r;
     }
  }

  for(i=1;i<=n;i++)
  {
     cout<<bird[i]<<endl;
  }

   return 0;
}
