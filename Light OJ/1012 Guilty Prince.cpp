#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

#define maxx 1e+5
#define PI            acos(-1.0)
#define pb            push_back
#define all(x)        (x).begin(), (x).end()
#define clr(ar)        memset(ar, 0, sizeof(ar))
#define loop(i,n)      for(int i=0; i<n; i++)
#define maxint(a,b,c) (a>b)?(a>c)?a:c :(b>c)?b:c
#define READ          freopen("in.txt", "r", stdin);
#define WRITE          freopen("out.txt", "w", stdout);

using namespace std;

typedef long long int ll;
typedef  set<int>             si;
typedef  map<string,int>      mst;
typedef  map<int,int>	      mii;
typedef  map<char,int>        mci;
typedef  map<int,string>	   mis;
typedef  vector<long long> 	   vi;
typedef  vector<string> 	   vs;
int n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,temp,d,res=0,m,tc;
int arr[100000];
int dp[1000];
char two[22][22];
string str,st;
int vis[1000];

int bfs(int i,int j)
 {
   if(two[i][j+1]=='.')
   {
       two[i][j+1]='#';
       res++;
       bfs(i,j+1);
   }
   if(two[i][j-1]=='.')
   {
       two[i][j-1]='#';
       res++;
       bfs(i,j-1);
   }
   if(two[i+1][j]=='.')
   {
       two[i+1][j]='#';
       res++;
       bfs(i+1,j);
   }
   if(two[i-1][j]=='.')
   {
       two[i-1][j]='#';
       res++;
       bfs(i-1,j);
   }
 }

int main()
{
  // freopen("in.txt","r",stdin);
    char ch;
    cin>>tc;
    scanf("%c",&ch);

   for(c=1;c<=tc;c++)
    {
     res=1;
     memset(two,'0',sizeof(two));
      cin>>x>>y;
      //scanf("%c",&ch);
      for(i=1;i<=y;i++)
      {
        for(j=1;j<=x;j++)
        {
          cin>>ch;
          if(ch=='@')
          {
             m=i;n=j;
          }
        else  two[i][j]=ch;
        }
       // cin>>ch;
      }
      bfs(m,n);
      cout<<"Case "<<c<<": "<<res<<endl;
    }

    return 0;
}
