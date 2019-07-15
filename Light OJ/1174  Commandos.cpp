#include<bits/stdc++.h>
#define mx 105
using namespace std;

int u,e,nd,i,j,f,s,src,x,y,des,n,tc;
vector<int>v[mx];
int vis[mx],dis[mx],dis2[mx];
//int dis[mx];
queue<int> q;


void Clear()
{
  for(int i=0;i<mx;i++)
  {
     vis[i]=dis[i]=dis2[i]=0;
     v[i].clear();
  }

}

void BFS(int src)
{
    q.push(src);
    vis[src]=1;
    dis[src]=0;

    while(!q.empty())
    {
        f=q.front();
        q.pop();

        for(int i=0;i<v[f].size();i++)
        {
            s=v[f][i];
            if(vis[s]==0)
            {
                q.push(s);
                vis[s]=1;
               dis[s]=dis[f]+1;
            }
         }
     }
}
void BFS2(int src)
{

   memset(vis,0,sizeof(vis));

    q.push(src);
    vis[src]=1;
    dis2[src]=0;

    while(!q.empty())
    {
        f=q.front();
        q.pop();

        for(int i=0;i<v[f].size();i++)
        {
            s=v[f][i];
            if(vis[s]==0)
            {
                q.push(s);
                vis[s]=1;
               dis2[s]=dis2[f]+1;
            }
         }
     }
}


int main()
{
 // freopen("in.txt","r",stdin);


 cin>>tc;

  for(int cs=1;cs<=tc;cs++)
  {
     cin>>nd>>e;

     for(i=0;i<e;i++)
     {
       cin>>x>>y;
       v[x].push_back(y);
       v[y].push_back(x);
     }
     cin>>src>>des;

     BFS(src); ///Function call
     BFS2(des);

     int maxx=INT_MIN;

     for(int i=0;i<nd;i++)
     {
        maxx=max(maxx,dis[i]+dis2[i]);
     }

     cout<<"Case "<<cs<<": "<<maxx<<endl;

     Clear();
  }

    return 0;
}

