#include <bits/stdc++.h>
#define mx 502

typedef long long ll;
using namespace std;

bool vis [502][502];
char ch [502][502];
int res[502][502];

int n,i,j,m,q,cnt,x,y,tc;
char c;

bool Check(int r,int c)
{
    return ((r>=1 && r<=n) && (c>=1 && c<=m));
}

void All_clear()
{
  for(int i=1;i<=500;i++)
  {
    for(int j=1;j<=500;j++)
    {
       vis[i][j]=0;
       res[i][j]=-1;
       ch[i][j]='0';
    }
  }
}
void Clear()
{
   for(int i=1;i<=500;i++)
  {
    for(int j=1;j<=500;j++)
    {
       vis[i][j]=0;
    }
  }
}

 int Collection(int i,int j)
 {
    if (Check(n,m))
    {
        if(((ch[i][j]=='C') || (ch[i][j]=='.')) && (vis[i][j]==0) )
        {
           if(ch[i][j]=='C') cnt++;
           vis[i][j]=1;

           Collection(i+1,j);
           Collection(i-1,j);
           Collection(i,j-1);
           Collection(i,j+1);
        }
    }
 }

int main()
{

    //freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

    scanf("%d",&tc);
    for(int cs=1;cs<=tc;cs++)
    {
       All_clear();

       scanf("%d %d %d",&n,&m,&q);

       for(i=1;i<=n;i++)
       {
         for(j=1;j<=m;j++)
         {
            scanf(" %c",&c);
            ch[i][j]=c;
         }
       }

       printf("Case %d:\n",cs);

       while(q--)
       {
          cnt=0;
          scanf("%d %d",&x,&y);

          if(res[x][y]!=-1)
          {
            printf("%d\n",res[x][y]);
          }

          else
          {
             cnt=0;
             Clear();
             Collection(x,y);

             printf("%d\n",cnt);

             for(int i=1;i<=n;i++)
             {
                for(int j=1;j<=m;j++)
                {
                   if(vis[i][j])
                   {
                      res[i][j]=cnt;
                   }
                }

             }

          }
       }
    }

    return 0;
}

