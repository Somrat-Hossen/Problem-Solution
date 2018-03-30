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
ll n,i,x,y,z,j,len,cnt(0),sum=0,temp,d,res=0,k,tc,m;
int arr[100000],ar[1000];
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
     double r1,r2,r3,a,b,c,A,B,C,s,area,farea;
     int t;
     cin>>t;
     for(i=1;i<=t;i++)
     {
      cin>>r1>>r2>>r3;
      a=r1+r2; b=r1+r3; c=r2+r3;
      A=acos((b*b+c*c-a*a)/(2*b*c));
      B=acos((a*a+c*c-b*b)/(2*a*c));
      C=acos((b*b+a*a-c*c)/(2*b*a));
      s=(a+b+c)/2;
      area=sqrt(s*(s-a)*(s-b)*(s-c));
      farea=(0.5)*(r1*r1*C+r2*r2*B+r3*r3*A);
      cout<<"Case "<<i<<": "<<fixed<<setprecision(9)<<area-farea<<endl;

     }



    return 0;
  }

