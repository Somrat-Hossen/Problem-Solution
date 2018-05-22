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
ll n,i,x,y,z,j,len,cnt(0),sum=0,a=0,b=0,c=0,temp,d,res=0,k,tc,m=1000003,t,r;
int arr[100000],ar[1000];
int dp[1000];
ll two[1000][1000];
int dx[4]= {0,0,1,-1};
int dy[4]= {1,-1,0,0};
string str,st;
queue<int>q;
vector<int>vec;
char ch;


int main()
 {
     vector<char> ch;
     getline(cin,str);
     len=str.size();

    for(i=0;i<len;i++)
    {
        ch.push_back(str[i]);
    }
    sort(ch.begin(),ch.end());
    for(i=0;i<len;i++)
    {
        if(str[i]!=ch[i])
        {
            puts("NO");return 0;
        }
    }

     for(i=0;i<len;i++)
     {
       if(str[i]=='a') a++;
       else  if(str[i]=='b') b++;
       else  if(str[i]=='c') c++;
     }
     if(a==0|| b==0 || c==0) {puts("NO"); return 0;}
     if((c==a) ||(c==b) ) puts("YES");
     else puts("NO");


    //cout<<a<<" "<<b<<" "<<c;
    return 0;
  }

