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
map<int,int>mp;
map<int,int>::iterator it;
ll n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,temp,d,res=0,k,tc,mod=1000003,t,r,pos,ans=0,m;
int arr[100000],ar[1000];
int dp[1000];
ll two[1000][1000];
int dx[4]= {0,0,1,-1};
int dy[4]= {1,-1,0,0};
string str,st;
queue<int>q;
vector<int>vec;
char ch;

int check(int ,int)
{

}

int main()
 {
     cin>>n;
     if(n<10){cout<<n<<endl; return 0;}

      else if(n>=10 and n<=99)
        {
            res+=(n-9)*2+9;

        }
        else if(n>=100 and n<=999)
        {
            res+=(n-99)*3+189;

        }
        else if(n>=1000 and n<=9999)
        {
            res+=(n-999)*4+2889;

        }
        else if(n>=10000 and n<=99999)
        {
            res+=(n-9999)*5+38889;

        }
        else if(n>=100000 and n<=999999)
        {
            res+=(n-99999)*6+488889;

        }
        else if(n>=1000000 and n<=9999999)
        {
            res+=(n-999999)*7+5888889;

        }
        else if(n>=10000000 and n<=99999999)
        {
            res+=(n-9999999)*8+68888889;

        }
        else if(n>=100000000 and n<=999999999)
        {
            res+=(n-99999999)*9+788888889;

        }
        else
        {
            res=8888888889+10;
        }
        cout<<res<<endl;


    return 0;
  }










