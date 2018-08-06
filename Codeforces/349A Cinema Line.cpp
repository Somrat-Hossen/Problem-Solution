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
ll n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,temp,d,res=0,k,tc,m=1000003,t,r;
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
     cin>>n;
     int cnt1=0,cnt2=0;
     loop(i,n)
     {
         cin>>arr[i];
     }

 for(i=0;i<n;i++)
  {
     if(arr[i]==25)
     {
         cnt++;
     }
     else if(arr[i]==50)
     {
        if(cnt>0)
        {
            cnt--;cnt1++;
        }
        else {res=1; break;}
     }
     else
     {
         if(cnt>0 and cnt1>0)
         {
          cnt--;cnt1--;
         }
         else if(cnt>=3)
         {
             cnt-=3;
         }
         else{ res=1; break;}
     }
  }

         if(res)
         {
             cout<<"NO"<<endl;
         }
         else
         {
             cout<<"YES"<<endl;
         }


    return 0;
  }
