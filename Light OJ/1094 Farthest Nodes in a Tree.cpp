#include<bits/stdc++.h>
#define mx 30005
using namespace std;

int u,e,n,i,j,f,s,src,x,y;

vector<pair<int, int> >edge[mx];
int vis[mx],dis[mx];
queue<int> q;



void Clear()
{
  for(int i=0;i<mx;i++)
  {
     vis[i]=dis[i]=0;
  }
}
void Clear_mem()
{
    for(int i=0;i<mx;i++)
    {
      vis[i]=dis[i]=0;
      edge[i].clear();
    }

}

int traversal(int src,int n)
{
    q.push(src);
    vis[src]=1;
    dis[src]=0;

    while(!q.empty())
    {
        f=q.front();
        q.pop();

        for(i=0;i<edge[f].size();i++)
        {
            int nod = edge[f][i].first;
            int cost = edge[f][i].second;

            if(vis[nod]==0)
            {
                q.push(nod);
                vis[nod]=1;
                dis[nod]=dis[f]+cost;
            }
         }
     }

    // cout<<dis[n-1]<<endl;
     int node,mxx=-1;

     for(int i=0;i<n;i++)
     {
        if(mxx<dis[i])
        {
          mxx=dis[i];
          node=i;
        }

     }
    return node;
}


int main()
{
  freopen("in.txt","r",stdin);
  int tc;
  scanf("%d",&tc);

  for(int cs=1;cs<=tc;cs++)
  {
      int wet;
      scanf("%d",&n);

      for(i=0;i<n-1;i++)
      {
        scanf("%d %d %d",&x,&y,&wet);

        edge[x].emplace_back(make_pair(y,wet));
        edge[y].emplace_back(make_pair(x,wet));
      }



     int first= traversal(0,n); ///Function call
     Clear();
     int second=traversal(first,n);
     //cout<<first<<" "<<second<<endl;

     printf("Case %d: %d\n",cs,dis[second]);
     Clear_mem();

  }


    return 0;
}


