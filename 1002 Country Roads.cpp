#include<bits/stdc++.h>
#define mx 505
using namespace std;

typedef long long ll;
typedef pair <int,int >pr;

int dis[mx];
vector<pr>edge[mx];
const int infinity =1000000000;
bool vis[mx];


class data
{
  public:
  int node;
  int  cost;

  data(int n,int c)
  {
     node=n;
     cost=c;
  }
   bool operator >(const data &a)const {
        return cost > a.cost;
    }

};

bool operator<(data a, data b)
{
    return a.cost>b.cost;
}

void Dijkstra(int src,int n)
{
   priority_queue<data>q;

   q.push(data(src,0));
   dis[src] =0;

    while(!q.empty())
    {
         data u = q.top();
         q.pop();
         vis[u.node]=1;

        for (int i=0; i<edge[u.node].size(); i++)
        {
           int v = edge[u.node][i].first;
           int wet = max(edge[u.node][i].second,dis[u.node]);

          if(dis[v] > wet && !vis[v])
          {
             dis[v] = wet;
             q.push(data(v,dis[v]));
          }
        }
    }


  for(int i=0;i<n;i++)
  {
    if(dis[i]==infinity) printf("Impossible\n");
    else printf("%d\n",dis[i]);

  }
  return;
}

void Clear()
{
  for(int i=0;i<mx;i++)
  {
    edge[i].clear();
    dis[i]=infinity;
    vis[i]=0;
  }

}


int main()
{

  freopen("in.txt","r",stdin);
  for(int i = 0; i < mx; i++) dis[i] = infinity;

  int n,e,tc,i,j,u,v,wet,src,des;


   scanf("%d",&tc);

  for(int cs=1;cs<=tc;cs++)
  {
      Clear();
    printf("Case %d:\n",cs);
      scanf("%d %d",&n,&e);

      for(int i=0;i<e;i++)
      {
         scanf("%d %d %d",&u,&v,&wet);

         edge[u].push_back(make_pair(v,wet));
         edge[v].push_back(make_pair(u,wet));
      }

       scanf("%d",&src);


      Dijkstra(src,n);
  }

  return 0;
}



