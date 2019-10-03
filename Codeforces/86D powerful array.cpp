#include <bits/stdc++.h>
#define mx 2*100005
using namespace std;

typedef long long ll;

int currL = 0,currR =0;
ll sum = 0;
ll res[mx];
ll arr[mx];
ll vis[1000005];

int block;

struct Query
{
	int L, R,id;
}q[mx];

bool compare(Query x,Query y)
{
    /// of the same block are arranged together and within a block,
     /// queries are sorted in increasing order of R values.
    if (x.L/block != y.L/block)  /// Different blocks, sort by block.
      return x.L/block < y.L/block;

    return x.R < y.R; /// Same block, sort by R value
}

void Add(int x)
{
   sum-= (vis[arr[x]]* vis[arr[x]] * arr[x]); ///remove the previous computation
   vis[arr[x]]++;
   sum+=(vis[arr[x]]* vis[arr[x]] * arr[x]);///add the present value
}
void Remove(int x)
{
   sum-=(vis[arr[x]]* vis[arr[x]] * arr[x]);
   vis[arr[x]]--;
   sum+=(vis[arr[x]]* vis[arr[x]] * arr[x]);
}

void queryResults(int n, int m)
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

      while(currL < l) Remove(currL++);
      while(currL > l) Add(currL-1),currL--;
      while(currR <= r) Add(currR++);
      while(currR > r+1) Remove(currR-1),currR--;

     res[q[i].id]=sum;
    }
}


int main()
{
    //freopen("in.txt","r",stdin);

   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);


   int n,m;
	scanf("%d%d",&n,&m);

	for(int i=0;i<n;i++) scanf("%d",&arr[i]);

	for(int i=0;i<m;i++)
   {
      scanf("%d%d",&q[i].L,&q[i].R);
      q[i].id=i;
      q[i].L--;
      q[i].R--;
   }

   queryResults(n,m);

   for(int i=0;i<m;i++)
   {
      printf("%lld\n",res[i]);
   }

  return 0;
}

