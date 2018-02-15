#include<bits/stdc++.h>
#include<vector>
#define pb push_back
using namespace std;

char vis[1000];
vector<int>path;
vector<int>Adj[205];
int pa[1000],dist[1000];
queue<int> q;
int Findcolor(int src)
{
    q.empty();
    memset(vis,'0',sizeof(vis));
    q.push(src); vis[src]='r';
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i=0,len=Adj[u].size();i<len;i++)
        {
            int f = Adj[u][i];
            if(vis[f]!='r' && vis[f]!='b')
            {
                if(vis[u]=='r')///check parrent's color.child color must inverse of parrent
                    vis[f]='b';
                else
                    vis[f]='r';

                q.push(f);   ///it works for both if or else  statement
            }
            else
             {
                if(vis[f]==vis[u])///if child and parrent color are same.then .....
                    return 0;
             }
        }
    }
    return 1;
 }
int main()
 {  /// freopen("in.txt","r",stdin);
    int e,u,v,res,src,d,n;
      while(scanf("%d",&n)&&n!=0)
      {
         cin>>e;
         for(int i = 0; i < n; i++) Adj[i].clear();

        for(int i=0;i<e;i++)
         {
            cin>>u>>v;
            Adj[u].pb(v);
            Adj[v].pb(u);
         }
        res=Findcolor(u);
        if(res==0)
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;
      }

    return 0;
}

