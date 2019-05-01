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
ll n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,tmp,d,res=0,k,tc,mod=1000003,t,r,pos=-1,ans=0,m,q;
int arr[2*100005],ar[1000];
int dp[1000];

int dx[4]= {0,0,1,-1};
int dy[4]= {1,-1,0,0};
string str,st;
queue<int>que;
vector<int>vec;
char ch;
stack<int>stk;
bool vis[2*100005];


int one,two;

int main()
 {
   // freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);


	cin>>n;loop(i,n)
	{
	     cin>>arr[i];
	     if(arr[i]==1) one++;
	     else if(arr[i]==2) two++;
	}

	if(!one or !two)
    {
        //sort(arr,arr+n);
        loop(i,n) cout<<arr[i]<<" ";return 0;
    }

  sort(arr,arr+n,greater<int>());
  cout<<arr[0]<<" "<<arr[n-1]<<" ";

   lop(i,n-2)
   {
       if(arr[i]==2) cout<<arr[i]<<" ";
   }
   lop(i,n-2)
   {
       if(arr[i]==1) cout<<arr[i]<<" ";
   }


    return 0;
  }


