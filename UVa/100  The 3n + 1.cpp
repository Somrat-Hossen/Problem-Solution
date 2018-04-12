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
int n,i,x,y,z,j,len,cnt,sum,a,b,c,temp,d,res,m;
int arr[100000];
int dp[1000];
int two[1000][1000];
string str,st;

int check(int n)
{

}

int main()
{
    //int n,m,i,k,j,c,s;
    while(scanf("%d %d",&n,&m)==2)
    {
        //sum=INT_MIN;
         res=0;
        printf("%d %d ",n,m);
        if(n>m)
        {
            swap(n,m);
        }
        for(i=n; i<=m; i++)
        {
            cnt=1;
            x=i;
            while(x!=1)
            {
                if(x % 2==0)
                    x = x/2;
                else
                    x = (3*x)+1;
                cnt++;
            }
           // if(cnt>=sum)
               // sum=cnt;
               res=max(res,cnt);
        }
        printf("%d\n",res);
    }
    return 0;
}

