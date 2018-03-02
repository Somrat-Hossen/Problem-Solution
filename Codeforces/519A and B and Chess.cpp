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
ll n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,temp,d,res=0,k;
//int arr[100000];
int dp[1000];
char two[10][10];
int dx[4]= {0,0,1,-1};
int dy[4]= {1,-1,0,0};
string str,st;

int check(int n)
{

}

int main()
{
   /// READ;
    char ch;
     for(i=1;i<=8;i++)
     {
         for(j=1;j<=8;j++)
         {
             cin>>ch;

             if(ch=='Q') sum+=9;
             else  if(ch=='R') sum+=5;
             else  if(ch=='B') sum+=3;
             else  if(ch=='N') sum+=3;
             else  if(ch=='P') sum+=1;
             else  if(ch=='q') res+=9;
             else  if(ch=='r') res+=5;
             else  if(ch=='b') res+=3;
             else  if(ch=='n') res+=3;
             else  if(ch=='p') res+=1;
         }
         scanf("%c",&ch);
     }

     if(sum>res) puts("White\n");
     else if(sum<res) puts("Black\n");
     else puts("Draw\n");

    return 0;
}

