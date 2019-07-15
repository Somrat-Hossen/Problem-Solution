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
#define WRITE         freopen("out.txt", "w", stdout);

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
ll n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,tmp,d,res=0,k,tc,mod=1000003,t,r,pos,ans=0,m,q,l;
int arr[100005],ar[1000];
int dp[1000];
ll two[1000][1000];
int dx[4]= {0,0,1,-1};
int dy[4]= {1,-1,0,0};
string str,st;
queue<int>que;
vector<int>vec;
char ch;

int mx=INT_MIN,mn=INT_MAX;

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

	cin>>n>>m;

	if(n==1 && m>4) cout<<-1;
	else if( ((n*2+2)<m)  or ((n-1)>m) ) cout<<-1<<endl;


	else
   {
      string st;
      st="";
      res=n+m;
      a=n,b=m;


        while(n and m)
        {
           if(n*2<=m)
           {
              st+="110";
              cnt+=3;
              n--;
              m-=2;
           }
           else
           {
              st+="10";
              n--;
              m--;
           }
        }
          for(i=1;i<=m;i++)
          {
             st+='1';   ///only two 11 can be added at the last
             cnt++;
          }
          if(n) st='0'+st; ///only zero can be remain
        cout<<st<<endl;
   }






    return 0;
  }


