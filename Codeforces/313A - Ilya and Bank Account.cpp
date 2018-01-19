#include <bits/stdc++.h>
#define maxint(a,b,c) (a>b)?(a>c)?a:c :(b>c)?b:c
#include<iomanip>
#define PI acos(-1)
typedef long long int ll;
using namespace std;
ll n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,temp;
int arr[1000];
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
 char st[1000];
 cin>>st;
 temp=atoi(st);
 if(temp>=10)
  {
     cout<<temp<<endl;
  }
  else if(temp==-10 || temp==-20 ||temp==-30||temp==-40 ||temp==-50 ||temp==-60 ||temp==-70 ||temp==-80 ||temp==-90)
  {
      cout<<0<<endl;
  }
  else if(temp<-10)
  {
     len=strlen(st);
     a=st[len-1]-'0';
     b=st[len-2]-'0';
  for(i=0;i<len-2;i++)
  {
     cout<<st[i];
  }
  cout<<min(a,b)<<endl;
  }
    return 0;
}

