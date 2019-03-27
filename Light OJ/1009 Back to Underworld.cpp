#include<bits/stdc++.h>
#define mx 100000
#define B -1
#define W -2
using namespace std;

int vis[mx+2];
vector<int>vec[mx+2];
int n,tc,i,j,black,white,src,u,v;
int color[mx+2];


int BFS(int src)
{
  black=white=0;
  queue<int>que;

   que.push(src);
   color[src]=B;
   black++;

    while(!que.empty())
    {
       int p=que.front();
       que.pop();

       for(int i=0;i<vec[p].size();i++)
       {
           int ch=vec[p][i];

           if(color[ch]!=B && color[ch]!=W)
           {
              if(color[p]==B)
              {
                 color[ch]=W;
                 white++;
              }

              else
              {
                 color[ch]=B;
                 black++;
              }
           que.push(ch);
           }
       }

    }
  //cout<<white<<black<<endl;
     return (max(black,white));
}

void Clear()
{
  for(int i=0;i<mx+1;i++)
  {
    vec[i].clear();
  }
  memset(color,0,sizeof(color));
  black=white=0;
}

long long res;
int main()
{
  cin>>tc;
  for(int cs=1;cs<=tc;cs++)
  {
        res=0;
         cin>>n;

         Clear();

         for(int i=0;i<n;i++)
         {
              cin>>u>>v;
              vec[u].push_back(v);
              vec[v].push_back(u);
         }

         for(i=1;i<=20000;i++)
         {
            if(color[i]==0  && vec[i].size()!=0)
            {
               res+=BFS(i);
            }
         }

         cout<<"Case "<<cs<<": "<<res<<endl;
       }

 return 0;
}


