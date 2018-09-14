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
//typedef  map<string,int>      mst;
//typedef  map<int,int>	      mii;
//typedef  map<char,int>        mci;
//typedef  map<int,string>	   mis;
typedef  vector<long long> 	   vi;
typedef  vector<string> 	   vs;
////map<int,int>mp;
//map<int,int>::iterator it;
ll n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,temp,d,res=0,k,tc,mod=1000003,t,r,pos,ans=0,m;
int arr[100000],ar[1000];
int dp[1000];
ll two[1000][1000];
int dx[4]= {0,0,1,-1};
int dy[4]= {1,-1,0,0};
string str,st;
queue<int>q;
vector<int>vec;
char ch,s;

int check(int ,int)
{

}

int main()
 {
     map<char,char>mp;
     map<string,string>::iterator it;

       mp['A']='A';  mp['E']='3';  mp['H']='H'; mp['I']='I'; mp['M']='M'; mp['J']='L'; mp['0']='0'; mp['O']='O'; mp['S']='2'; mp['T']='T';
       mp['U']='U'; mp['Z']='5'; mp['V']='V'; mp['W']='W'; mp['X']='X'; mp['Y']='Y'; mp['1']='1'; mp['2']='S'; mp['3']='E'; mp['8']='8';
       mp['5']='Z'; mp['L']='J';

    while(cin>>st)
    {
        res=0;cnt=0;
        n=st.size();
     for(i=0,j=n-1;i<=n/2;i++,j--)
       {
            if(st[i]!=st[j])
            {
                cnt++;
            }
            if(st[i]!=mp[st[j]])
            {
                res++;
            }
       }
       cout<<st<<" -- ";
       if(cnt and res) puts("is not a palindrome.\n");
       if(cnt and !res) puts("is a mirrored string.\n");
       if(!cnt and res) puts("is a regular palindrome.\n");
       if(!cnt and !res) puts("is a mirrored palindrome.\n");

    }
    return 0;
  }









