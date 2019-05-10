#include <bits/stdc++.h>
#define mx 30005
using namespace std;

typedef long long ll;

int currL = 0,currR =-1;
int cnt = 0;
int res[2*100005],arr[mx],vis[1000005];

int block;

struct Query
{
	int L, R,id;
};

bool compare(Query x,Query y)
{

    if (x.L/block != y.L/block)  /// Different blocks, sort by block.
      return x.L/block < y.L/block;

    return x.R < y.R; /// Same block, sort by R value
}

void Add(int x)
{
  vis[arr[x]]++;
  if(vis[arr[x]]==1) cnt++;
}
void Remove(int x)
{
  vis[arr[x]]--;
  if(vis[arr[x]]==0) cnt--;
}


void queryResults(int arr[], int n, Query q[], int m)
{
    block = (int)sqrt(n);
    sort(q, q + m, compare);

  /*for(int i=0;i<m;i++)
	{
	 cout<<q[i].L<<" "<<q[i].R<<" "<<q[i].id<<endl;
	}
	*/

    for (int i=0; i<m; i++)
    {
        int l = q[i].L, r = q[i].R;

      while(currL > l) Add(--currL);
      while(currR < r) Add(++currR);
      while(currL < l) Remove(currL++);
      while(currR > r) Remove(currR--);

     res[q[i].id]=cnt;

    }
}


int main()
{
    //freopen("in.txt","r",stdin);

    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

	Query q[2*100005];
	int n,m;

	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&arr[i]);

	scanf("%d",&m);

	for(int i=0;i<m;i++)
	{
	  scanf("%d %d",&q[i].L,&q[i].R);
	  q[i].id=i;
	}

	queryResults(arr, n, q, m);

	for(int i=0;i<m;i++)
	{
	   printf("%d\n",res[i]);
	}

  return 0;
}
