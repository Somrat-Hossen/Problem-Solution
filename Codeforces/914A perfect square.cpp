#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

#define maxx 1000
#define PI            acos(-1.0)
#define pb            push_back
#define all(x)        (x).begin(), (x).end()
#define clr(ar)        memset(ar, 0, sizeof(ar))
#define loop(i,n)      for(int i=0; i<n; i++)
#define maxint(a,b,c) (a>b)?(a>c)?a:c :(b>c)?b:c
#define READ           freopen("in.txt", "r", stdin);
#define WRITE          freopen("out.txt", "w", stdout);

using namespace std;
typedef long long int ll;
typedef  set<int>             si;
typedef  map<string,int>      mst;
typedef  map<int,int>	      mii;
typedef  map<char,int>        mci;
typedef  map<int,string>	   mis;
typedef  vector<long long> 	   vl;
typedef  vector<string> 	   vs;
typedef  vector< int >          vi;

ll n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,temp;
int arr[100000];
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
 ll mx=INT_MIN;
 cin>>n;
 loop(i,n)
 {

   cin>>x;
   if(x>=0)
   {
     a=sqrt(x);
     if(a*a!=x and x>mx)
      mx=x;
   }
  else
      mx=max(mx,x);
 }

 cout<<mx<<endl;
    return 0;
}
