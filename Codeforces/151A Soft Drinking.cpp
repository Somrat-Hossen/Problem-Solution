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
//ll n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,temp,d,res=0,k;
//int arr[100000];
int dp[1000];
int two[1000][1000];
int dx[4]= {0,0,1,-1};
int dy[4]= {1,-1,0,0};
string str,st;
char ch;

    int check(int n)
    {

    }

int main()
 {
     ll n, k, l, c, d, p, nl, np,x,y,z,res;
     cin>>n>>k>>l>>c>>d>>p>>nl>>np;
     x=(k*l)/nl; y=(c*d); z=p/np;
     res=(minint(x,y,z))/n;
     cout<<res<<endl;

        return 0;
  }

