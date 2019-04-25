#include<bits/stdc++.h>
#define mx 100002
using namespace std;

typedef long long ll;
typedef pair <int,int >pr;

ll dis[mx];
vector<pr>edge[mx];
const ll infinity =1e+18;
bool vis[mx];

vector<int>path;
int pa[mx];


class data
{
  public:
  int node;
  ll  cost;

  data(int n,ll c)
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

void Dijkstra(int src,int des)
{
   priority_queue<data>q;

   for(int i = 0; i < mx; i++) dis[i] = infinity;

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
           ll wet = edge[u.node][i].second+dis[u.node];

          if(dis[v] > wet && !vis[v])
          {
             dis[v] = wet;
             q.push(data(v,dis[v]));
             pa[v]=u.node;
          }
        }
    }

 // for(int i=1;i<=des;i++) cout<<i<<" :"<<dis[i]<<endl;
  //cout<<dis[des]<<endl;
   if(dis[des]==infinity)
   {
          cout<<-1<<endl;return ;
   }
   else
   {

    int ne=des;
    path.push_back(des);
    while(ne!=src)
    {
        path.push_back(pa[ne]);
        ne=pa[ne];
    }

    reverse(path.begin(),path.end()); ///Reverse the path vector.

    for(int i=0;i<path.size();i++)
    {
        cout<<path[i]<<" "; ///print the path between source to destination
    }
  }
}



int main()
{

 // freopen("in.txt","r",stdin);
  int n,e,i,j,u,v,wet,src,des;

  cin>>n>>e;

  for(int i=0;i<e;i++)
  {
     cin>>u>>v>>wet;

     edge[u].push_back(make_pair(v,wet));
     edge[v].push_back(make_pair(u,wet));
  }


  Dijkstra(1,n);




  return 0;
}


