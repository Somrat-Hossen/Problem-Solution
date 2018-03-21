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

using namespace std;

typedef long long int ll;
typedef  set<int>             si;
typedef  map<string,int>      mst;
typedef  map<int,int>	      mii;
typedef  map<char,int>        mci;
typedef  map<int,string>	   mis;
typedef  vector<long long> 	   vi;
typedef  vector<string> 	   vs;
ll n,i,x,y,z,j,len,cnt=1,sum=0,a,b,c,temp,d,res=0,k,tc,m;
int arr[100005];
int ar[100005];
int dp[1000];
int two[1000][1000];
int dx[4]= {0,0,1,-1};
int dy[4]= {1,-1,0,0};
string str,st;
queue<int>q;
vector<int>vec;
char ch;

    int check(int n)
    {

    }

int main()
 {
     cin>>tc;
     cin>>m>>n;
     arr[0]=m;ar[0]=n;
     for(i=1;i<tc;i++)
     {
         cin>>m>>n;
         arr[i]=m; ar[i]=n;
         if((arr[i-1]==arr[i]) && (ar[i-1]==ar[i]))
         {
             cnt++;
             res=max(cnt,res);
         }
         else
             cnt=1;
     }
    if(res==0)
         cout<<1<<endl;
    else
         cout<<res<<endl;
    return 0;
  }

