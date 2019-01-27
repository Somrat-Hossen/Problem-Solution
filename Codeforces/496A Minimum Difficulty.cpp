#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

#define maxx 1e+5
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

typedef long long int ll;
typedef unsigned long long int ull;
typedef  set<int>             si;
typedef  map<string,int>      mst;
typedef  map<int,int>	      mii;
typedef  map<char,int>        mci;
typedef  map<int,string>	   mis;
typedef  vector<long long> 	   vi;
typedef  vector<string> 	   vs;

map<int,int>mp;
map<int,int>::iterator it;
queue<int>q;
vector<int>vec;

int arr[100000],ar[102];
int dp[1000];
ll two[1000][1000];
int dx[4]= {0,0,1,-1};
int dy[4]= {1,-1,0,0};

string str,st;
ll n,i,x,y,z,j,len,cnt,sum,a,b,c,temp,d,res,k,tc,mod=1000003,t,r,pos,ans,m;
char ch;

int Bigmod(ll a,ll b,ll c)
{
  ll x;
  if(b==0) return 1%c;
  x=Bigmod(a,b/2,c);
  x=(x*x)%c;
  if(b%2)
  {
    x=(x*x*a)%c;
  }
   return x;
}

int check(int ,int)
{



}

int main()
 {
  ///freopen("in.txt","r",stdin);
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

	cin>>n;
	loop(i,n)
	{
	  cin>>ar[i];
	}
	x=1;
	int mx;
	for(i=0;i<n-2;i++)
	{
	   mx=1;
       for(j=0;j<n-1;j++)
       {
         if(((j+1)==x))
         {
            mx=max(mx,(ar[j+2]-ar[j]));
            j++;
         }
         else
         {
            mx=max(mx,(ar[j+1]-ar[j]));
         }
       }
        // cout<<mx<<" ";
       vec.push_back(mx);
       x++;
	}

	sort(vec.begin(),vec.end());
	cout<<vec[0]<<endl;



    return 0;
  }


