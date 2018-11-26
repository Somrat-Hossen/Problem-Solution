#include<bits/stdc++.h>
using namespace std;
#define maxx 1001
int  prime[1010],i,j,cnt=2,k,x,c,start;
int check[170];

///prime list
void check_prime()
{
    int p=sqrt(maxx)+1;
  for(int i=4;i<=maxx;i+=2)   ///All even except 3 are marked.
   {
     prime[i]=1;
    }
    for( i=3;i<=maxx;i+=2) ///same sqrt(n)==i*i
    {
      if(prime[i]!=1)
      {
          check[++cnt]=i;   ///i means prime
          if(i<=p)          ///there is no divisor after sqrt n
          {
           for( j=i*i;j<=maxx;j+=i)
           {
              prime[j]=1;    ///0 means not prime
           }
          }
      }
    }
    check[1]=1;check[2]=2;
}

int main()
{
    check_prime();
    int n,c,mid;
  /*  for(i=1;i<=cnt;i++)
    {
     cout<<check[i]<<" ";
    }
    cout<<x<<endl;
    */

while(cin>>n>>c)
{
 printf("%d %d:",n,c);

  int new_prime[170],j=0,k;
  for(i=1;i<=cnt;i++)
   {
    if(check[i]<=n)
     {
     // cout<<check[i]<<" ";
      new_prime[++j]=check[i];
      }
      else break;
    }

  if(j & 1) c=2*c-1;
  else c=2*c;

  if(c>j)
  {
    for(i=1;i<=j;i++)
    {
       printf(" %d",new_prime[i]);
    }
  }

  else
  {
    start=j/2-c/2+1;

    for(k=1,i=start;k<=c;k++,i++)
    {
      //cout<<new_prime[i]<<" ";
      printf(" %d",new_prime[i]);
    }
  }
 puts("\n");

}


return 0;
}

