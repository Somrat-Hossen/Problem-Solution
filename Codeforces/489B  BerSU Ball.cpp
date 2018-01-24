#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

#define maxx 105
#define PI            acos(-1.0)
#define pb            push_back
#define all(x)        (x).begin(), (x).end()
#define clr(ar)        memset(ar, 0, sizeof(ar))
#define loop(i,n)      for(int i=0; i<n; i++)
#define maxint(a,b,c) (a>b)?(a>c)?a:c :(b>c)?b:c
#define READ          freopen("in.txt", "r", stdin);
#define WRITE          freopen("out.txt", "w", stdout);

using namespace std;
typedef long long int ll;
typedef  set<int>             si;
typedef  map<string,int>      mst;
typedef  map<int,int>	      mii;
typedef  map<char,int>        mci;
typedef  map<int,string>	   mis;
typedef  pair<int,int> 	       ii;
typedef  pair<string, int>     psi;
typedef  vector<long long> 	   vi;
typedef  vector<string> 	   vs;
typedef  vector< ii >          vii;
int n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,temp,m;
int arr[maxx],ar[maxx];
int dp[1000];
int two[1000][1000];
vector<int>vec;
stack<int>stk;
string str,st;

int check(int n)
{

}

int main()
{
     cin>>n;
     for(i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     cin>>m;
     for(i=0;i<m;i++)
     {
         cin>>ar[i];
     }
        sort(arr,arr+n);
        sort(ar,ar+m);

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(abs(arr[i]-ar[j])==0 or abs(arr[i]-ar[j])==1)
            {
                cnt++;
                ar[j]=-1;
                break;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}

