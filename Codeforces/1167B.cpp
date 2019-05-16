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
ll n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,temp,d,res=0,k,tc,mod=1000003,t,r,pos,ans=0,m,q;
int arr[100005],ar[1000];
int dp[1000];
ll two[1000][1000];
int dx[4]= {0,0,1,-1};
int dy[4]= {1,-1,0,0};
string str,st;
queue<int>que;
vector<int>vec;
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
    //freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

	int root[8]={0,16,8,4,15,23,42};
	int prod[8];

	for(i=1;i<=6;i++) sum+=root[i];

	cout<<"? 1 2"<<endl;
	cin>>prod[1];cout<<flush<<endl;

	cout<<"? 1 3"<<endl;
	cin>>prod[2];cout<<flush<<endl;

	cout<<"? 1 4"<<endl;
	cin>>prod[3];cout<<flush<<endl;

	cout<<"? 1 5"<<endl;
	cin>>prod[4];cout<<flush<<endl;

	for(int i=1;i<=6;i++)
   {
       cnt=0;
      for(int j=1;j<=4;j++)
      {
         if(prod[j]%root[i]==0)
         {
            cnt++;
         }
      }
      if(cnt==4)
      {
         prod[0]=root[i];
         break;
      }
   }

   for(int i=1;i<=4;i++)
   {
      prod[i]/=prod[0];
   }

   for(int i=0;i<5;i++)
   {
      ans+=prod[i];
   }
   //cout<<sum<<" "<<ans<<endl;

   prod[5]=sum-ans;

    cout<<"! ";
   for(int i=0;i<=5;i++)
   {
      cout<<prod[i]<<" ";
   }

    return 0;
  }


