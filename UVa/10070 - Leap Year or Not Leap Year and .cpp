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
ll n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,tmp,d,res=0,k,tc,m=1000003,t,r,coun,e;
int arr[100000],ar[1000];
int dp[1000];
ll two[1000][1000];
int dx[4]= {0,0,1,-1};
int dy[4]= {1,-1,0,0};
//string str,st;
queue<int>q;
vector<int>vec;
char ch;


int main()
 {
     char str[1000];

  while(scanf("%s",&str)==1)
  {
      if(res)
      {
          printf("\n");
      }
      res=1;
      len=strlen(str);
      int m4=0,m100=0,m400=0,m15=0,m55=0,leap=0;
      cnt=0;

     for(i=0;i<len;i++)
      {
         m400=((str[i]-'0')+ (m400*10))%400;
         m4=((str[i]-'0')+ (m4*10))%4;

         m100=((str[i]-'0')+ (m100*10))%100;

         m15=((str[i]-'0')+ (m15*10))%15;

         m55=((str[i]-'0')+ (m55*10))%55;
      }

       if(m400==0 or(m4==0 and m100!=0))
         {
           printf("This is leap year.\n");cnt++;leap++;
         }
       if(m15==0)
         {
           printf("This is huluculu festival year.\n");cnt++;
         }
       if(m55==0 and leap)
         {
           printf("This is bulukulu festival year.\n");///cnt++ not needed ,at first done
         }
      if(!cnt)
          {
            printf("This is an ordinary year.\n");
          }

   }

    return 0;
  }

