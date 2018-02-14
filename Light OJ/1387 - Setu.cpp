#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

#define maxx 1e+5
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
typedef  vector<long long> 	   vi;
typedef  vector<string> 	   vs;
int n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,temp,d,res=0,tc;
int arr[100000];
int dp[1000];
int two[1000][1000];
string str,st;

int check(int n)
{

}

int main()
{
  cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>n;sum=0;
        cout<<"Case "<<i<<":"<<endl;
        while(n--)
        {
            cin>>str;
            if(str[0]=='d')
            {
                cin>>x;
                sum+=x;
            }
            else
            {
                cout<<sum<<endl;
            }
        }
    }

    return 0;
}

