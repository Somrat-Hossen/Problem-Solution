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
     si st;//set declaration;
     cin>>n;
     for(i=0;i<n;i++)
     {
         cin>>arr[i];
         st.insert(arr[i]);
         if(arr[i]==1) cnt++;
     }
     if(st.size()==n) cout<<1<<endl<<n;
     else if(st.size()==1)
     {
        cout<<n<<endl;
        for(i=0;i<n;i++)
        {
            cout<<arr[0]<<" ";
        }
     }
     else{
        res=1;
        cout<<cnt<<endl;
        for(i=1;i<n;i++)
        {
            res++;
            if(arr[0]==arr[i])
            {
                cout<<res-1<<" "; res=1;
            }
        }
        cout<<res;
     }

    return 0;
  }


