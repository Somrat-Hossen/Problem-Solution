#include<bits/stdc++.h>
#define mx 1000
using namespace std;

vector<int>prime;
bool mark[mx+2];
vector<int>factor[mx+2];
int n,m,num,t;

int dis[mx+2];
int vis[mx+2];

void Sieve()
{
  for(int i=4;i<=mx;i+=2) mark[i]=1;

  for(int i=3;i*i<=mx;i+=2)
  {
    if(mark[i]==0)
    {
       for(int j=i*i;j<=mx;j+=2*i) mark[j]=1;
    }
  }
  for(int i=2;i<=mx;i++)
  {
     if(mark[i]==0) prime.push_back(i);
  }/*
  for(int i=0;i<prime.size();i++)
  {
    cout<<prime[i]<<" ";
  }*/

}

void Prime_factor()
{

  int n;

  for(int i=2;i<=mx;i++)
  {
    n=i;

    for(int j=0;prime[j]*prime[j]<=n;j++)
    {
       if( n%prime[j]==0)
       {
            while(n%prime[j]==0)
            {
                 n/=prime[j];
            }
        factor[i].push_back(prime[j]);
      }
    }
   if(n>1 and n!=i) factor[i].push_back(n);
  }


 }



int BFS(int src, int des)
{
   if((src !=des) && (mark[src]==0)) return -1;
   else if(src==des ) return 0;

    queue<int>que;
    bool vis[mx+2]={0};

    que.push(src);
    dis[src]=0;
    vis[src]=1;

    while(!que.empty())
    {
      int p=que.front();
      que.pop();

      if(p==des) return dis[p];

      for(int i=0;i<factor[p].size();i++)
      {
         int ch=factor[p][i];
         int tmp=ch+p;

         if(tmp<=des && (vis[tmp]==0))
         {
            que.push(tmp);
            dis[tmp]= dis[p]+1;
            vis[tmp]=1;

         }
      }

    }
    return -1;
}

int main()
{
   int tc;

   Sieve();
   Prime_factor();

   cin>>tc;

  for(int cs=1;cs<=tc;cs++)
  {
      cin>>num>>t;
      cout<<"Case "<<cs<<": ";

      cout<<BFS(num, t)<<endl ;
   }

  return 0;
}
