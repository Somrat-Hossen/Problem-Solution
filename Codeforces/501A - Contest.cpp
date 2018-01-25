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
int n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,temp,d;
int arr[100000];
int dp[1000];
int two[1000][1000];
string str,st;

int check(int n)
{

}

int main()
{
 int mis,vas;
 cin>>a>>b>>c>>d;

 x=(3*a)/10;
 y=a-((a/250)*c);
 mis=max(x,y);

 x=3*b/10;
 y=b-((b/250)*d);
 vas=max(x,y);

 if(mis==vas)
       cout<<"Tie\n";
 else if(mis>vas)
      cout<<"Misha\n";
 else if(mis<vas)
      cout<<"Vasya\n";

    return 0;
}

