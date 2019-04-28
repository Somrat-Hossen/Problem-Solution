 #include <bits/stdc++.h>
#define mx 2*100005
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

#define Check(r,c) ((r>=0 && r<=7) && (c>=0 && c<=7))
#define Check(a,b,c) ((a>b)?(a>c)?a:b: (b>c)?b:c)

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef  map<string,int>      mst;
typedef  map<int,int>	      mii;
typedef  map<char,int>        mci;
typedef  map<int,string>	   mis;
typedef  vector<long long> 	   vi;
typedef  vector<string> 	   vs;

map<int,int>mp;
map<int,int>::iterator it;
ll n,i,x,y,z,j,len,sum=0,a,b,c,tmp,d,res=0,k,tc,mod=1000003,t,r,pos,ans=0,m,q;
int arr[2*100005],repeat[2*100005];
int dp[1000],test[2*100005];
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
int cnt;
int main()
 {
   //freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

	set<int>st;
	set<int>::reverse_iterator it;

   cin>>n;

   loop(i,n)
   {
     cin>>arr[i];
     st.insert(arr[i]);
     repeat[arr[i]]++;
     if(repeat[arr[i]]==2) cnt++;
     else if(repeat[arr[i]]>=3) tmp++;
   }
   sort(arr,arr+n);

  // sort(repeat,repeat+cnt);
  // cout<<"Cnt"<<cnt<<endl;
   //loop(i,n)cout<<arr[i]<<" ";

   //cout<<endl;
  // for(int i=0;i<mx;i++) if(repeat[i]==2)cout<<i<<" ";
   if(tmp)
   {
      cout<<"NO"<<endl;
      return 0;
   }

  cout<<"YES"<<endl;

   if(cnt)
   {
       cout<<cnt<<endl;
       loop(i,mx)
       {
          if(repeat[i]==2)
          {
             cout<<i<<" ";
          }
        }
       cout<<endl;
       cout<<n-cnt<<endl;


       for(it=st.rbegin();it!=st.rend();it++)
       {
          cout<<*it<<" ";
       }
   }
   else
   {
      cout<<n/2<<endl;
     for(i=0;i<n/2;i++) cout<<arr[i]<<" ";
     cout<<endl;

     cout<<n-(n/2)<<endl;
     for(int i=n-1;i>=n/2;i--)
     {
        cout<<arr[i]<<" ";
     }

   }



    return 0;
  }


