#include <bits/stdc++.h>

#define maxx 1e+5
#define mx 2*100000
#define PI            acos(-1.0)
#define pb            push_back
#define all(x)        (x).begin(), (x).end()
#define clr(ar)        memset(ar, 0, sizeof(ar))
#define loop(i,n)      for(int i=0; i<n; i++)
#define lop(i,n)      for(int i=1; i<=n; i++)
#define maxint(a,b,c) (a>b)?(a>c)?a:c :(b>c)?b:c
#define minint(a,b,c) (a<b)?(a<c)?a:c :(b<c)?b:c
#define READ          freopen("in.txt", "r", stdin);
#define WRITE          freopen("out.txt", "w", stdout);

#define Check(r,c) ((r>=0 && r<=7) && (c>=0 && c<=7))
#define Check(a,b,c) ((a>b)?(a>c)?a:b: (b>c)?b:c)

using namespace std;


int n,i,x,y,z,q,j,len,cnt(0),sum=0,a,b,c,temp,d,res=0,k,tc,mod=1000003,t,r,pos,ans=0,m;
int arr[200005],ar[200005];
int mark[mx+2];
int main()
 {
  ///freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

  cin>>n>>k>>q;
  lop(i,n)
  {
    cin>>x>>y;
    arr[x]++;
    arr[y+1]--;
  }

  lop(i,mx)
  {
    sum+=arr[i];
    if(sum>=k) mark[i]=mark[i-1]+1;
    else mark[i]=mark[i-1];
  }
  for(int i=90;i<=100-1;i++) cout<<mark[i]<<" ";
  while(q--)
  {
     cin>>a>>b;
     cout<<mark[b]-mark[a-1]<<endl;

  }



    return 0;
  }
