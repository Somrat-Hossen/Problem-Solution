#include <bits/stdc++.h>
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
#define mod 10000007
#define Check(r,c) ((r>=0 && r<=7) && (c>=0 && c<=7))
#define input(c) scanf("%d",&c)

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
int  n,i,x,y,z,j,len,cnt,sum,a,b,c,tmp,d,res=0,k,tc,t,r,pos,ans,m,q,l;
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

ll Bigmod(ll a,ll b,ll c)
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

void Solve()
{

}

int main()
 {
   ///freopen("in.txt","r",stdin);
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);



         cin>>n>>q;

         loop(i,n) cin>>arr[i];

         sort(arr,arr+n);

         while(q--)
         {
            cnt=0;
            cin>>k;
            int pos,start=0;

           for(int i=0;i<n;i++)
            {
               if(arr[i]>=k) cnt++;
               if(arr[i]<k) pos=i;
           }
           if(cnt=0) pos--;
           cout<<cnt<<" "<<pos<<endl;

           int tmp=k-arr[pos];

           while((start+tmp<pos)&& (start<pos) )
           {
              start+=(tmp-1);
              pos--;
              tmp=k-arr[pos];
              cnt++;
           }
           cout<<cnt<<endl;
      }
   }




    return 0;
  }


