#include<bits/stdc++.h>
#define mx 2*10005
using namespace std;

int tc;
int indeg[mx];
vector<int>edge[mx];
vector<int>path;

map<string ,int>mps;


void Clear()
{
   for(int i=0;i<mx;i++)
   {
      indeg[i]=0;
      edge[i].clear();
   }
   mps.clear();
}

void Topological(int n)
{
   queue<int>que;

   for(int i=1;i<=n;i++)
   {
      if(indeg[i]==0) que.push(i);
   }
   int flug=0;

     while(!que.empty())
     {
        int pa=que.front();
        que.pop();
       /// paths.push_back(pa); ///push int in a vector of int type

        for(int i=0;i<edge[pa].size();i++)
        {
           int ch=edge[pa][i];
           indeg[ch]--;
           if(indeg[ch]==0) que.push(ch);
        }
        flug++;
     }
     if(n==flug) cout<<"Yes"<<endl;
     else cout<<"No"<<endl;
}


int main()
{
   //freopen("in.txt","r",stdin);

   cin>>tc;

   for(int cs=1;cs<=tc;cs++)
   {
         Clear();

         int cnt=0;       ///node will be mapped from 1
         int u,v,n;
         string s1,s2;
         int node=0;

         cin>>n;
         for(int i=1;i<=n;i++)
         {
            cin>>s1>>s2;
            if(mps.find(s1)!=mps.end())
            {
               u=mps[s1];
            }
            else
            {
               mps[s1]= ++cnt;
               u=cnt;
               node++;
            }

            if(mps.find(s2)!=mps.end())
            {
               v=mps[s2];
            }
            else
            {
               mps[s2]= ++cnt;
               v=cnt;
               node++;
            }

            indeg[v]++;           ///count indegree of each node
            edge[u].push_back(v);     ///Directed graph
         }

         cout<<"Case "<<cs<<": ";

      Topological(node);
}

   return 0;
}

